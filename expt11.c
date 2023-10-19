#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to perform an in-order traversal of the BST
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int numValues;

    printf("Enter the number of values to insert: ");
    scanf("%d", &numValues);

    printf("Enter the values to insert:\n");
    for (int i = 0; i < numValues; i++) {
        int value;
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("In-order traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    // Wait for user input to see the output
    getchar();

    return 0;
}
