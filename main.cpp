// Práctica 4: Calculadora básica
// Traduce la receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque de código.

// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;
// ¿Qué funciones trae ahora utilerias.h? ¿Qué devuelve cada una?
#include "utilerias.h"

int main() {


  double numero1;
  double numero2;
  int opcion;
  double numero;
  double suma  = 0.0;
  double multiplicar = 0.0;
  double division = 0.0;
  double resta = 0.0;
  
 std:: cout << "CALCULADORA BASICA XDD" << endl;
   std:: cout << "ingrese una opcion:v" << endl;

    std:: cout << "1. suma" << endl;
    std:: cout << "2. multplicacion" << endl;
    std:: cout << "3. division"<<endl;
    std:: cout << "4. resta" <<endl;

    std:: cin >> opcion;    
switch (opcion){

case 1:
 std:: cout << "eligio suma" << endl;
   std:: cout << "ingrese numero 1=";
   std:: cin >> numero1;
   std:: cout << "ingrese numero 2=";
   std:: cin >> numero2;
   
 suma = numero1 + numero2;
  std:: cout << "suma=" << suma << endl;
     break;

     case 2:
 std:: cout << "eligio multiplicacion"<<endl;
   std:: cout << "ingrese numero 1=";
   std:: cin >> numero1;
   std:: cout << "ingrese numero 2=";
   std:: cin >> numero2;
 multiplicar = numero1 * numero2;
  std:: cout << "multiplicar=" << multiplicar << endl;
     break;

   case 3:
   std:: cout << "eligio division"<<endl;
   std:: cout << "ingrese numero 1=";
   std:: cin >> numero1;
   std:: cout << "ingrese numero 2=";
   std:: cin >> numero2;  
if (numero2 !=0){

}

 division = numero1 / numero2;

  std:: cout << "division=" << division << endl;


 
     break;

      case 4:
    std:: cout << "eligio resta"<<endl;
   std:: cout << "ingrese numero 1=";
   std:: cin >> numero1;
   std:: cout << "ingrese numero 2=";
   std:: cin >> numero2;
 resta = numero1 - numero2;
  std:: cout << "resta=" << resta << endl;
     break;


     default:std:: cout << "solo puedes elegir del 1-4 por tonto, explota tu compu xd";
}
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