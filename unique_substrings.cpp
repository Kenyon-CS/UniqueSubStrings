#include <iostream>
#include <set>
#include <string>

// Function to find unique substrings of a given length
std::set<std::string> findUniqueSubstrings(const std::string& str, size_t length) {
    std::set<std::string> uniqueSubstrings;

    if (length > str.length()) {
        return uniqueSubstrings; // Return empty set if length is greater than the string length
    }

    for (size_t i = 0; i <= str.length() - length; ++i) {
        std::string substring = str.substr(i, length);
        uniqueSubstrings.insert(substring);
    }

    return uniqueSubstrings;
}

int main() {
    std::string inputString = "abcabc";
    size_t substringLength = 3;

    std::set<std::string> result = findUniqueSubstrings(inputString, substringLength);

    std::cout << "Unique substrings of length " << substringLength << " are:" << std::endl;
    for (const auto& substr : result) {
        std::cout << substr << std::endl;
    }

    return 0;
}
