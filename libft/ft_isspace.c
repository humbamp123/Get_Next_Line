/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 13:00:21 by apineda           #+#    #+#             */
/*   Updated: 2016/10/17 14:24:40 by apineda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char const *str)
{
	if (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' ||
				*str == '\f' || *str == '\r')
		return (1);
	else
		return (0);
}