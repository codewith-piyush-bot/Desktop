#include <iostream>
#include <math.h>
using namespace std;

void update(int a)
{
  a = a / 2;
}

int main()
{
  int a = 10;
  update(a);
  cout << a << endl;
}