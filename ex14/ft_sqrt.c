/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:02:45 by mahola            #+#    #+#             */
/*   Updated: 2019/08/17 15:42:47 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
