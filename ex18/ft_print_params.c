/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:17:13 by mahola            #+#    #+#             */
/*   Updated: 2019/10/14 13:20:26 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				ft_putchar(argv[i][j]);
			ft_putchar('\n');
		}
	}
	return (0);
}
