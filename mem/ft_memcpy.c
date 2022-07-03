/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:46:51 by rbiodies          #+#    #+#             */
/*   Updated: 2021/10/13 11:12:06 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*new_dst = (unsigned char *)dst;
	unsigned char	*new_src = (unsigned char *)src;
	unsigned long	i;

	i = 0;
	if (*new_dst == '\0' && *new_src == '\0')
		return ((void *)0);
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (dst);
}
