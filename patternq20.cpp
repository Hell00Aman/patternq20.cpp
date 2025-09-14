#include<bits/stdc++.h>
using namespace std;

// Function to print Pattern 20 (double triangle / bow-tie shape)
void print20(int n){
    int spaces = 2*n - 2; // initial spaces between star groups
    
    for(int i=1; i<=2*n-1; i++){
        int stars = i;                // stars count increases
        if(i>n) stars = 2*n - i;      // after middle, stars decrease
        
        for(int j=1; j<=stars; j++) cout << "*";   // left stars
        for(int j=1; j<spaces; j++) cout << " ";   // spaces
        for(int j=1; j<=stars; j++) cout << "*";   // right stars
        
        cout << endl;
        
        if(i<n) spaces -= 2;          // reduce spaces until mid
        else spaces += 2;             // increase spaces after mid
    }
}

int main(){
    int n;
    cin >> n;      // input size
    print20(n);    // print pattern
    return 0;
}
