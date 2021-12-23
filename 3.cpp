#include<iostream>

using namespace std;

int main(){
    int i,j,k;

   cin>>i>>j>>k;

   if((i>=j) && (i>=k)){
       cout<<"The i is greatest among all three: "<<i;
   }
  
   else if((j>=k) && (j>=i)){
       cout<<"The largest number is: "<<j;
   }

   else{
       cout<<"The largest number is: "<<k;
   }







  return 0;
}














