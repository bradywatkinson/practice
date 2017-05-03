class Solution {
public:
    string NumberToString(int pNumber)
    {
     ostringstream oOStrStream;
     oOStrStream << pNumber;
     return oOStrStream.str();
    }

    vector<string> fizzBuzz(int n) {
        vector<string> vec;
        if (n==0) return vec;
        for (int i = 1; i < n+1; ++i) {
            if (i%3 == 0 && i%5 == 0) {
                vec.push_back("FizzBuzz");
            } else if (i%3 == 0) {
                vec.push_back("Fizz");
            } else if (i%5 == 0) {
                vec.push_back("Buzz");
            } else {
                vec.push_back(NumberToString(i));   
            }
        }
        return vec;
    }
};