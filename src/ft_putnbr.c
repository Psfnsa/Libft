/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabanciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 13:20:06 by mabanciu          #+#    #+#             */
/*   Updated: 2017/12/18 15:07:13 by mabanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	int		s;
	char	nr[10];

	if (n < 0)
	{
		s = -1;
		ft_putchar('-');
	}
	else
		s = 1;
	i = 0;
	while (n || i == 0)
	{
		nr[i++] = (n % 10) * s + 48;
		n /= 10;
	}
	while (--i >= 0)
		write(1, &nr[i], 1);
}
