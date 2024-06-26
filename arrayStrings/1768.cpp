#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=0;
        int m = 0;

        string result;
        result[0]=word1[0];
        int pos=0;
        while( n<word1.length() and m<word2.length() ){
            if(pos%2==0){
                result=result+word1[n];
                // cout<<"n:"<<n<<" ";
                n++;
            }else{
                result=result+word2[m];
                // cout<<"m:"<<m<<" ";
                m++;
            }
            pos++;
        }
        cout<<n<<" "<<m<<endl;
        while(n<word1.length()){
            result=result+word1[n];
            n++;
        }
        while(m<word2.length()){
            result=result+word2[m];
            m++;
        }

        
        return result;
        
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Define two example strings
    string word1 = "ab";
    string word2 = "pqrs";

    // Call the mergeAlternately method and store the result
    string result = solution.mergeAlternately(word1, word2);

    // Print the result
    cout << "Result: " << result << endl;

    return 0;
}
