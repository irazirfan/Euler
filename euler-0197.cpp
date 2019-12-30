/*
    # Solved By Iraz Irfan
*/

#include <iostream>
#include <iomanip>
#include <cmath>

// compute next step
double f(double x, double b)
{
  return floor(pow(2.0, b - x*x)) * pow(10, -9);
}

int main()
{
  // initial value
  double u;
  double b;
  
  std::cin >> u;
  std::cin >> b;

  // compute next steps
  double next = f(u,b);
  for (unsigned int i = 1; i < 550; i++)
  {
    u = next;
    next = f(u,b);
  }

  // sum of two neighbors
  double result = u + next;

  std::cout << std::fixed << std::setprecision(9) << result << std::endl;
  return 0;
}
