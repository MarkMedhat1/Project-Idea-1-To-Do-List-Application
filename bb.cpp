#include <iostream>
#include <vector>

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
    }

    void displayTasks() const {
        std::cout << "Tasks:\n";
        for (const auto& task : tasks) {
            std::cout << "- " << task << "\n";
        }
    }
};

int main() {
    ToDoList toDoList;

    // Example Usage
    toDoList.addTask("Complete Project A");
    toDoList.addTask("Study for Exam");

    toDoList.displayTasks();

    return 0;
}
