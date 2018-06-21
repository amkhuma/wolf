/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 11:52:49 by amkhuma           #+#    #+#             */
/*   Updated: 2017/12/08 01:23:10 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	load_textures2(t_wolf3d *t, int a, int b)
{
	t->tex[5].img = mlx_xpm_file_to_image(t->mlx, "textures/sky1.xpm", &a, &b);
	t->tex[5].data = mlx_get_data_addr(t->tex[5].img, &t->tex[5].bpp,
			&t->tex[5].sizeline, &t->tex[5].endian);
	a = 512;
	b = 512;
	t->tex[6].img = mlx_xpm_file_to_image(t->mlx, "textures/sky5.xpm", &a, &b);
	t->tex[6].data = mlx_get_data_addr(t->tex[6].img, &t->tex[6].bpp,
			&t->tex[6].sizeline, &t->tex[6].endian);
}
