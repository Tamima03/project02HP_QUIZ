#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("Welcome to the Harry Potter Quiz by Tamima!\n\n");

    // Question 1
    printf("1. What house at Hogwarts does Harry sorted into ?\n");
    printf("a) Ravenclaw\nb) Slytherin\nc) Gryffindor\nd) Hufflepuff\n");
    printf("Your answer here : ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') {
        printf("Wrong. The correct answer is c.\n\n");
    } else {
        if (answer == 'b' || answer == 'B') {
            printf("Wrong. The correct answer is c.\n\n");
        } else {
            if (answer == 'c' || answer == 'C') {
                printf("Correct! Congratulations!!!\n\n");
                score++;
            } else {
                if (answer == 'd' || answer == 'D') {
                    printf("Wrong. The correct answer is c.\n\n");
                } else {
                    printf("Invalid input.\n\n");
                }
            }
        }
    }

    // Question 2
    printf("2. What position does Harry play on his Quidditch team?\n");
    printf("a) Beater\nb) Chaser\nc) Keeper\nd) Seeker\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') {
        printf("Wrong. The correct answer is d.\n\n");
    } else {
        if (answer == 'b' || answer == 'B') {
            printf("Wrong. The correct answer is d.\n\n");
        } else {
            if (answer == 'c' || answer == 'C') {
                printf("Wrong. The correct answer is d.\n\n");
            } else {
                if (answer == 'd' || answer == 'D') {
                    printf("Correct!\n\n");
                    score++;
                } else {
                    printf("Invalid input.\n\n");
                }
            }
        }
    }

    // Question 3
    printf("3. What is the number of total horcrux ?\n");
    printf("a) one\nb) eight \nc) ten \nd) three\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') {
        printf("Wrong. The correct answer is b.\n\n");
    } else {
        if (answer == 'b' || answer == 'B') {
            printf("Correct!\n\n");
            score++;
        } else {
            if (answer == 'c' || answer == 'C') {
                printf("Wrong. The correct answer is b.\n\n");
            } else {
                if (answer == 'd' || answer == 'D') {
                    printf("Wrong. The correct answer is b.\n\n");
                } else {
                    printf("Invalid input.\n\n");
                }
            }
        }
    }

    // Question 4
    printf("4. Who is the DADA professor of Hogwarts during first year of Harry?\n");
    printf("a) Snape\nb) Quirell\nc) McGonagall\nd) Voldemort\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') {
        printf("Wrong. The correct answer is b.\n\n");
    } else {
        if (answer == 'b' || answer == 'B') {
            printf("Correct!\n\n");
            score++;
        } else {
            if (answer == 'c' || answer == 'C') {
                printf("Wrong. The correct answer is b.\n\n");
            } else {
                if (answer == 'd' || answer == 'D') {
                    printf("Wrong. The correct answer is b.\n\n");
                } else {
                    printf("Invalid input.\n\n");
                }
            }
        }
    }

    // Question 5
    printf("5. What platform at King's Cross does the Hogwarts Express leave from?\n");
    printf("a) 9\nb) 9 and 3 quarters\nc) 10\nd) 8 and 1/2\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') {
        printf("Wrong. The correct answer is b.\n\n");
    } else {
        if (answer == 'b' || answer == 'B') {
            printf("Correct!\n\n");
            score++;
        } else {
            if (answer == 'c' || answer == 'C') {
                printf("Wrong. The correct answer is b.\n\n");
            } else {
                if (answer == 'd' || answer == 'D') {
                    printf("Wrong. The correct answer is b.\n\n");
                } else {
                    printf("Invalid input.\n\n");
                }
            }
        }
    }

    // Final Result
    printf("Quiz Over! You scored %d out of 5.\n", score);
    if (score == 5) {
        printf(" You're a true Potterhead!\n");
    } else {
        printf("Better read the books to be the perfect potterhead !\n");
    }

    return 0;
}
