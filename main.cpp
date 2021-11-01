#include <iostream>

#include "headers/style.h"

using namespace std;

int main()
{
    cout << "Bienvenido al sistema" << endl;
    Style s_1("Index",15);
    cout << "Hola Git" << endl;
    int arr[5] = {1,2,3,4,5};
    for (int i: arr)
    	cout << i << " ";
    cout << endl;
    return 0;
}


