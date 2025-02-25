#include <iostream>
#include <unordered_map>
#include <functional>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    int number_of_spaces, number_of_stars;
    int total = (2*n) - 1, hnos;
    for(int i=1;i<=n;i++){
        number_of_stars = (2*i) - 1;
        number_of_spaces = total - number_of_stars;
        hnos = number_of_spaces/2;
        for(int j=1;j<=hnos;j++){
            cout<<" ";
        }
        for(int j=1;j<=number_of_stars;j++){
            cout<<"*";
        }
        cout<<endl;  
    }
}

void pattern8(int n){
    int number_of_spaces, number_of_stars;
    int total = (2*n) - 1, hnos;
    for(int i=n;i>=1;i--){
        number_of_stars = (2*i) - 1;
        number_of_spaces = total - number_of_stars;
        hnos = number_of_spaces/2;
        for(int j=1;j<=hnos;j++){
            cout<<" ";
        }
        for(int j=1;j<=number_of_stars;j++){
            cout<<"*";
        }
        cout<<endl;  
    }
}
void pattern9(int n){
    pattern7(n);
    pattern8(n);
}
void pattern10(int n){
    pattern2(n);
    pattern5(n-1);
}

void pattern11(int n){
    int display_digit;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            display_digit = 0;
        }
        else{
            display_digit = 1;
        }
        for(int j=1;j<=i;j++){
            cout<<display_digit<<" ";
            if(display_digit==1){
                display_digit-=1;
            }
            else if(display_digit==0){
                display_digit+=1;
            }
        }
        cout<<endl;
    }
}

void pattern12(int n){
    int number_of_spaces = 2*n;
    int end,j;
    for(int i=1;i<=n;i++)
    {
        int nos = number_of_spaces - (2 * i);
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        end = j-1;
        for(j=1;j<=nos;j++)
        {
            cout<<" ";
        }
        for(j=end;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int number=1,j;
    for(int i=1;i<=n;i++){
        for(j=number;j<=(number+i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        number = j;
    }
}

void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char j=65;j<=(65+i);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=n-1;i>=0;i--){
        for(char j=65;j<=(65+i);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(char i=65;i<(65+n);i++){
        for(int j=1;j<=(i-65+1);j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern17(int n){
    int number_of_spaces, number_of_chars;
    int total = (2*n) - 1, hnos;
    char j, end;
    for(int i=1;i<=n;i++){
        number_of_chars = (2*i) - 1;
        number_of_spaces = total - number_of_chars;
        hnos = number_of_spaces/2;
        for(int j=1;j<=hnos;j++){
            cout<<" ";
        }
        for(j=65;j<=(65+i-1);j++){
            cout<<j;
        }
        end = j-2;
        for( j=end;j>=65;j--){
            cout<<j;
        }
        cout<<endl;  
    }
}

void pattern18(int n){
    char display = 65+n-1;
    for(int i=1;i<=n;i++){
        for(char j=display;j<=(display+i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        display-=1;
    }
}

void pattern19(int n){
    int number_of_spaces = 2*n;
    int number_of_stars;
    for(int i=0;i<n;i++){
        number_of_stars = number_of_spaces - (2*i);
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(2*i);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        number_of_stars = number_of_spaces - (2*i);
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(2*i);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern20(int n){
    int number_of_spaces = 2*n;
    int number_of_stars;
    for(int i=n-1;i>=0;i--){
        number_of_stars = number_of_spaces - (2*i);
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(2*i);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<n;i++){
        number_of_stars = number_of_spaces - (2*i);
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(2*i);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(number_of_stars/2);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}

void pattern21(int n){
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n-2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
}

void pattern22(int n)
{
    int number_of_spaces = (2*n)-1;
    int stop_no;
    for(int i=0;i<(number_of_spaces+1)/2;i++){
        stop_no = n - i;
        for(int j=n;j!=stop_no;j--)
        {
            cout<<j;
        }
        for(int j=1;j<=(2*stop_no)-1;j++)
        {
            cout<<stop_no;
        }
        for(int j=stop_no+1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;

    }
    for(int i=((number_of_spaces+1)/2)-2;i>=0;i--){
        stop_no = n - i;
        for(int j=n;j!=stop_no;j--)
        {
            cout<<j;
        }
        for(int j=1;j<=(2*stop_no)-1;j++)
        {
            cout<<stop_no;
        }
        for(int j=stop_no+1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}
int main(int argc, char *argv[]){
    int n;
    if (argc < 2) {
        cerr << "Error: No function name provided.\nUsage: ./pattern <function_name>\n";
        return 1;
    }
    // Get the function name from the command-line argument
    string functionName = argv[1];

    // Create a map of function names to their corresponding functions
    unordered_map<string, function<void(int)>> functionMap = {
        {"p1", pattern1},
        {"p2", pattern2},
        {"p3", pattern3},
        {"p4", pattern4},
        {"p5", pattern5},
        {"p6", pattern6},
        {"p7", pattern7},
        {"p8", pattern8},
        {"p9", pattern9},
        {"p10", pattern10},
        {"p11", pattern11},
        {"p12", pattern12},
        {"p13", pattern13},
        {"p14", pattern14},
        {"p15", pattern15},
        {"p16", pattern16},
        {"p17", pattern17},
        {"p18", pattern18},
        {"p19", pattern19},
        {"p20", pattern20},
        {"p21", pattern21},
        {"p22", pattern22}
    };
    auto it = functionMap.find(functionName);
    if (it != functionMap.end()) {
        cout<<"Enter the number n: ";
        cin>>n;
        it->second(n);  // Call the function
    } else {
        cout << "Error: Function '" << functionName << "' not found.\n";
    }
    
    
    return 0;
}