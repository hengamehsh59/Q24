#include<iostream>
using namespace std;
int main()
{
    int number;
   cout<<"Enter number:";
   cin>>number;
   if(number>=0&&number<=10){
       if(number%2==0){
           cout<<"Even"<<endl;
           if(number<5){
               cout<<"smaller than 5";
           }
           else{
               cout<<"Bigger than 5";
           }
        return 0;
    }
   }
}
     