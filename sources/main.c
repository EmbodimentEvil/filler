/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 17:34:49 by cyuriko           #+#    #+#             */
/*   Updated: 2019/12/27 19:19:32 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int 	main()
{
	t_env	*env;

	if (!(env = init_env()))
		return (int_error(ERROR_MALLOC));
	find_player(env);
	return (0);
}