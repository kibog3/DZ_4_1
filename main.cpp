// Задача 1. Сумматор
//Напишите программу, которая запрашивает у пользователя целые числа до тех пор, пока пользователь не введёт число 0.
//После того, как пользователь ввёл число 0, программа выводит сумму введённых пользователем чисел и завершает работу.

#include <iostream>


int main() {

    int summ{0};

    while (true) {
        int vvedenoeChislo;
        std::cout << "Vvedite celoe chislo ili chislo \'0\', chtobi zakonchit:" << std::endl;
        std::cin >> vvedenoeChislo;
        
        if (vvedenoeChislo == 0) break;

        summ += vvedenoeChislo;
    }

    std::cout << "Summ: " << summ << std::endl;
  


    return EXIT_SUCCESS;
}