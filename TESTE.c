#include <stdio.h>
#include <string.h>

// Dados hardcoded para usuário e senha
char username[] = "admin";
char password[] = "password";

// Função para realizar login
int login() {
    char input_username[50];
    char input_password[50];

    printf("Username: ");
    scanf("%s", input_username);
    printf("Password: ");
    scanf("%s", input_password);

    if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
        return 1; // Login bem sucedido
    } else {
        return 0; // Login falhou
    }
}

// Função para alterar a senha
void changePassword() {
    printf("Changing password...\n");
    printf("New password: ");
    scanf("%s", password);
    printf("Password changed successfully!\n");
}

// Função para excluir usuário
void deleteUser() {
    printf("Deleting user...\n");
    strcpy(username, "");
    strcpy(password, "");
    printf("User deleted successfully!\n");
}

int main() {
    int logged_in = 0;
    int choice;

    while (!logged_in) {
        logged_in = login();
        if (logged_in == 0) {
            printf("Login failed. Please try again.\n");
        }
    }

    do {
        printf("\nMenu:\n");
        printf("1. Change Password\n");
        printf("2. Delete User\n");
        printf("3. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                changePassword();
                break;
            case 2:
                deleteUser();
                break;
            case 3:
                printf("Logged out.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 3);

    return 0;
}