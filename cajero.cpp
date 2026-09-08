#include <iostream>
using namespace std;

bool salir=0;

double consultarSaldo (double saldo){
                cout << "Su saldo disponible es de: " << "$" << saldo << endl;
                return saldo;

                };

int main (){
    int operando;
    int opcion;
    int saldo;
    while(salir==0){
        cout<<"Elija una opcion a realizar:\n";
        cout<<"1. Consultar \n"<<
              "2. Depositar \n"<<
              "3. Retirar \n"<<
              "4. Salir \n\n";
        cin>>opcion;
        switch(opcion){
            case 1:
                consultarSaldo (saldo);
            break;

            case 2:

            break;

            case 3:

            break;

            case 4:
            salir=1;
            cout<<"Gracias por usar nuestro sistema\n";
            break;

            default:
            cout<<"Error de opcion\n";
            return 1;
            break;
        }
    }

    return 0;
}