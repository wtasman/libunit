#include "libft/libft.h"

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

typedef struct		s_test
{
	void			*basic_test;
	void			*null_test;
	void			*2small_test;
	void			*neg_test;
	void			*pos_test;
	void			*2large_test;
	struct s_test	*next;
}					t_test;

#endif