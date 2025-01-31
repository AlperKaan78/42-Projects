/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguler <alguler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:17:09 by alguler           #+#    #+#             */
/*   Updated: 2024/10/18 15:45:27 by alguler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(char a)
{
	if(ft_isalpha(a) || ft_isdigit(a))
    {
        return (1);
    }
    return (0);
}
