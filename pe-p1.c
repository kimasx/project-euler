/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project Euler
 * Problem 1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>		// printf
#include <stdlib.h>		// atoi

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
    	int a = atoi(argv[1]);
    	int sum = 0;
    	for (int i = 0; i < a; i++)
    	{
    		if (i % 3 == 0 || i % 5 == 0)
    		{
    			sum += i;
    		}
    	}
    	printf("%d\n", sum);
	}
	else
		return -1;
}

