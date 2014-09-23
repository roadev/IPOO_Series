/* Autores: Hecho por: Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.1
 * 
 * Nombre del archivo: Series.h
 * Responsabilidad: 
 * Colaboración: 

 */

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#ifndef SERIES_H
#define	SERIES_H

class Series {
public:
    Series();
    ~Series();
    string determinarSerieN2();
    string determinarSerieNf();
    void ingresarNumero(int numero);
    
    
private:
    int n;
};

#endif	/* SERIES_H */

