

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int strcmp_case_insensitive(string str1, string str2)
{
    size_t i = 0;

    while (i < str1.length() && i < str2.length())
    {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if (c1 < c2)
            return -1;
        if (c1 > c2)
            return 1;

        i++;
    }

    if (str1.length() < str2.length())
        return -1;
    if (str1.length() > str2.length())
        return 1;

    return 0;
}

int main()
{
    cout << "Test 1: "
         << strcmp_case_insensitive("String one", "string two")
         << endl;

    cout << "Test 2: "
         << strcmp_case_insensitive("String one", "string one")
         << endl;

    cout << "Test 3: "
         << strcmp_case_insensitive("String two", "string one")
         << endl;

    cout << "Test 4: "
         << strcmp_case_insensitive("HELLO", "hello")
         << endl;

    cout << "Test 5: "
         << strcmp_case_insensitive("Apple", "Banana")
         << endl;

    cout << "Test 6: "
         << strcmp_case_insensitive("Banana", "Apple")
         << endl;

    return 0;
}














































