#include <iostream>
#include <vector>
#include <string>
#include <random>

class Table {
private:
    std::vector<std::string> headers;
    std::vector<std::vector<int>> rows;
public:
    Table(std::vector<std::string> h, std::vector<std::vector<int>> r) : headers(h), rows(r) {}

    void justify(std::string alignment) {
        // Implement justification logic here
    }

    void print() {
        for (const auto& header : headers) {
            std::cout << header << "\t";
        }
        std::cout << std::endl;

        for (const auto& row : rows) {
            for (const auto& item : row) {
                std::cout << item << "\t\t";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<std::string> headers = { "Позиция/год", "2020", "2021", "2022", "2023", "2024" };
    std::vector<std::string> fruits = { "ЯБЛОКИ", "ГРУШИ" };

    std::vector<std::vector<int>> data;
    for (size_t i = 0; i < fruits.size(); i++) {
        std::vector<int> row;
        for (size_t j = 0; j < headers.size() - 1; j++) {
            row.push_back(rand() % 100 + 1);
        }
        data.push_back(row);
    }

    Table table(headers, data);
    table.justify("center");

    table.print();

    return 0;
}