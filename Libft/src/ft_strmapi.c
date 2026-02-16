/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npillet <npillet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:13:22 by npillet           #+#    #+#             */
/*   Updated: 2026/02/05 11:20:04 by npillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sub;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i] != '\0')
	{
		sub[i] = (*f)(i, s[i]);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
