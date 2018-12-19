/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdikilu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 21:55:00 by fdikilu           #+#    #+#             */
/*   Updated: 2018/12/18 21:27:49 by fdikilu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_echo(char **env, char **argv)
{
	int		i;

	(void)env;
	i = 1;
	while (argv[i])
	{
		if (i != 1)
			ft_putchar(' ');
		ft_putstr(argv[i]);
		i++;
	}
	ft_putchar('\n');
}
