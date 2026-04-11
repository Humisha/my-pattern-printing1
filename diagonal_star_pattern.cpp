#include <iostream>
using namespace std;

int main() {
    int n = 7;
    for(int i = 1 ; i <= 7 ; i++){
        for(int j = 1 ; j <= 7 ; j++){
            if(i == j || i == 1 || i == n || j == 1 || j == n || i+j == n+1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}