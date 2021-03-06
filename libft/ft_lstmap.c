/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprysiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:49:49 by tprysiaz          #+#    #+#             */
/*   Updated: 2016/12/05 16:50:09 by tprysiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *rez;

	if (lst && f)
	{
		new = f(lst);
		rez = new;
		while (lst->next)
		{
			lst = lst->next;
			new->next = f(lst);
			new = new->next;
		}
		return (rez);
	}
	return (NULL);
}
