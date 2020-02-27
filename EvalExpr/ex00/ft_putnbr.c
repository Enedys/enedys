/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 14:07:08 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/16 20:25:00 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (!(nb / 10 == 0))
		{
			ft_putnbr(-(nb / 10));
		}
		ft_putchar(48 - nb % 10);
	}
	else
	{
		if (nb / 10 == 0)
		{
			ft_putchar(48 + nb % 10);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar(48 + nb % 10);
		}
	}
}
