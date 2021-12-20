#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get ";
    srand(time(0));
    int x = rand() % 9;
    if(x == 0){
        cout << "A";
    }else if(x == 1){
        cout << "B+";
    }else if(x == 2){
        cout << "B";
    }else if(x == 3){
        cout << "C+";
    }else if(x == 4){
        cout << "C";
    }else if(x == 5){
        cout << "D+";
    }else if(x == 6){
        cout << "D";
    }else if(x == 7){
        cout << "F";
    }else if(x == 8){
        cout << "W";
    }
    cout << " in this 261102.";

    return 0;
}
