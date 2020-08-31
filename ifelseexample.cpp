#include<iostream>
using namespace std;

int main(){
    float a, b, ans = 0;
    char op;
    cout<<"Enter the Number a: ";
    cin>>a;
    cout<<"Enter the Number b: ";
    cin>>b;
    cout<<"Enter the operator : ";
    cin>>op;
    if(op == '+'){
        ans = a+b;
    }else if(op == '-'){
        ans = a-b;
    }else if(op == '*'){
        ans = a*b;
    }else if(op == '/'){
        ans = a/b;
    }else{
        cout<<"Invalid Operator.\n";
    }

    cout<<"Answer: "<<ans;
}