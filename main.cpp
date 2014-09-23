/* Autores: Hecho por: Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.1
 * 
 * Nombre del archivo: main.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Series.h"

int main() {

    int n;
    Series calculadora;
    
    cout<<"Ingrese el número para calcular las series n² y n!"<<endl;
    cin>>n;
    calculadora.ingresarNumero(n);
    cout<<"Las series son: "<<endl;
    cout<<"Serie n²: "<<calculadora.determinarSerieN2()<<endl;
    cout<<"Serie n!: "<<calculadora.determinarSerieNf()<<endl;
    
}

