#include <iostream>
using namespace std;
class Matrix
{
    int i, j, k, a[3][3], sum;

public:
    void setData()
    {
        cout << endl
             << "Enter the values of 3x3 Matrix: " << endl;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                cin >> a[i][j];
    }
    void showData()
    {
        cout << endl
             << "Your matrix is: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix M)
    {
        Matrix temp;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                temp.a[i][j] = a[i][j] + M.a[i][j];
        return temp;
    }
    Matrix operator-(Matrix M)
    {
        Matrix temp;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                temp.a[i][j] = a[i][j] - M.a[i][j];
        return temp;
    }
    Matrix operator*(Matrix M)
    {
        Matrix temp;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
            {
                for (k = 0, sum = 0; k < 3; k++)
                    sum += a[i][k] * M.a[k][j];
                temp.a[i][j] = sum;
            }
        return temp;
    }
};
int main()
{
    Matrix m1, m2, m3, m4, m5;
    m1.setData();
    m2.setData();
    m1.showData();
    m2.showData();
    m3 = m1 + m2;
    m4 = m1 - m2;
    m5 = m1 * m2;
    m3.showData();
    m4.showData();
    m5.showData();
    return 0;
}