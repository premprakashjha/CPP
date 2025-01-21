#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    do{
        cout<<  n << "*" << i << "=" << i*n <<endl;
        i++;
    }
    while(i<=10);
}