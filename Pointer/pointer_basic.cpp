#include <iostream>
using namespace std;

int callByValue(int num)
{
  int a = num + 5;
  return a;
}
int *callByReference(int *ptr)
{
  *ptr = *ptr + 5;
  return ptr;
}
int main()
{
  int num = 5;
  int *ptr = &num;
  cout << &num << endl;
  cout << *ptr << endl;
  int a = callByValue(num);
  cout << num << ":" << a << endl;
  int *b = callByReference(&num);
  cout << *ptr << ":" << *b << endl;
}