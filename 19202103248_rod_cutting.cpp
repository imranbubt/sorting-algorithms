#include <iostream>
using namespace std;
// #define MAX(x, y) (((x) > (y)) ? (x) : (y))


int bottom_up_cut_rod(int p[], int n)
{
    int r[100];
    r[0] = 0; // 0 tomo value tekhe profit earn kora possible na
    int i, j, q;

    for (j = 1; j <= n; j++) // j er value 1 tekhe n porjonto chalabo
    {
        q = -1000; //Profit ta k maximize krte chay tai ekta minimum value orthat negative value die rakhlam
    }

    for (i = 1; i <= j; i++) // Ai loop ta combination gula check korar jnno, 1 tekhe j(rod er length) projonto cholbe
    {
        q = max(q, p[i] + r[j - i]);
    }

    r[j] = q;  // Ager line e maximum Q ta pabo, oita R er vetor rakhbo
}

int main()
{
    int p[] = {1, 10, 24, 30, 40, 45};
    int rod_length = 5;

    cout << "Here Maximum Profit is " << bottom_up_cut_rod(p, rod_length);
    return 0;
}
