#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define the maximum size for the array-based tree
int tree[MAX_SIZE];

// Function to initialize the tree
void initializeTree() {
    for (int i = 0; i < MAX_SIZE; i++) {
        tree[i] = -1; // Initialize all elements to -1 (indicating empty)
    }
}

// Function to insert a value into the tree
void insert(int value, int index) {
    if (tree[index] == -1) {
        tree[index] = value;
    } else {
        // If the current node is not empty, insert into the left child if it's available
        if (value < tree[index]) {
            insert(value, 2 * index + 1);
        } else { // Otherwise, insert into the right child
            insert(value, 2 * index + 2);
        }
    }
}

// Function to perform an in-order traversal of the tree
void inorderTraversal(int index) {
    if (tree[index] == -1) {
        return;
    }
    inorderTraversal(2 * index + 1); // Traverse the left subtree
    printf("%d ", tree[index]); // Visit the current node
    inorderTraversal(2 * index + 2); // Traverse the right subtree
}

int main() {
    initializeTree();

    int numValues;
    printf("Enter the number of values to insert: ");
    scanf("%d", &numValues);

    printf("Enter the values to insert:\n");
    for (int i = 0; i < numValues; i++) {
        int value;
        scanf("%d", &value);
        insert(value, 0); // Start inserting from the root
    }

    printf("In-order traversal of the tree: ");
    inorderTraversal(0); // Start the traversal from the root
    printf("\n");

    return 0;
}
