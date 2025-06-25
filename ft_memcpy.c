/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsafad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:10:49 by malsafad          #+#    #+#             */
/*   Updated: 2025/06/17 17:10:50 by malsafad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*src_str;
	char			*dest_str;

	src_str = (char *)src;
	dest_str = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return (dest);
}
