#include "MemoryCell.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  MemoryCell<int> m1;
  MemoryCell<double> m2{ 3.14 };

  m1.write(37);
  m2.write(m2.read() * 2);

  cout << m1.read() << endl;
  cout << m2.read() << endl;
  system("pause");
  return 0;
}