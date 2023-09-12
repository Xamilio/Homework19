#include <iostream>
using namespace std;
//Написать перегруженные функции (int, double, char)
//для выполнения следующих задач :
//¦ Инициализация квадратной матрицы(двумерного массива);
//¦ Вывод матрицы на экран;
//¦ Определение максимального и минимального элемента
//на главной диагонали матрицы

void fun(int x[3][3]) 
    {
       for (int r = 0; r < 3; r++)
           for (int c = 0; c < 3; c++)
           {
               x[r][c] = rand();
           }
       for (int r = 0; r < 3; r++) 
       {
           for (int c = 0; c < 3; c++) 
           {
               cout << x[r][c] << " ";
           }
           cout << "\n";
       }
       int min = x[0][0];
       int max = x[0][0];
       for (int i = 0; i < 3; i++) 
       {
           if (min > x[i][i])
           {
               min = x[i][i];
           }
           if (max < x[i][i])
           {
               max = x[i][i];
           }

       }
       cout << "Минимальное на диагонали: " << min << " Максимальное на диагонали: " << max << "\n";
    }

                                                                                                                                                                                                                                                                                                                                  
    void fun(double x[3][3])
    {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
            {
                x[r][c] = rand() * 1.0 / 3.0;
            }
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                cout << x[r][c] << " ";
            }
            cout << "\n";
        }
        double min = x[0][0];
        double max = x[0][0];
        for (int i = 0; i < 3; i++)
        {
            if (min > x[i][i])
            {
                min = x[i][i];
            }
            if (max < x[i][i])
            {
                max = x[i][i];
            }

        }
        cout << "Минимальное на диагонали: " << min << " Максимальное на диагонали: " << max << "\n";
    }


    void fun(char x[3][3])
    {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
            {
                x[r][c] = rand() % 32 + 48;
            }
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                cout << x[r][c] << " ";
            }
            cout << "\n";
        }
        char min = x[0][0];
        char max = x[0][0];
        for (int i = 0; i < 3; i++)
        {
            if (min > x[i][i])
            {
                min = x[i][i];
            }
            if (max < x[i][i])
            {
                max = x[i][i];
            }

        }
        cout << "Минимальное на диагонали: " << min << " Максимальное на диагонали: " << max << "\n";
    }

    
int main()
{   
    setlocale(LC_ALL, "");
    int masint[3][3];
    double masdouble[3][3];
    char maschar[3][3];
    srand(50);

    fun(masint);
    fun(maschar);
    fun(masdouble);    

}
