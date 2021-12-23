// homework4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    {
        float a, b = 0;
        short int min = 10;
        short int max = 20;
        float sum = 0;

        std::cout << "Введите первое число: ";
        std::cin >> a;
        std::cout << std::endl;
        std::cout << "Введите второе число: ";
        std::cin >> b;
        std::cout << std::endl;

        sum = a + b;

        if (sum >= min && sum <= max)
        {
            std::cout << "True\n";
        }
        else
        {
            std::cout << "False\n";
        }
        std::cout << std::endl;
    }

    {
        int a = rand() % 20;
        int b = rand() % 20;

        int sum = 0;

        if ((a == 10 && b == 10) ||( a + b == 10))
        {
            std::cout << "True\n";
        }
        else
        {
            std::cout << "False\n";
        }
        std::cout << std::endl;
    }

    {
        std::cout << "Список целых нечетных чисел <= 50: ";

        for (size_t i = 1; i < 50; i+=2)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    {
        int a = 0;
        int i = 2;

        std::cout << "Введите целое положительное число: ";
        std::cin >> a;
        std::cout << std::endl;

        while (i <= a)
        {
            if (i == a)
            {
                std::cout << "Ваше число является простым." << std::endl;
            }
            else if (a % i == 0)
            {
                std::cout << "Ваше число не является простым." << std::endl;
                break;
            }
            i++;
        }
    }

    {
        int year = 0;
        short int min = 1;
        short int max = 3000;

        std::cout << "Введите год: ";
        std::cin >> year;
        std::cout << std::endl;

        if (year < min || year > max)
        {
            std::cout << "Если хотите получить информацию об этом годе, "
                << "настоятельно рекомендуем изобрести машину времени";
        }
        else if (year % 4 == 0)
        {
            if (year % 100 == 0 && year % 400 != 0)
            {
                std::cout << year << " год не является високосным";
            }
            else
            {
                std::cout << year << " год является високосным";
            }
        }
        else
        {
            std::cout << year << " год не является високосным";
        }
    }

}

