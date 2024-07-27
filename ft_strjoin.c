/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelharbi <oelharbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 07:45:28 by oelharbi          #+#    #+#             */
/*   Updated: 2023/11/30 13:16:56 by oelharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1)); 
	i = ft_strlen(s1);
	j = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = malloc(j);
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, s1, i + 1);
	ft_strlcat(string, s2, j);
	return (string);
}
