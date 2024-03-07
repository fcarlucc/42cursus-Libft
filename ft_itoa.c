/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarlucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:03:01 by fcarlucc          #+#    #+#             */
/*   Updated: 2023/02/01 12:04:44 by fcarlucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_number(int n)
{
	long int	nbr;
	int			len;

	nbr = n;
	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	long int	len;

	len = len_number(n);
	nbr = n;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		*str = '-';
	}
	str[len] = '\0';
	len--;
	while (nbr >= 10)
	{
		str[len] = 48 + (nbr % 10);
		nbr /= 10;
		len--;
	}
	if (nbr >= 0 && nbr < 10)
		str[len] = 48 + (nbr % 10);
	return (str);
}
