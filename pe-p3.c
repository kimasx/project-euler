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

int findPrimes(long long num);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
      return -1;
    }

    int num = atoi(argv[1]);
    findPrimes(num);
    return 0;
}

int findPrimes(long long num)
{
  int divisor = 2;
  long long largFact;

  while(num != 0)
  {

    /* we know that num % divisor must be zero,
      if divisor is, in fact, a factor
      increment divisor if not a factor */
    if (num % divisor != 0)
    {
      divisor += 1;
    }
    else
    {
      largFact = num;
      num = num / divisor;
      printf("%d \n", divisor);

      // end while loop if number is 1
      if (num == 1)
      {
        printf("Largest prime factor: %lld \n", largFact);
        break;
      }
    }
  }
  return 0;
}