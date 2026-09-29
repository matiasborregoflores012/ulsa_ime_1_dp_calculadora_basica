// Práctica 4: Calculadora básica
// Traduce la receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque de código.

// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;
// ¿Qué funciones trae ahora utilerias.h? ¿Qué devuelve cada una?
#include "utilerias.h"

int main() {


  int numero1;
  int numero2;
  double numero;
  double suma  = 0.0;
  double multiplicacion = 0.0;
  double division = 0.0;
  double resta = 0.0;
  
 std:: cout << "CALCULADORA BASICA XDD" << endl;
   std:: cout << "ingrese una opcion:v" << endl;

    std:: cout << "suma" << endl;
    std:: cout << "multplicacion" << endl;
    std:: cout << "resta"<<endl;
    std:: cout << "division" <<endl;
    
         


    // Variables (siempre inicializadas)
    // TODO: opcion, a, b, resultado y simbolo.
    //       ¿De qué tipo es cada una? Revisa la sección 2 de tu README.
    //       ¿Con qué valor empieza un char?

    // Pasos 1 y 2: título y menú
    // TODO

    // Paso 3: leer la opción con leerEntero y repetir si no está entre 1 y 4
    // TODO: ¿qué ciclo usaste en la Práctica 3 para volver a pedir un dato?

    // Pasos 4 y 5: leer los dos números con leerDecimal
    // TODO

    // Paso 6: SOLO si la opción es división, ¿qué haces si b es 0?
    // TODO

    // Paso 7: decisión múltiple
    // TODO: switch (opcion) { case 1: ... break; ... default: ... }
    //       ¿Qué pasa si olvidas un break? (Experimento A)

    // Paso 8: salida -> a simbolo b = resultado
    // TODO

    // ¿Qué significa return 0;?
    return 0;
}