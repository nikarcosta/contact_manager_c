#include <stdio.h>

int main(void) {

    printf("\n      * ***                                                                              *****   **    **                                                                           ");
    printf("\n    *  ****  *                             *                               *          ******  ***** *****                                                                           ");
    printf("\n   *  *  ****                             **                              **         **   *  *  ***** *****                                                                         ");
    printf("\n  *  **   **                              **                              **        *    *  *   * **  * **                                                                          ");
    printf("\n *  ***           ****                  ********                        ********        *  *    *     *                                                                ***  ****    ");
    printf("\n**   **          * ***  * ***  ****    ********     ****       ****    ********        ** **    *     *        ****    ***  ****       ****        ****         ***     **** **** * ");
    printf("\n**   **         *   ****   **** **** *    **       * ***  *   * ***  *    **           ** **    *     *       * ***  *  **** **** *   * ***  *    *  ***  *    * ***     **   ****  ");
    printf("\n**   **        **    **     **   ****     **      *   ****   *   ****     **           ** **    *     *      *   ****    **   ****   *   ****    *    ****    *   ***    **         ");
    printf("\n**   **        **    **     **    **      **     **    **   **            **           ** **    *     *     **    **     **    **   **    **    **     **    **    ***   **         ");
    printf("\n**   **        **    **     **    **      **     **    **   **            **           ** **    *     **    **    **     **    **   **    **    **     **    ********    **         ");
    printf("\n**  **        **    **     **    **      **     **    **   **            **           *  **    *     **    **    **     **    **   **    **    **     **    *******     **         ");
    printf("\n  ** *      *  **    **     **    **      **     **    **   **            **              *     *      **   **    **     **    **   **    **    **     **    **          **         ");
    printf("\n   ***     *    ******      **    **      **     **    **   ***     *     **          ****      *      **   **    **     **    **   **    **    **     **    ****    *   ***        ");
    printf("\n    *******      ****       ***   ***      **     ***** **   *******       **        *  *****           **   ***** **    ***   ***   ***** **    ********     *******     ***       ");
    printf("\n      ***                    ***   ***             ***   **   *****                 *     **                  ***   **    ***   ***   ***   **     *** ***     *****");
    printf("\n                                                                                    *                                                                   ***");
    printf("\n                                                                                     **                                                           ****   ***");
    printf("\n                                                                                                                                                *******  **");
    printf("\n                                                                                                                                               *     ****");
    printf("\n                                                                                                                                                                                                                                                                                                                                   *******  **");

    int option = 0;

    while (option != 7) {
        printf("\n1. Add Contact");
        printf("\n2. List Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Edit Contact");
        printf("\n5. Delete Contact");
        printf("\n6. Save Contacts");
        printf("\n7. Exit");

        printf("\nChoose an option:\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("#########Add Contact##########\nComing Soon!\n");
                break;
            case 2:
                printf("#########List Contacts#########\nComing Soon!\n");
                break;
            case 3:
                printf("########Search Contact##########\nComing Soon!\n");
                break;
            case 4:
                printf("#########Edit Contact############\nComing Soon!\n");
                break;
            case 5:
                printf("##########Delete Contact#########\nComing Soon!\n");
                break;
            case 6:
                printf("##########Save Contact###########\nComing Soon!\n");
                break;
            case 7:
                printf("###########Bye!##############\n");
                break;
            default:
                printf("Invalid Option!");
        }
    }

    return 0;
}