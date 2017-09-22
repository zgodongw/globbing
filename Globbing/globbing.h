/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globbing.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:55:45 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/22 12:02:39 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBBING_H
# define GLOBBING_H

int		ft_strncmp(const char*, const char*, size_t);
int		ft_strlen(const char*);
char	*ft_strstr(const char*, const char*);
int		isglob(const char*);
int		starglob(const char*, char*);
int		quesglob(const char*, char*);
int		bracglob(const char*, char*);
int		globfunction(const char*, char*);
int		brackets(const char*, char);

# endif
