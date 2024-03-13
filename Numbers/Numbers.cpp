// ѕрактическое задание к уроку 15.4. по выводу в консоль четных/нечетных чисел до заданного

#include <iostream>
#include <string>

//¬ функции выбрал switch, потому что у нас всего три варианта выбора, и чтобы не городить else if написал так
std::string ParityDetermine(int EvenParameter)
{
    std::string Parity;
    switch (EvenParameter)
    {
    case 1:
        Parity = "ODD";
        break;
    case 2:
        Parity = "EVEN";
        break;
    default:
        std::cout << "Bad Choice" << std::endl;
        exit(1);
    }
    return Parity;
}

void FindDesiredNumbers(std::string EvenParameter, int N)
{
    std::cout << "Printing " << EvenParameter << " numbers up to " << N << ":" << std::endl;
    if (EvenParameter == "ODD")
    {
        for (int i = 0; i <= N; i++)
        {
            if (i % 2 == 1)
            {
                std::cout << i << std::endl;
            }
        }
    }
    else
    {
        for (int i = 0; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << i << std::endl;
            }
        }
    }
}

int main()
{
    int Even, Num;
    std::string NumberParity;
    
    std::cout << "Enter the parity of the number:" << std::endl;
    std::cout << "1 - ODD\n" << "2 - EVEN\n" << "Your choice: ";
    std::cin >> Even;

    NumberParity = ParityDetermine(Even);
    
    std::cout << "Enter the number to which you want to complete the program: ";
    std::cin >> Num;

    FindDesiredNumbers(NumberParity, Num);
        
    return 0;
}
