#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - print the number postive or negative or zero
 *
 * Return: always 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is postive %d\n", n);
	}
	else if (n == 0)
	{
		printf("n is zero %d\n", n);
	}
	else (n < 0)
		printf("n is negative %d\n", n);
	return (0);
}
