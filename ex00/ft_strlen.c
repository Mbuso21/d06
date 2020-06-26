/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:33:57 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/26 15:45:01 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int count;
	count = 0;
	while(str[count])
	{
		count++;
	}
	
	return count;
}

