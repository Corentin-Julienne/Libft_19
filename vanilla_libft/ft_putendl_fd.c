/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:00:07 by cjulienn          #+#    #+#             */
/*   Updated: 2021/08/09 18:35:44 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vanilla.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	line_return;

	i = 0;
	line_return = '\n';
	if (s != NULL)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
		ft_putchar_fd(line_return, fd);
	}
}
