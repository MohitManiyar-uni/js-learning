#include <iostream>
using namespace std;
template <class T> //syntax for function template
T sum(T a,T b){
    cout<<"Total is: "<<a+b;
}
int main(){
    sum(2.3,3.5);
}