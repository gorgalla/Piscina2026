/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 08:46:16 by gorkgall          #+#    #+#             */
/*   Updated: 2026/03/14 09:52:58 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
char	*ft_strrev(char *str)
{
	int	i;
	int	k;
	char	temp_i;
	char	temp_k;

	i = 0;
	k = ft_strlen(str) - 1;
	while (i < k)
	{
		temp_i = str[i];
		temp_k = str[k];
		str[i] = temp_k;
		str[k] = temp_i;
		k--;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "0123456789";
	printf("%s", ft_strrev(str));
	return (0);
}
