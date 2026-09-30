# Práctica 4: Calculadora básica

> **Las secciones 1 a 6 ya están resueltas por el profesor.** Léelas con atención, pero no las modifiques. Tu trabajo empieza en la sección 7.

## 1. Descripción del problema (Fase 1, resuelta)

El programa muestra un menú con cuatro operaciones (suma, resta, multiplicación y división). El usuario elige una, escribe dos números y el programa muestra el resultado de la operación. Es la base de cualquier calculadora y del tipo de menú que se usa, por ejemplo, en el panel de control de una máquina.

## 2. Entradas y salidas (Fase 1, resuelta)

**Entradas:**
1. `opcion` (`int`): la operación elegida, de 1 a 4. Se lee con `leerEntero`.
2. `a` (`double`): el primer número. Se lee con `leerDecimal`.
3. `b` (`double`): el segundo número. Se lee con `leerDecimal`.

**Salidas:**
1. `resultado` (`double`): el resultado de la operación.
2. Se muestra en la forma `a símbolo b = resultado`, por ejemplo `7 / 2 = 3.5`. El símbolo se guarda en `simbolo` (`char`).

**Operaciones:** 1) `a + b`   2) `a - b`   3) `a * b`   4) `a / b`

## 3. Restricciones e invariante (Fases 1 y 2, resuelta)

**Restricciones:**
- La opción debe estar entre 1 y 4. Si no, el programa la vuelve a pedir.
- Si la operación es división, `b` no puede ser 0. Si lo es, el programa vuelve a pedir solo `b`.
- En la resta y en la división el orden importa: siempre se calcula `a` op `b`.

**¿Quién detecta cada error?**
- `leerEntero` y `leerDecimal` detectan el **formato**: texto (`abc`) o, en el caso de `leerEntero`, decimales (`2.5`).
- El programa detecta el **rango**: una opción fuera de 1 a 4 y un divisor igual a 0.

**Invariante:** al llegar al Paso 7 (el cálculo), `opcion` está entre 1 y 4 y, si la opción es 4 (división), `b` es distinto de 0. Por eso el cálculo siempre es válido.

## 4. Casos resueltos a mano (Fase 1, resuelta)

| Caso | Opción | a | b | Resultado |
|---|---|---|---|---|
| 1 | 1 (suma) | 8 | 5 | 8 + 5 = 13 |
| 2 | 2 (resta) | 3 | 5 | 3 - 5 = -2 |
| 3 | 3 (multiplicación) | 2.5 | 4 | 2.5 * 4 = 10 |
| 4 | 4 (división) | 7 | 2 | 7 / 2 = 3.5 |
| 5 | 4 (división) | 5 | 0, luego 2 | vuelve a pedir `b`; 5 / 2 = 2.5 |

## 5. Receta en pseudocódigo (Fase 2, resuelta)

La receta completa está en el archivo `RECETA.md`. No la modifiques: si encuentras algo que no contempla, anótalo en la sección 11.

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o calculadora
./calculadora
```

## 7. Ejemplo de ejecución (Fase 3)
PS C:\Users\taqui\Documents\ulsa_ime_1_dp_calculadora_basica> ./main.exe
CALCULADORA BASICA XDD
ingrese una opcion:v
1. suma
2. multplicacion
3. division
4. resta
3
eligio division
ingrese numero 1=2
ingrese numero 2=0
division=inf<!-- Pega aquí lo que muestra tu programa en pantalla con una división donde primero escribes 0 como segundo número. -->

```
_____
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de la receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1 y 2. Título y menú | std:: cout << "CALCULADORA BASICA XDD" << endl; std:: cout << "ingrese una opcion:v" << endl;

    std:: cout << "1. suma" << endl;
    std:: cout << "2. multplicacion" << endl;
    std:: cout << "3. division"<<endl;
    std:: cout << "4. resta" <<endl;
 |
| 3. Leer y validar la opción | switch (opcion)

case 1:
 std:: cout << "eligio suma" << endl;
   std:: cout << "ingrese numero 1=";
   std:: cin >> numero1;
   std:: cout << "ingrese numero 2=";
   std:: cin >> numero2;
   
 suma = numero1 + numero2;
  std:: cout << "suma=" << suma << endl;
     break; |
