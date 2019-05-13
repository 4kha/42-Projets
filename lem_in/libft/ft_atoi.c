/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:30:26 by khtran            #+#    #+#             */
/*   Updated: 2018/06/22 01:57:41 by khtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(const char *str)
{
	long int	result;
	int			index;
	int			is_neg;

	index = 0;
	result = 0;
	is_neg = 1;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			is_neg = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index++] - '0');
		if ((result > 2147483647 && is_neg == 1)
				|| (result > 2147483648 && is_neg == -1))
			return (123456789123);
	}
	return (is_neg * result);
}
