#include "libft.h"

int	main()
{
	ft_putstr_fd("HELLO\n", 1);
	return (0);
}
➜  testLib gcc -L../LibFt  -lft -I../libft/include ./test.c
