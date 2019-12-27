/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 15:37:46 by cyuriko           #+#    #+#             */
/*   Updated: 2019/12/27 19:46:31 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FILLER_H
# define FILLER_H

# include "../libft/includes/libft.h"
# include <stdbool.h>
# define UNIQ_BPP 4
# define MAP_H 1000
# define MAP_W 1000

# define PLAYER_1		"$$$ exec p1 : [./cyuriko.filler]"
# define PLAYER_2		"$$$ exec p2 : [./cyuriko.filler]"
# define PLAYER_1_SYMB	'X'
# define PLAYER_2_SYMB	'0'

typedef struct 		s_piece
{
	int 			x;////actually its height
	int 			y;////actually its width oh god why
	char			**piece;////the piece itself
	int 			**piece_map;/////piece_map_for_heat_map
	int 			x_pos;/////position
	int 			y_pos;/////position
}					t_piece;

typedef struct 		s_map
{
	int 			x;////actually its height
	int 			y;////actually its width oh god why
	char			**map;////the map itself
	int 			**heatmap;////transformed heatmap
}					t_map;

typedef struct 		s_env
{
	int 			p_num;
	char 			player_symbol;
	char 			opponent_symbol;
	t_map			*map;
	t_piece			*piece;
}					t_env;

/*
**	init.c
*/
t_env			*init_env(void);

/*
**	main.c
*/
int 	main();

/*
**	parse_player.c
*/
bool			parse_player(t_env *env);

#endif