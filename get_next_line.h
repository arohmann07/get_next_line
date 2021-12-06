/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohmann <arohmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:49:47 by arohmann          #+#    #+#             */
/*   Updated: 2021/08/05 09:23:26 by arohmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*gnl_strjoin(char *s1, char *s2);
int		gnl_strchr(const char *str, int c);
void	*ft_calloc(size_t num, size_t size);

char	*get_next_line(int fd);

#endif