#include <iostream>

using namespace std;
int main( void )
{
    int numero;
    system("cls");
    cout << "Introduce Cualquier Numero :):  ";
    cin >> numero;
    if(numero % 2 == 0)
        cout << endl << numero <<" es par\n";
    else
        cout << endl << numero <<" es impar\n";
    system("pause");
}
