#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int reverseArray[4] = { 1, 2, 3, 4 };
 cout << "\n" << endl;
 for (auto Arr : reverseArray)
 {
  cout << " " << Arr;
 }
 reverse(reverseArray, reverseArray + 4);
 cout << endl << "Reverse is:";
 for (auto &Arr : reverseArray)
 {
  cout << " " << Arr;
 }

 
 return(0);

}
