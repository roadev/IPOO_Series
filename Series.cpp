/* Autores: Hecho por: Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.1
 * 
 * Nombre del archivo: Series.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Series.h"

Series::Series() {
    
}

Series::~Series() {
}

void Series::ingresarNumero(int numero){
    n = numero;
}

string Series::determinarSerieN2(){
    int j;
    stringstream serieN2;
    
    for(int i=1; i<=n; i++){
        j = pow(i, 2);
        serieN2<<" "<<j<<endl;
    }
    string resultadoN2 = serieN2.str();

    return resultadoN2;
}

string Series::determinarSerieNf(){
    int f;
    f = 1;
    stringstream serieNf;
    for(int k=1; k<=n; k++){
        f = (f*k);
        serieNf<<" "<<f<<endl;
    }
    string resultadoNf = serieNf.str();
    
    return resultadoNf;
}
