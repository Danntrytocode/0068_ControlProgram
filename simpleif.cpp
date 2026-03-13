#include <iostream>
using namespace std;

int main(){
    int x;

    srand(time(0));
    x = srand() %10;

    if (x==5){
        x = x+1;
        cout <<"Nilai x Sudah Dikoreksi Menjadi : "<<x<<endl;
    }

    cout << "Bilangan yang di Berikan = "<<x;
}