# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfgarci <alfgarci@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 20:41:00 by alfgarci          #+#    #+#              #
#    Updated: 2022/09/22 13:27:24 by alfgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	src/get_next_line.c \
		src/get_next_line_utils.c

SRCSB = src/get_next_line_bonus.c \
		src/get_next_line_utils_bonus.c

OBJS 	=	${SRCS:.c=.o}

OBJSB	=	${SRCSB:.c=.o}

INC 	=	includes/

CC	=	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42

NAME 	=	get_next_line.a

.c.o:
	${CC} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
		rm -f ${OBJS} ${OBJSB}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

bonus:		${OBJS} ${OBJSB}
		ar rcs ${NAME} ${OBJS} ${OBJSB}

.PHONY:	all clean fclean re bonus
