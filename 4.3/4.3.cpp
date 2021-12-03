// 4.3.cpp : 
//

#include <iostream>
#include <iomanip>
#include <conio.h>

void display(int tablica[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << tablica[i][j] << "\t";
        }
        std::cout << "\n";
    
    }
}

int main()
{
    int tablicunia[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
             tablicunia[i][j] = 0;
        }
     

    }

    for (int i = 0; i < 10; i++)
    {
        tablicunia[i][0] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        tablicunia[i][1] = i+i;
    }
    for (int i = 0; i < 10; i++)
    {
        tablicunia[i][2] = i * i;
    }
    for (int i = 0; i < 10; i++) //wiersze i kolumny numerowane od 1 (nie dodawałam liczby wyświetlanej, tylko tak, jak liczylam faktycznie wiersze)
    {
        tablicunia[i][3] = i + 5;
    }
    for (int i = 0; i < 10; i++)
    {
        tablicunia[i][4] = i - 4;
    }




    
   
    display(tablicunia);
    return 0;
}

