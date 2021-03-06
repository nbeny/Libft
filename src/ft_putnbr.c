/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:32:46 by nbeny             #+#    #+#             */
/*   Updated: 2016/11/18 19:01:19 by nbeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr(int n)
{
	unsigned int tmp;

	tmp = n;
	if (n < 0)
	{
		ft_putchar('-');
		tmp = -n;
	}
	if (tmp > 9)
		ft_putnbr(tmp / 10);
	ft_putchar(tmp % 10 + '0');
}
