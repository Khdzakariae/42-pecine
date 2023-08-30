/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:04:10 by zel-khad          #+#    #+#             */
/*   Updated: 2023/07/19 18:01:46 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (33 <= str[i] && str[i] <= 126)
			i++;
		else if (str[i] == ' ')
			return (1);
		else
			return (0);
	i++;
	}
	return (1);
}
