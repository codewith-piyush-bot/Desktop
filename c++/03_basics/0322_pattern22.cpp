#include <iostream>
using namespace std;
int main()
{
  int n;

  cin >> n;

  int i = 1;

  while (i <= n)
  {

    int spaces = i - 1;

    while (spaces)
    {
      cout << " ";
      spaces--;
    }

    int j = 1;
    int stars = n - i + 1;
    while (stars)
    {
      cout << "*";
      stars--;
    }
    cout << endl;
    i++;
  }
}