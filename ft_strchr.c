/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbouras <abbouras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:48:22 by abbouras          #+#    #+#             */
/*   Updated: 2024/10/25 21:48:22 by abbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	char *result_ft = ft_strchr(av[1], av[2][0]);
	char *result_real = strchr(av[1], av[2][0]);
	printf("Résultat de ft_strchr: %s\n", result_ft);
	printf("Résultat de strchr: %s\n", result_real);
}
*/