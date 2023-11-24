#include <iostream> // Biblioteca padrão.

// Função principal do programa
int main() {
    // Saída para o console
    std::cout << "Hello, World!" << std::endl;

    // Variáveis
    int numero = 10;
    double decimal = 3.14;
    char caractere = 'A';

    // If / else
    if (numero > 5) {
        std::cout << "O numero eh maior que 5." << std::endl;
    } else {
        std::cout << "O numero eh menor ou igual a 5." << std::endl;
    }

    // Estrutura de repetição (for)
    for (int i = 0; i < 5; ++i) {
        std::cout << "Contagem: " << i << std::endl;
    }

    // Função
    int soma = somar(2, 3);

    // Ponteiros/Indicadores
    int* ponteiro = &numero;
    std::cout << "Valor apontado por ponteiro: " << *ponteiro << std::endl;

    // Arrays
    int array[3] = {1, 2, 3};

    // Strings
    std::string texto = "C++ é poderoso!";

    return 0;
}

// Definição de uma função
int somar(int a, int b) {
    return a + b;
}
