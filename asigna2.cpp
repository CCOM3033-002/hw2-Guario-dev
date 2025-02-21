/*
Asigna2 : Suma de fracciones 
Nombre: Guarionex Vazquez Soto 
Núm. Est: 801-22-1825
*/

#include <iostream>
#include <iomanip>


using namespace std;


int main (){                

// declaramos las variables num(numerador) denom(denominador)

    int num1 , denom1, num2, denom2, resul_num, resul_denom;

// desplegamos el proposito del programa 

    cout <<"\tEl propósito de este programa es pedirle al usuario 2 fracciones\n\ty calcular la suma de ambos. Presione ENTER para continuar:"<<endl;
    
    cin.ignore();

// pedimos el numerador de la primera fraccion y le asignamos el valor a num1

    cout << "\tEntre el numerador de la primera fraccion: ";

    cin >> num1;

    cout << endl;

// pedimos el denominador de la primera fraccion y le asignamos el valor a denom1

    cout << "\tEntre el denominador de la primera fraccion: ";

    cin >> denom1;

    cout << endl;
    
// pedimos el numerador de la segunda fraccion y le asignamos el valor a num2

    cout << "\tEntre el numerador de la segunda fraccion: ";

    cin >> num2;

    cout << endl;

// pedimos el denominador de la segunda fraccion y le asignamos el valor a denom2

    cout << "\tEntre el denominador de la segunda fraccion: ";

    cin >> denom2;

    cout << endl;

// hacemos la suma entre los numeradores y los denominadores 

    resul_num = num1*denom2 + denom1*num2;

    resul_denom = denom1*denom2;

// desplegamos el valor de la suma de fracciones 

    cout << "\tLa suma de ambas fracciones es: " << resul_num << "/" << resul_denom << endl;

    return 0;
}