/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warharra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 09:41:02 by warharra          #+#    #+#             */
/*   Updated: 2019/04/20 16:54:08 by warharra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			str[i] = b;
		}
		i++;
	}
}
