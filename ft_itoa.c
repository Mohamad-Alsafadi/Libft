/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsafad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:09:49 by malsafad          #+#    #+#             */
/*   Updated: 2025/06/21 20:55:59 by malsafad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	get_num_length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*return_min_int(int n)
{
	char	*mn;

	mn = malloc(12 * sizeof(char));
	if (mn == NULL)
		return (NULL);
	ft_strlcpy(mn, "-2147483648", get_num_length(n) + 1);
	return (mn);
}

void	to_str(char *ptr, int len, int n)
{
	while (n != 0)
	{
		ptr[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	char	*ptr;

	length = get_num_length(n);
	if (n == -2147483648)
	{
		ptr = return_min_int(n);
		return (ptr);
	}
	ptr = malloc(length + 1);
	if (!ptr)
		return (NULL);
	ptr[length] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	to_str(ptr, length, n);
	return (ptr);
}
