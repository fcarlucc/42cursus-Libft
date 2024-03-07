/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarlucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:53:43 by fcarlucc          #+#    #+#             */
/*   Updated: 2023/02/01 11:28:21 by fcarlucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	if (src < dst && (src + n) > dst)
		ft_memmove(dst, src, n);
	else
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		while (n-- > 0)
			*(d++) = *(s++);
		return ((void *)dst);
	}
	return ((void *)dst);
}
