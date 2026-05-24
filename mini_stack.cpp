#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int tp;

    int *st;

    public:
    Stack(int n=10){
        tp=0;
        size=n;
        st=new int[size];
        fill(st, st + size, -1);
    }
    ~Stack(){
        delete[] st;
    }
    void push(int x);
    void pop();
    int top();
};
void Stack::push(int x){
    if(tp==size){
        cout<<"Stack is full! Try popping some elements first and come again..."<<endl;
    } else {
        st[tp]=x;
        tp++;
    }
}
void Stack::pop(){
    if(tp==0){
        cout<<"Stack is empty!! Fill it and try again..."<<endl;
    } else {
        tp--;
        st[tp]=-1;
    }
}
int Stack::top(){
    int retval;
    if(tp==0){
        return -1;
    } else {
        tp--;
        retval = st[tp];
        tp++;
        return retval;
    }
}




//macros:

#define endl "\n"




//classes:






//standalone functions:






//main

int main(){
    Stack s1(2);
    cout<<s1.top()<<endl;
    s1.push(5);
    s1.push(14);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.top();
    return 0;
}





/*
output:
-1
14
5
Stack is empty!! Fill it and try again...
-1
*/
