/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguler <alperkg1919@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:11:36 by alguler           #+#    #+#             */
/*   Updated: 2024/10/28 20:11:36 by alguler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i] != "\0")
        i++;
    return i;
}