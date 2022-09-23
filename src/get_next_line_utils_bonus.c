/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:30:12 by alfgarci          #+#    #+#             */
/*   Updated: 2022/09/23 11:58:16 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	char	*save;
	int		i;
	int		len1;
	int		len2;

	i = -1;
	if (!s1)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tmp = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	save = tmp;
	if (!tmp)
		return (NULL);
	while (++i < len1)
		*save++ = s1[i];
	i = -1;
	while (++i < len2)
		*save++ = s2[i];
	*save = '\0';
	return (tmp);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[i] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
