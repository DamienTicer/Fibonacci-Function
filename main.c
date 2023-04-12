#include <stdio.h>

// Recursive function to compute the n-th Fibonacci number
int fib(int n) {
  if (n <= 1) { // base case: n = 0 or 1
    return n;
  }
  // recursive case: n > 1
  return fib(n - 1) + fib(n - 2); // Fibonacci formula
}

int main(int argc, char *argv[]) {
  int n;
  float golden_ratio;

  // Loop through the range of n values from 3 to 15
  for (n = 3; n <= 15; n++) {
    // Compute the golden ratio for the current value of n
    golden_ratio = (float)fib(n) / fib(n - 1);
    // Output the values for the current value of n
    printf("n = %d\tfib(n) = %d\tfib(n)/fib(n-1) = %.4f\n", n, fib(n),
           golden_ratio);
  }

  return 0;
}
