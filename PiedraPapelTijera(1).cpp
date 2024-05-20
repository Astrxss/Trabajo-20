#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{

    int opcion, salir, derrota = 0, victoria = 0, empate = 0, computadora, t;

    while (salir != 0)
    {
        cout << "bienvenido a Piedra,Papel y Tijera,Ingrese el numero para hacer una eleccion\n";
        cout << "1) Piedra\n";
        cout << "2) Papel\n";
        cout << "3) Tijera\n";
        cout << "0) Salir\n";
        cin >> opcion;

        t = time(NULL);
        srand(t);
        computadora = rand() % 3 + 1;

        if (opcion == computadora)
        {
            empate = empate + 1;
            cout << "Empate\n";
        }
        else
        {
            switch (opcion)
            {

            case 0:
                salir = 0;
                break;

            case 1:
                if (computadora == 2)
                {
                    derrota = derrota + 1;
                    cout << "Derrota\n";
                }
                else if
                    (computadora == 3)
                    {
                        victoria = victoria + 1;
                        cout << "Victoria\n";
                    }
                break;

            case 2:
                if (computadora == 1)
                {
                    victoria = victoria + 1;
                    cout << "Victoria\n";
                }
                else if
                    (computadora == 3)
                    {
                        derrota = derrota + 1;
                        cout << "Derrota\n";
                    }
                break;

            case 3:
                if (computadora == 1) {
                    derrota = derrota + 1;
                    cout << "Derrota\n";
                } 
                else if(computadora == 2) {
                    victoria = victoria + 1;
                    cout << "Victoria\n";
                } break;

                default:
                cout << "La opcion no esta presente, se a equivocado\n";
                break;
            }
        }
    }
    cout << "Usted obtuvo la siguientes estadisticas \n";
    cout << "Victorias:" << victoria << "\n";
    cout << "Derrotas:" << derrota << "\n";
    cout << "Empates:" << empate << "\n";

    return 0;
}