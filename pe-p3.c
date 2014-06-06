/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project Euler
 * Problem 3
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143? 
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        return -1;
    }

    int prime_num = atoi(argv[1]);
    int prime_array[prime_num/2];

    for (int i = 1; i < prime_num; i++)
    {
    	if (prime_num % i == 0)
    	{
            for (int j = 0; j < prime_num/2; j++)
            {
                prime_array[j] = i;
            }
        }
    }

    for ()
}

