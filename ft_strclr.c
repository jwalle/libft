/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalle <jwalle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 14:18:46 by jwalle            #+#    #+#             */
/*   Updated: 2014/11/13 20:07:44 by jwalle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;

	if (s)
	{
		i = ft_strlen(s);
		while (i--)
			s[i] = '\0';
	}
}
