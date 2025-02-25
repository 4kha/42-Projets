/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:12:32 by khtran            #+#    #+#             */
/*   Updated: 2018/01/02 13:42:40 by khtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	*sdup;

	sdup = (char*)s;
	while (*sdup)
	{
		if (*sdup == (char)c)
			return (sdup);
		sdup++;
	}
	if (*sdup == (char)c)
		return (sdup);
	return (NULL);
}
