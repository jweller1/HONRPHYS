#include <iostream>

using namespace std;
int main(){
  int a=1; //establishes first integer
  int test; //creates an integer for testing if a factor
  while(a<101){ //runs through integers 1-100
    cout<<"Factors of "<<a<<":"; 
    for(int b=1;b<a+1;b++){//runs through all the numbers 1 through the integer
      test=a%b; //finds remainder of division
      if(test==0){ //if remainder is zero prints it out as a factor
	cout<<b<<", ";
      }
    }
    cout<<endl; //new line
    a++; //increase integer value
  }
  return 0;
}
