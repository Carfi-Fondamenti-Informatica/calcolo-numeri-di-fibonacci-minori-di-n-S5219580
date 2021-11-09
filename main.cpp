#include <iostream>
using namespace std;

int main() {    
   int n=0, primo=1, secondo=0, terzo=1;
    cin >> n;
    if (n>=1){
        while (true){
            if(terzo<=n){
            cout<<terzo <<endl;
            terzo=primo+secondo;
            secondo= primo;
            primo=terzo;}
            else
                break;
        }
    }
   return 0;
}
