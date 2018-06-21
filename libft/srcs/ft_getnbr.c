/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:57:23 by tglandai          #+#    #+#             */
/*   Updated: 2016/11/30 18:07:44 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getnbr(char *str)
{
	int		nb;
	int		neg;

	nb = 0;
	neg = 1;
	if (str[0] == '-')
	{
		neg = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb * neg);
}
