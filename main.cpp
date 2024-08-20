#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

double CalcImc(double altura, double peso) {
    double imc = peso / std::pow(altura, 2);

    return imc;
}

string pesoImc(double imc) {
    if (imc < 18.5) {
        return "Abaixo do peso";
    } else if (imc < 24.9) {
        return "Peso normal";
    } else if (imc < 29.9) {
        return "Sobrepeso";
    } else if (imc < 39.9) {
        return "Obesidade";
    } else {
        return "Obesidade mórbida";
    }
}

int main() {
    string name;
    int idade;
    double altura, peso;

    cout << "Digite seu nome: ";
    cin >> name;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite sua altura(em metros separado por '.' : ";
    cin >> altura;
    cout << "Digite seu peso: ";
    cin >> peso;

    const double valImc = CalcImc(altura, peso);

    cout << name << " tem " << idade << " anos e " << altura << "m de altura" << endl;
    cout << "seu imc é de: " << std::fixed << std::setprecision(2) << valImc << endl;

    const string pessoaImc = pesoImc(valImc);
    cout << "Você esta com " << pessoaImc << endl;


    return 0;
}
