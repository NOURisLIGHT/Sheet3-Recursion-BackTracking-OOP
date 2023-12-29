#include <iostream>
#include <string>

using namespace std;

void permute (string input, int L, int R);

int main()
{
    string s;
    cout << "Enter string to get permutations: ";
    cin >> s;
    permute(s, 0, s.size());
}

void permute(string input, int L, int R)
{
    if (L == R)
        cout << input << endl;
    else
    {
        for (int i = L; i < R; i++)
        {
            swap(input[L], input[i]);
            permute(input, L + 1, R);
            swap(input[L], input[i]); 
        }
    }
    
}
