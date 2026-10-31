#include <iostream>
#include <iomanip>
using namespace std;

// Prototipos
double calcularTotalPagar(int cantidad, double precio);
void mostrarTotal(double totalPagar);

// Funcion: retorna cantidad x precio, con 10 % de descuento si el total supera 5,000
double calcularTotalPagar(int cantidad, double precio) {
    double total = cantidad * precio;

    if (total > 5000) {
        total = total - (total * 0.10);
    }

    return total;
}

// Procedimiento: muestra el total a pagar (no devuelve nada)
void mostrarTotal(double totalPagar) {
    cout << "Total a pagar: " << setprecision(10) << totalPagar << endl;
}

int main() {
    int cantidad;
    double precio;

    cout << "Cantidad: ";
    cin >> cantidad;
    cout << "Precio: ";
    cin >> precio;

    double totalPagar = calcularTotalPagar(cantidad, precio);
    mostrarTotal(totalPagar);

    return 0;
}
