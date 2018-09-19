#include <iostream>
using namespace std;
int main()
{
  cout<<"write your number"<<endl;
  int number,div;
  int factor=0;
  cin>>number;
  for(div=1;div<=number;div++)
  {
  if(number%div==0)

        factor++;
  }
if (factor==2)
{
    cout<<"it is a prime number"<<endl;
}
    else
{
       cout<<"it is not a prime number"<<endl;
}
return 0;
}
