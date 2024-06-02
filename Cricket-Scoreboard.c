#include <stdio.h>

#define BALLS_PER_OVER 6

int main() {
    int totalOvers;
    int totalRuns = 0;
    int totalWickets = 0;

    printf("Enter number of overs: ");
    scanf("%d", &totalOvers);

    for (int over = 1; over <= totalOvers; over++) {
        printf("Over %d:\n", over);
        for (int ball = 1; ball <= BALLS_PER_OVER; ball++) {
            int runs;
            int isOut;

            printf("Enter runs scored on ball %d: ", ball);
            scanf("%d", &runs);
            printf("Was there a wicket on this ball? (1 for yes, 0 for no): ");
            scanf("%d", &isOut);

            totalRuns += runs;
            if (isOut) {
                totalWickets++;
            }

            // If 10 wickets fall, the game ends
            if (totalWickets == 10) {
                printf("All out!\n");
                break;
            }
        }

        // If 10 wickets fall, the game ends
        if (totalWickets == 10) {
            break;
        }
    }

    printf("\nEnd of the innings!\n");
    printf("Total Runs: %d\n", totalRuns);
    printf("Total Wickets: %d\n", totalWickets);

    return 0;
}
