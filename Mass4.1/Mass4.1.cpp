#include <iostream>


int main()
{
    const int size = 17;
    int C[size]{};
    int a, b{}, index_fs[2]{}, count = 0;

    std::cout << "Input a,b: ";
    std::cin >> a, b;

    if (b > a)
    {
        int temp = b;
        b = a;
        a = b;
    }

    for (int i = 0; i < size; i++)
    {
        C[i] = rand() % 10;
        //std::cout << "input C [" << i << "]";
        //std::cin >> C[i];
        if (count < 2 && (C[i] < a || C[i] > b))
        {
            index_fs[count] = i;
            count++;
        }
    }

    if (count < 2)
    {
        std::cout << "not enough numbers";
    }
    else {
        int temp = C[index_fs[0]];
        C[index_fs[0]] = C[index_fs[1]];
        C[index_fs[1]] = temp;
    }

    system("pause");
    return 0;
}