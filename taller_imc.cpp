
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // declaracion de las variables
    
    // donde se guarda el nombre del paciente 
    string nombreCompleto;
    //tipo entero "int"
    int edad;
    //tipo caracter "char"
    char genero;
    char estrato;
    
    // Variables tipo "double" para  peso, altura y el IMC
    double peso;
    double altura;
    double imc;
    
    // Variable tipo "bool" para alergias del paciente
    bool tieneAlergias;
    char respuestaAlergia;
    
    //se utilizan variables tipo "string" para la informacion del contacto
    string direccion;
    string telefono;
    string email;

    //datos del paciente
    cout << "      DATOS DEL PACIENTE         \n";

    cout << "Ingrese el nombre completo: ";
    getline(cin, nombreCompleto); // getline permite leer nombres con espacios
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Ingrese el genero (M/F/O): ";
    cin >> genero;
    cout << "Ingrese el estrato socioeconomico (1-6): ";
    cin >> estrato;
    cout << "Ingrese el peso en kg : ";
    cin >> peso;
    cout << "Ingrese la altura en metros : ";
    cin >> altura;
    cout << "Tiene alergias conocidas? (S/N): ";
    cin >> respuestaAlergia;

    
    if (respuestaAlergia == 'S' || respuestaAlergia == 's') {
        tieneAlergias = true;
    } else {
        tieneAlergias = false;
    } // se utiliza el "||" para desir o y el if para validar
    cin.ignore(); // Limpiamos el salto de línea que dejó el último "cin", Si no hacemos esto, el siguiente 'getline' se lo saltará automáticamente.
    

    cout << "\n  DATOS PERSONALES  \n";
    cout << "Ingrese la direccion de residencia: ";
    getline(cin, direccion); 

    cout << "Ingrese el numero de telefono: ";
    getline(cin, telefono);

    cout << "Ingrese el correo electronico: ";
    getline(cin, email);

    // Fórmula: IMC 
    imc = peso / (altura * altura);

    //utilizamos el if
    string clasificacion;
    if (imc < 18.5) {
        clasificacion = "Bajo peso";
    } else if (imc <= 24.9) {
        clasificacion = "Normal";
    } else {
        clasificacion = "Sobrepeso";
    }

    
    cout << "             DIAGNOSTICO                \n";
    cout << "Nombre     : " << nombreCompleto << endl;
    cout << "Edad       : " << edad << " años" << endl;
    cout << "Genero     : " << genero << endl;
    cout << "Estrato    : " << estrato << endl;
    
    // Evaluamos el bool para mostrar "Sí" o "No"
    if (tieneAlergias) {
        cout << "Alergias   : Sí" << endl;
    } else {
        cout << "Alergias   : No" << endl;
    }
    
    cout << "           DATOS DE CONTACTO             \n";
    cout << "Direccion  : " << direccion << endl;
    cout << "Telefono   : " << telefono << endl;
    cout << "Email      : " << email << endl;
    

    cout << "           MEDIDAS             \n";
    cout << "Peso       : " << peso << " kg" << endl;
    cout << "Altura     : " << altura << " m" << endl;
    cout << "IMC        : " << imc << " (" << clasificacion << ")" << endl;
    

    return 0;
}