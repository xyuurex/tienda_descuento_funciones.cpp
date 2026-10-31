# tienda_descuento_funciones.cppTienda con descuento: funciones y procedimientos

Programa en C++ que calcula el total a pagar de una venta y aplica un 10 % de descuento si el total supera 5,000. Está hecho con una función y un procedimiento, como se pide en la actividad propuesta de la clase "Funciones y procedimientos".

Problema

Una tienda registra la cantidad y el precio de un producto. Debe calcular el total de la venta y aplicar 10 % de descuento si ese total supera 5,000.

Cómo está organizado
Parte	Tipo	Qué hace
calcularTotalPagar(cantidad, precio)	Función (double)	Retorna cantidad × precio; si el total supera 5,000, le resta el 10 %
mostrarTotal(totalPagar)	Procedimiento (void)	Muestra en pantalla el total a pagar, sin devolver nada
main()	Programa principal	Pide la cantidad y el precio, llama a la función y pasa el resultado al procedimiento
Flujo del programa
main() pide la cantidad y el precio al usuario.
main() llama a calcularTotalPagar(cantidad, precio) y guarda lo que retorna.
main() llama a mostrarTotal(totalPagar), que imprime el resultado.
Archivos
tienda_descuento_funciones.cpp: código fuente
README.md: este archivo
Compilación y ejecución

Requiere c++ (C++11 o superior) o Visual Studio.

bash
c++ tienda_descuento_funciones.cpp -o tienda
./tienda

En Windows, el ejecutable se corre con tienda.exe.

Ejemplo de ejecución
Cantidad: 4
Precio: 1500
Total a pagar: 5400
Pruebas realizadas
Cantidad	Precio	Total a pagar	Descuento
2	1,000	2000	No
4	1,500	5400	Sí
5	1,000	5000	No (el total no supera 5,000)
0	0	0	No
Conceptos aplicados
Declaración de prototipos antes de main()
Función con parámetros y valor de retorno
Procedimiento (void) que realiza la salida por pantalla
Condicional if para decidir el descuento
Variables locales (sin variables globales)
Autor
