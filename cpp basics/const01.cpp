#include <iostream>
using namespace std;
class Demo{
    int a;

    public: Demo(){ //default constructor
        a=2;
        cout<<a<<endl;
    }

    Demo(int x){ //parameterized constructor
        a=x;
        cout<<a;
    }
};
int main(){
    Demo obj1;
    Demo obj2(123);
}