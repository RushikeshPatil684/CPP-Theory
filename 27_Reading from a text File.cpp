#include <fstream>
#include <iostream>

using namespace std;

 int main() {
   
  ifstream inFile("example.txt");// Open a filefor reading
  string line;
  
  if(inFile.is_open()) {
  while(getline(inFile, line)) {// Read lineby line
  cout<< line <<endl;// Printeach line
  
 }
  inFile.close();// Close the file
  
 }else{
   
  cout<<"Error: Could not open the file."<<endl;
 }
 
 return 0;
 }