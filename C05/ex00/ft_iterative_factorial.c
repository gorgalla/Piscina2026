/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:45:00 by gorkgall          #+#    #+#             */
/*   Updated: 2026/03/25 15:22:10 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;
	int	i;

	facto = 1;
	i = 0;
	while (facto <= nb)
	{
		facto *= i;
		facto++;
	}
	return(nb);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_iterative_factorial(33));
	return (0);
}
