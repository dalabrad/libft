/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalabrad <dalabrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:07:06 by dalabrad          #+#    #+#             */
/*   Updated: 2024/04/16 11:20:43 by dalabrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		src_len;
	const char	*ptr_src;

	src_len = ft_strlen(src);
	ptr_src = src;
	if (size == 0)
		return (src_len);
	while ((size - 1) > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (src_len);
}
