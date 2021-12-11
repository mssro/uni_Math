// combinatorics.h 

// This header file includes methods written in C to realize combinatorial problems. 


// Computes the factorial of n. 
// n!.
unsigned long factorial(unsigned long n)
{
  if (n == 0 || n == 1)
    return 1; 
  else 
    return n * factorial(n-1);
}

// Calculates the amount of possible ways to pick k elements out of n elements
// where their order does matter (without repetition).
// k <= n.
unsigned long variation(unsigned long n, unsigned long k) 
{
  unsigned long solution = 1; 
  for (unsigned long ctr = n; ctr >= (n-k+1); ctr--)
    solution *= ctr;
  return solution; 
}
