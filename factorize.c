#include "factor.h"

/**
 * factorize - Factorizes a number and prints its prime factorization
 * @buffer: Input buffer containing the number to factorize as a string
 *
 * Return: Always returns 0
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t i;

	/* Convert the input buffer (string) to an integer */
	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}
