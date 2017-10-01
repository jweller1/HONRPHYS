#include <iostream>

using namespace std;
int main(){
  int a=1; //establishes the first integer
  int factorial; //creates a variable for the factorial value
  while(a<11){ //loop go's through first 10 integers
    factorial=a; //begins by setting factorial equal to the integer
    for(int b =a-1; b>0;b--){
      factorial=factorial*b; //loop then multiplies by every number less than 
      // the integer and greater than zero
    }
    cout<<factorial<<endl; //displays factorial value
    a++; //increases integer value for next loop
  }
  return 0;
}
