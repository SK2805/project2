#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> books = {"Book1", "C++ Primer", "Data Structures"};

void searchBooks(const std::string& query) {
    for (const auto& book : books) {
        if (book.find(query) != std::string::npos) {
            std::cout << "<p>" << book << "</p>";
        }
    }
}

int main() {
    std::string query;
    std::cin >> query;
    std::cout << "Content-Type: text/html\n\n";
    std::cout << "<html><body>";
    searchBooks(query);
    std::cout << "</body></html>";
    return 0;
}
