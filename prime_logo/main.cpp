/*Algorithm to determine if a number is prime*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
cout<<"Algorithm to determine if a number is prime(efficient)"<<endl;
cout<<"******************************************************"<<endl;
cout<<endl;
bool prime = true;
int n;
do{
cout<<"Enter the value of a positive integer : ";
cin>>n;}
while(n<=0);
for(int i=2;i<=sqrt(n);i++){
if(n % i == 0 || n<=1){
prime = false;
break; }}

if(prime){
cout<<n<<" is a prime number."<<endl;
}else{cout<<n<<" is not a prime number."<<endl;}
return 0;}
