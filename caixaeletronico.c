#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000.00;
    float valor;

    printf("=====================================\n");
    printf("   SISTEMA BANCARIO - CAIXA DIGITAL\n");
    printf("=====================================\n");
    printf("Este sistema permite consultar saldo,\n");
    printf("realizar depositos e efetuar saques.\n");
    printf("Bem-vindo! Escolha uma opcao no menu\n");
    printf("para iniciar suas operacoes bancarias.\n");

    do {

        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar saque\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\nSaldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("\nDigite o valor do deposito: R$ ");
                scanf("%f", &valor);

                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido! O deposito deve ser maior que zero.\n");
                }
                break;

            case 3:
                printf("\nDigite o valor do saque: R$ ");
                scanf("%f", &valor);

                if (valor <= 0) {
                    printf("Valor invalido! O saque deve ser maior que zero.\n");
                }
                else if (valor > saldo) {
                    printf("Saldo insuficiente! Saque nao permitido.\n");
                }
                else {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                }
                break;

            case 0:
                printf("\n=====================================\n");
                printf("   ENCERRAMENTO DO SISTEMA\n");
                printf("=====================================\n");
                printf("Saldo final da conta: R$ %.2f\n", saldo);
                printf("Obrigado por utilizar o Caixa Digital!\n");
                printf("Volte sempre.\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                printf("Por favor, escolha uma opcao entre 0 e 3.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}