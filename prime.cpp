#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n){
    if(n<=1){
        cout<<"enter a correct number"<<endl;
        return false;
    }
    else{
        for(int numCount=2;numCount<sqrt(n);numCount++){
            if(n%numCount==0){
                return false;
            }    
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<" is non-prime"<<endl;
    }
}