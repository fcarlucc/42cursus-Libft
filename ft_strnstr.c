/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarlucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:02:28 by fcarlucc          #+#    #+#             */
/*   Updated: 2023/02/01 11:27:10 by fcarlucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!haystack && len == 0)
		return (NULL);
	if (!nlen)
		return ((char *)haystack);
	while (*haystack && len > nlen && ft_strncmp(haystack, needle, nlen))
	{
		len--;
		haystack++;
	}
	if (len >= nlen && !ft_strncmp(haystack, needle, nlen))
		return ((char *)haystack);
	else
		return (NULL);
}
