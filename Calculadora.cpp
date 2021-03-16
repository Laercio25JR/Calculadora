#include <iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main () {
    cout <<"Calculadora :)"<< endl;
    cout << endl;

    bool loop = true;
    int R = 1;
    double n1, n2;
    char sinal;
    bool input1Fail;
    bool input2Fail;
    while (loop = true) {
        //cout << "Passo 1" << endl;
        do {
            cin >> n1;
            if(cin.fail()) {
                input1Fail = true;
                cin.clear();
                cout << "Insira um numero" << endl;
                break;
            } else {
                input1Fail = false;
                break;
            }
        } while (input1Fail = true);
        //cout << "Passo 2" << endl;
        cin >> sinal;
        //cout << "Passo 3" << endl;
        do {
            cin >> n2;
            if(cin.fail()) {
                input2Fail = true;
                cin.clear();
                cout << "Insira um numero" << endl;
            } else {
                input2Fail = false;
                break;
            }
        } while (input2Fail = true);

        switch (sinal){
            case '+':
                cout << "__" <<endl;
                cout << n1+n2 <<endl;
                cout <<endl;
                break;
            case '-':
                cout << "__" <<endl;
                cout << n1-n2 <<endl;
                cout <<endl;
                break;
            case '*':
                cout << "__" <<endl;
                cout << n1*n2 <<endl;
                cout <<endl;
                break;
            case '/':
                cout << "__" <<endl;
                cout << n1/n2 <<endl;
                cout <<endl;
                break;
            case '%':
                cout << "__" <<endl;
                cout << (n1/100)*n2 <<endl;
                cout <<endl;
                break;
            case '^':
                for (int X = 0; X < n2; X++) {
                    R = R*n1;
                }
                cout << "__" <<endl;
                cout <<R<< endl;
                cout <<endl;
                break;
            default:
                cout <<"Erro X_x"<<endl;
                cout <<endl;
                break;
            return 0;
            }
        }
return 0;
}