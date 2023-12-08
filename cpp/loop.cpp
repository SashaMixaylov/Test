#include <iostream>
#include <ctime>
#include <vector>
#include <array>
using namespace std;

int main()
{
   srand(time(0));
   setlocale(LC_ALL," ");
   
   int size= 10; // Set the size to a positive integer
   int sum0=0;
   
   vector<int> array; // Declare the array
   
   for(size_t i=0; i<size; i++){
       int element =rand()%100;
       array.push_back(element);
       cout<<element;
       if(i<size-1){
         cout<<", ";
       }
       if(element % 2 == 0){
           sum0++;
       }
   } 
   
     
   cout<<"количество четных чисел в массиве: "<< sum0;
  
   return 0;
}
