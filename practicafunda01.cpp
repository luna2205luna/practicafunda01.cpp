#include <iostream>
using namespace std;
int main()
{
    //declaramos variables

    string nombre;
    float horas = 0; float horas_b, horas_e,salario_neto,impuesto,salario_liquido;

    //Datos de entrada
    cout<<"Ingrese nombre:"; cin >> nombre;
    cout<< "Ingrese horas trabajadas en el mes:"; cin >> horas;

    //Calculo de salario neto sin impuesto.
    if (horas <= 0 && horas >0)
    {
        horas_b = horas;
        horas_e= 0;

    }
    else{
        horas_b = 160;
        horas_e = horas - 160;
    }
    salario_neto = horas_b * 10 + horas_e +10 * 1.5;

    if( salario_neto <=2000){

        impuesto = salario_neto * 0;
    }
    else if (salario_neto>2000 && salario_neto<2200){

        "impuesto = salario_neto * 0.2";
    }
    else {
        impuesto = salario_neto * 0.3;
    }

    //salidas
    cout <<"Hola, "<< nombre << "sus datos de salario son: \n";
    cout << "tsalario neto:\t" << salario_neto;
    cout << "\n\tImpuestos:\t" <<impuesto;
    cout << "´n\tsalario liquido:\t"<<salario_neto - impuesto << "\n";

    //cout << salario_neto << "\n";

return 0;
}


















return 0;
}




