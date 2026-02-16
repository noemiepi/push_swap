/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npillet <npillet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:10:36 by npillet           #+#    #+#             */
/*   Updated: 2026/02/05 11:18:46 by npillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	j;

	if (lst == NULL)
		return (NULL);
	i = ft_lstsize(lst);
	j = 0;
	while (++j < i)
		lst = lst->next;
	return (lst);
}
