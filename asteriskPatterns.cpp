#include <iostream>
using namespace std;

void leftTriangle(int n){
    // *
    // **
    // ***
    // ****
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i;j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}

void boxFilled(int n){
    // ****
    // ****
    // ****
    // ****
    for(int i = 1; i <= n ;i++){
        for(int j = 1 ; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedLeftTriangle(int n){
    // ****
    // ***
    // **
    // *
    // for(int i = n ; i >=1 ; i--){    INTUITION METHOD
    //     for(int j = 1; j<= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    for(int i = 1 ; i <= n ; i++){      //FORMULA METHOD
        for(int  j = 1; j <= n+1-i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void mountainRotated90(int n){
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    
    // we can see that if 5 is n, the number of rows in 2n -1
    // till our row number is in range of n, we print it naturally, in increasing order
    // once our row number is > n, our number of colns will decrease in an interesting pattern
    // if row = 6, coln = 5-1   
    // if row = 7, coln = 5-2
    // if row = 8, coln = 5-3
    // (n - (row-n)) OR (n - (row%n))

    for(int i = 1; i <= 2*n-1 ; i++){
        if(i <= 5){
            for(int j = 1; j <= i; j++)
                cout << "*";
        }
        else{
            for(int j = 1; j <= n - (i-n) ; j++)
                cout << "*";
        }
        cout << endl;
    }
}

void diamond(int n){
    //     *            // 4 spaces in front of 1st row
    //    * *           // 3 infront of 2nd
    //   * * *          // ith row has n-i spaces before first asterisk
    //  * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    int columns,spaces;
    for(int i  = 1 ; i <= 2*n -1; i++){
        columns = (i>n)? n-(i%n):i;
        spaces = n - columns;
        int count = 0;
        string space ="";

        while(count < spaces){
            space += " ";
            count++;
        }
        cout << space;
        for(int j = 1; j <= columns ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void rightTriangle(int n){
    //      *
    //     **
    //    ***
    //   ****
    //  *****
    string spaces;
    for(int i = 1; i <= n; i++){
        spaces = "";
        while(spaces.size() != n-i){
            spaces += " ";
        }
        cout << spaces;
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void invertedRightTriangle(int n){
    //  *****
    //   ****
    //    ***
    //     **
    //      *
    string spaces;
    for(int i = n; i >= 1; i--){
        spaces = "";
        while(spaces.size() != n-i){
            spaces += " ";
        }
        cout << spaces;
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void verticalTriangle(int n){   
    //     *        1 sign,         1st row 4spaces
    //    ***       3 signs,        2nd row 3 spaces
    //   *****      5 signs,        3rd row 2 spaces
    //  *******     7 signs,        4th row 5-4 = 1space
    // *********    2*row-1 signs   nth row, n-i = 0 spaces
    int spacecount;
    for(int i = 1; i <= n ;i++){
        spacecount = 0;
        while(spacecount != n-i){
            cout << " ";
            spacecount++;
        }
        for(int j = 1; j <= 2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void invertedVerticalTriangle(int n){
    //   * * * * *
    //    * * * *
    //     * * *
    //      * *
    //       *

    int spacecount;
    for(int i = n; i >= 1 ;i--){
        spacecount = 0;
        while(spacecount != n-i){
            cout << " ";
            spacecount++;
        }
        for(int j = 1; j <= 2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void hourglass(int n){
    //  * * * * *       
    //   * * * *        // sum of row number and number of asterisks is always 6,
    //    * * *         // there are i-1 spaces in each row < n, 
    //     * *          // there are 2*n -i spaces in each row > n    
    //      *               
    //      *           4 spaces
    //     * *          3 spaces 
    //    * * *         2 spaces
    //   * * * *
    //  * * * * *
    int cols,spacecount; 
    for(int i = 1; i <= 2*n ;i++){
        
        spacecount = (i>n)? (2*n-i):(i - 1);
        for(int k = 1; k <= spacecount; k++) cout << " ";
        
        cols = (i>n)? (i-n):n+1-i;
        for(int j = 1; j <= cols; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void triangleOutline(int n){
    //      *           
    //     * *
    //    *   *
    //   *     *
    //  *********
    int spaces;
    for(int i =1 ; i <= n; i++){
        spaces  = 0;
        while(spaces != n-i ){
            cout << " ";
            spaces++;
        }
        for(int j = 1; j <= 2*i -1 ; j++){
            if(i != n){
                if(j == 1 || j == 2*i -1) cout << '*';
                else cout << " ";
            }
            else cout << "*";
        }
        cout << endl;
    }
}

void invertedTriangleOutline(int n){
    //  *********
    //   *     *
    //    *   *
    //     * *
    //      *
    int spaces;
    for(int i = n;  i >= 1 ; i--){
        spaces  = 0;
        while(spaces != n - i){
            cout << " ";
            spaces ++;
        }
        for(int j = 1; j <= 2*i- 1; j++){
            if(i != n){
                if(j == 1 || j  == 2*i- 1) cout << "*";
                else cout << " ";
            }else
                cout << "*"; 
            
        }
        cout << endl;
    }
}

int main(){
    
    return 0;
}