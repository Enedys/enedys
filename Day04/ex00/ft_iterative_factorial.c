/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 23:05:49 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/01 15:46:36 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			res *= nb;
			nb -= 1;
		}
		return (res);
	}
}
