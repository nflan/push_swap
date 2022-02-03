/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:21:44 by nflan             #+#    #+#             */
/*   Updated: 2022/01/25 12:04:54 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pileclear(t_pile **pile)
{
	t_pile	*tmp;

	if (*pile)
	{
		while (*pile)
		{
			*pile = NULL;
			tmp = *pile;
			*pile = tmp->next;
			free(tmp);
		}
	}
	*pile = NULL;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		(*del)((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
	*lst = NULL;
}
