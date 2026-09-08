#include <iostream>
using namespace std;

bool salir=0;
double saldo=0.00;
void consultarSaldo (double saldo){
    cout << "Su saldo disponible es de: $" << saldo << endl;
}

void depositarSaldo(double &saldo)
{
    double deposito;
    cout << "¿Cuanto desea depositar?" << endl;
    cin >> deposito;
    saldo += deposito;
    cout << "Deposito realizado" << endl
         << "Su saldo actual es de :" << saldo << endl;
}

void retirar(double *saldo){
    int retirando;
    cout << "¿Cuanto desea retirar?" << endl;
    cin >> retirando;

    if(*saldo<retirando){
        cout<<"Fondos insuficientes para retirar\n";
    }
    else if(retirando%5==0){
        cout<<"Retirando: $"<< retirando<<endl;
        *saldo -= retirando;
        cout <<"Saldo restante: $"<< *saldo<<endl;
    }
    else{cout<<"No es multiplo de 5 lo retirado\n";}
}

int main (){
    int opcion;
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
                depositarSaldo(saldo);
            break;

            case 3:
                retirar(&saldo);
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