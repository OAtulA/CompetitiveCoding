#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
/*
    cout<< (3 | 4)<<endl;
    cout<< (5|9) <<endl;
    cout<< (1|4) <<endl;
*/

    int k[5][2]= { {1, 1}, {2, 2}, {3, 3}, {3, 1}, {3, 2} } ;
    int c[5] ;
    // = [ (1|1), (2|2), (3|3), (3,1), (3|2) ]
    for(int i=0; i<5; i++)
    {
        c[i] = k[i][0] | k[i][1] ;
    }
    
    for(int i=0; i<5; i++)
    {
        cout<< c[1]<<endl;
    }
    return 0;
    

    
}