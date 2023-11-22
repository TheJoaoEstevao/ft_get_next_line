

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

size_t	ft_strlen(char *s);
void	ft_bzero(void *s, size_t n);
char	*get_next_line(int fd);

#endif
