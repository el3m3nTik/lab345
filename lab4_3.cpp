#include <iostream> 
#include <iomanip>
// Найти столбец с наименьшей суммой элементов и все эл-ты этого столбца увелечить в 3 раза.
using namespace std;
int main()
{
    const int ROW = 3;
    const int COL = 4;
    int sum = 10000;
    int index = 0;
    int matrix[ROW][COL] =
    {
    {43,10,10,1},
    {12,28,99,34},
    {2,50,4,5}
    };
    for (int i = 0, temp = 0; i < COL; i++) {

        for (int j = 0; j < ROW; j++) {

            temp += matrix[j][i];
        }
        if (sum > temp) {
            sum = temp;
            index = i;
        }

        temp = 0;
    }
    for (int i = 0; i < ROW; i++) {
        matrix[i][index] *= 3;
    }

    for (int i = 0; i < ROW; i++) {
        cout << matrix[i][index] << endl;
    }

    return 0;
}
