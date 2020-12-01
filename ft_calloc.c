/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphoebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:06:56 by rphoebe           #+#    #+#             */
/*   Updated: 2020/11/14 15:28:56 by rphoebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s1;

	if (!(s1 = (char *)malloc(size * count)))
		return (NULL);
	ft_bzero(s1, count * size);
	return (s1);
}
