/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconte <aleconte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:48:21 by aleconte          #+#    #+#             */
/*   Updated: 2020/11/22 15:55:02 by aleconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

int		ft_check_buffer_nl(char *buffer);
char	*ft_strjoin(char *s1, char const *s2);
char	*prep_line(char *buff, char *line_result, int len);
int		ft_read_line(int fd, char **line, char *buff, char *line_result);
int		get_next_line(int fd, char **line);

#endif
