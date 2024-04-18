#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Declaración matriz sparse
    int a[3][7] = {{0, 0, 0, 0, 0, 0, 9},
                   {0, 0, 10, 0, 0, 0, 0},
                   {0, 0, 0, 8, 0, 0, 0}};
    int n = 3;
    int m = 7;

    vector<vector<int>> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != 0) {
                vector<int> temp = {i, j, a[i][j]};
                b.push_back(temp);
            }
        }
    }

    // Imprimir matriz sparse
    for (size_t i = 0; i < b.size(); i++) {
        for (size_t j = 0; j < 3; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}