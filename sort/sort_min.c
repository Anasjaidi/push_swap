/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:05:04 by ajaidi            #+#    #+#             */
/*   Updated: 2022/02/19 23:47:51 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort2(t_list **a)
{
	t_list	*tmp;

	if (lst_size(*a) != 2)
		return ;
	tmp = *a;
	if (tmp->data > tmp->next->data)
	{
		swap_stack(*a);
		printf("sa\n");
	}
}

void	sort3(t_list **a)
{
	t_list	*tmp;

	if (lst_size(*a) != 3)
		return ;
	tmp = *a;
	if (tmp->data > tmp->next->data)
	{
		if (tmp->data > tmp->next->next->data && tmp->next->data \
		< tmp->next->next->data)
		{
			reverse_rotate_stack(a);
			printf("rra\n");
		}
		else
		{
			swap_stack(*a);
			printf("sa\n");
		}
	}
	if (tmp->data > tmp->next->next->data)
	{
		reverse_rotate_stack(a);
		printf("rra\n");
	}
	if (tmp->data < tmp->next->next->data \
	&& tmp->next->data > tmp->next->next->data)
	{
		swap_stack(*a);
		printf("sa\n");
		rotate_stack(a);
		printf("ra\n");
	}
}