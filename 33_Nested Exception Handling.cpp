#include<iostream>
using namespace std;

int main(){
  int age;
  cout<<"Enter your age: \n";
  cin>>age;
  
  try{
    try{
      if(age<0){
        throw"Age cannot be negative! \n";
        
      }
      cout<<"Your age is: "<<age<<endl;
    }
    catch(const char*e){
      cout<<"Caught in inner block: \n"<<e<<endl;
      throw;
    }
    
  }
  catch(const char*e){
    cout<<"Caught in outer block: \n"<<e<<endl;
  }
  
  return 0;
}