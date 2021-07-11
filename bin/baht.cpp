/**
 * @file baht.cpp
 *
 * @version 01.01 2020-11-7
 *
 * @brief https://training.olinfo.it/#/task/baht/statement
 *
 * @ingroup baht
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

#define DEBUG

// Variabiles
int T, N, sum, temp;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
#ifndef DEBUG
    freopen("output.txt", "w", stdout);
#endif // DEBUG

    // Input
    cin >> T;
#ifdef DEBUG
    cout << "T = " << T << endl;
#endif // DEBUG

    for (int t = 0; t < T; ++t)
    {
        cin >> N;
#ifdef DEBUG
        cout << "N[" << t << "] = " << N << endl;
#endif // DEBUG
        sum = 0;
        vector <int> values(N);

        for (int n = 0; n < N ; ++n)    // Read all values
            cin >> values[n];
        sort(values.begin(), values.end());
        for (int n = 0; n < N ; ++n)
        {
#ifdef DEBUG
            cout << "value[" << n << "] = " << values[n] << endl;
#endif // DEBUG
            if(values[n] <= sum + 1)
            {
                sum += values[n];
            }
            else
            {
                n = N;
            }
        }
#ifdef DEBUG
        cout << "My result is: ";
#endif // DEBUG
        cout << sum + 1 << endl;
    }

    // End
    return 0;
}
