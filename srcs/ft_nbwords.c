/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguy-caz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 18:37:59 by dguy-caz          #+#    #+#             */
/*   Updated: 2017/05/04 18:52:47 by dguy-caz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbwords(char const *s, char c)
{
	size_t	nb;

	nb = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		while (*s != c && *s)
			s++;
		nb++;
	}
	return (nb);
}