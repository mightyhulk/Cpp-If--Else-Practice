#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float a,b,c, d,i, j;

    cin>>a>>b>>c;
    d= b*b - 4*a*c;
    i= (-b+ sqrt(d))/(2*a);
    j = (-b- sqrt(d))/(2*a);

    if(d>0){
        cout<<"The first root is : "<<i<<"\n";
        cout<<"The second root is : "<<j;

    }
    
    else if(d == 0){
        cout<<"Both the roots are equal : "<<i;
    }

    else {
        cout<<"This equation has imaginary roots";
    }
    
   return 0;



}






















