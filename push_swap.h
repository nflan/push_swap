/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:14:10 by nflan             #+#    #+#             */
/*   Updated: 2022/01/21 12:08:09 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_pile
{
	int				num;
	struct s_pile	*next;
}	t_pile;

typedef struct s_chunk
{
	int				min;
	int				max;
	int				index;
	struct s_chunk	*next;
}	t_chunk;

typedef struct s_begin
{
	t_pile	*pile_a;
	t_pile	*pile_b;
}	t_begin;

# include "libft/libft.h"

// MAIN

// CHECK
int		ft_check_double(char **tab, int check);
int		ft_check_tab(char **tab);
t_chunk	*ft_chunknew(int min, int max, int index);
t_pile	*ft_pilenew(int n);
int		ft_count_line(char **tab);

// FILL
t_pile	*ft_fill_pile(char **tab);
void	ft_fill_pile_b(t_begin *begin);
char	ft_next_to_move(t_pile **pile, int med);
void	ft_print_pile(t_pile *pile);
char	**ft_fill_argv(char **tab, int ac, char **av);

// OP
int		ft_swap(t_pile **pile, int p);
int		ft_push(t_pile **pstart, t_pile **pend, int p);
int		ft_reverse_rotate(t_pile **pstart, int p);
int		ft_rotate(t_pile **pstart, int p);

// DOUBLE / TRIPLE
void	ft_double(t_begin *begin, int pile);
void	ft_triple(t_begin *begin, int pile);
void	ft_do_triple(t_pile **pile, int p);

// FIVE
int		ft_pile_min(t_begin *begin, int pile);
int		ft_pile_max(t_begin *begin, int pile);
void	ft_back_to_a(t_begin *begin);
void	ft_five(t_begin *begin);

// UTILS
int		ft_is_sort(t_begin *begin);
void	ft_push_all_to_a(t_begin *begin);
int		ft_nb_rr(t_pile *pile, t_chunk *chunk, int ind);
int		ft_nb_r(t_pile *pile, t_chunk *chunk, int ind);

#endif
