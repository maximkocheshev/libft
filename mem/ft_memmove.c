/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:46:57 by rbiodies          #+#    #+#             */
/*   Updated: 2021/10/12 16:58:38 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *new_dst = (unsigned char *)dst;
	unsigned char *new_src = (unsigned char *)src;
	int	i;

	i = 0;
	if (*new_dst == '\0' && *new_src == '\0')
		return (((void *)0));
	if (dst < src)
	{
		while (len != 0)
		{	
			new_dst[i] = new_src[i];
			i++;
			len--;
		}
	}
	else
	{
		i = len - 1;
		while (len != 0)
		{
			new_dst[i] = new_src[i];
			len--;
			i--;
		}
	}
	return (dst);
}