| 4 y 5. Leer `a` y `b` | std:: cout << "ingrese numero 1=";
   std:: cin >> numero1;
   std:: cout << "ingrese numero 2=";|
| 6. Validar el divisor | no hay solo error |
| 7. Decisión múltiple (un `case`) | switch (opcion) aqui pongo los 4 casos |
| 8. Mostrar el resultado |suma = numero1 + numero2;
  std:: cout << "suma=" << suma << endl; |

**¿Hubo algún paso de la receta que te costó traducir a C++? ¿Cuál y por qué?**
pues nninguno ya con el codigo

## 9. Experimentos (Fase 3)

**Experimento A: sin el `break` del `case 1`, ¿qué mostró el programa con 8 + 5? ¿Qué te dijo el compilador? ¿Por qué pasó?**
se crashea 

**Experimento B: sin la validación del Paso 6, ¿qué mostró el programa con 5 / 0? ¿Tiene sentido?**
error se cierra

**Experimento C (opcional): con `a` y `b` de tipo `int`, ¿qué resultado dio 7 / 2? ¿Te avisó el compilador?**
me da 3

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas (opción, a, b) | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Suma | 1, 8, 5 | 8 + 5 = 13 | 13 | si |
| Resta negativa | 2, 3, 5 | 3 - 5 = -2 | -2 | si|
| Multiplicación con decimales | 3, 2.5, 4 | 2.5 * 4 = 10 |10|si |
| Multiplicación con negativo | 3, -3, 4 | -3 * 4 = -12 | -12|si|
| División | 4, 7, 2 | 7 / 2 = 3.5 | 3.5 si|
| Dividendo cero | 4, 0, 5 | 0 / 5 = 0 |0 | si |
| Divisor cero | 4, 5, 0 (luego 2) | vuelve a pedir `b`; 5 / 2 = 2.5 |2.5|si
| Suma con cero | 1, 5, 0 | 5 + 0 = 5 (**no** vuelve a pedir `b`) | 5 | si |
| Opción fuera de rango | 5 (luego 1), 8, 5 | vuelve a pedir la opción; 8 + 5 = 13 | vueve a perdir 13|si
| Opción cero | 0 (luego 1), 8, 5 | vuelve a pedir la opción; 8 + 5 = 13 | vuelve a perdir 13|si
| Opción decimal | 2.5 (luego 2), 3, 5 | `leerEntero` vuelve a pedir; 3 - 5 = -2 | vuelve a pedir -2|si|
| Opción con texto | `suma` (luego 1), 8, 5 | `leerEntero` vuelve a pedir; 8 + 5 = 13 | vuelve a pedir 13|si|
| Número con texto | 1, `abc` (luego 8), 5 | `leerDecimal` vuelve a pedir; 8 + 5 = 13 | vuelve a pedir 13|si|
| Caso propio 1 | 2, -10, -5|-10 - (-5) = -5|-5|si|
| Caso propio 2 | 4, 9.9, 3.3 |9.9 / 3.3 = 3|3|si|

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 |	El programa se cerraba al dividir entre cero|nada|no
| 2 | La división con enteros daba resultados truncados (7/2 = 3)|Cambié las variables int por double para aceptar decimales |si |

**¿Encontré algo que la receta no contemplaba? ¿Qué?**
al usar int la division no descarta decimales

**Reto elegido (opcional):**usar if para que al dividir entre 0 no se crashee
## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
|hacer el if | crearlo pero no funciono |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
a usar switch y case

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
nada

**¿Qué fue lo más difícil y cómo lo resolví?**
usar switch y a prueba y error

**¿Qué pregunta me quedó sin responder?**
el uso del if

**¿Fue más fácil programar a partir de una receta ajena que de la mía? ¿Por qué?**
fue facil programar de la receta

**Si yo hubiera diseñado la receta, ¿qué le cambiaría?**
nada

## 14. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené las secciones 7 a 13 (no quedan `_____`)
- [ ] No modifiqué las secciones 1 a 6 ni la receta de `RECETA.md`
- [ ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 4 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom