/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rgb_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:11:27 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/06/30 20:05:32 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgblib.h"

int	is_rgb_str(char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	if (len <= 2 + 2 || len > 8 + 2 || len % 2 != 0)
		return (0);
	if (str[0] != '0' || str[1] != 'x')
		return (0);
	str += 2;
	while (*str)
	{
		if (ft_hextoc(*str) == INVALID)
			return (0);
		str++;
	}
	return (1);
}