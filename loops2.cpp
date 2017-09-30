#include <iostream>

using namespace std;

int main(){
  //when we declare a for loop, we also initialize the loop variable,
  //specify the exit condition, and tell the program how to modify the
  //loop variable at the end of each loop
  for(int n=10;n>0;n--){
    cout<<"n is "<<n<<endl;
  }
  //in a for loop, the loop variable only exists in the loop. we are not able
  //to call n from out here
  return 0;
}
