#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int a;
    cin>>a;
    if(funzione(a)==true)
        cout<<"numero primo";
    else
        cout<<"numero non primo";
    return 0;
}

