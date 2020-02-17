/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils_bonus.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/10 13:28:18 by iboeters       #+#    #+#                */
/*   Updated: 2020/01/10 13:28:58 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (0);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

int		ft_strchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;

	str = (char *)s;
	a = c;
	i = 0;
	while (str[i] != a)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;
	char	*str2;

	i = 0;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	str = (void *)malloc(count * size);
	if (!str)
		return (0);
	str2 = (char*)str;
	while (i < count * size)
	{
		str2[i] = '\0';
		i++;
	}
	return (str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len2;

	i = 0;
	len2 = ft_strlen(s);
	if (!s)
		return (0);
	if (start > len2)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > len2)
		str = (char*)malloc(sizeof(char) * (len2 - start) + 2);
	else
		str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
