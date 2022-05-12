#include <iostream>

using namespace std;

int main()
{

    // bubble sort by input

 int num[5];   // how many numbers
 int i, j;

 for(i=0;i<=4;i++)
 {
  cout << "Please enter number: ";
  cin >> num[i];
 }

 for(i=0;i<=3;i++)
 {
  for(j=i+1;j<=4;j++)
  {
   int temp; // its gonna hold the value of i for temporary

   if(num[i] > num[j])
   {
    temp = num[i];
    num[i] = num[j];
    num[j] = temp;
   }
  }
 }

 for(i=0;i<=4;i++)
 {
  cout << endl <<  num[i] << endl;
 }

 cin.ignore();
 cin.get();

}
