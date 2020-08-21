void mx_printchar(char c);

static void print_row(int size, int *times_arr, char *char_arr) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < times_arr[i]; j++) {
            mx_printchar(char_arr[i]);
        }
    }
    mx_printchar('\n');
}

void mx_cube(int n) {
    if (n < 2) {
        return;
    }
    print_row(4, (int[]){n / 2 + 1, 1, 2 * n, 1}, " +-+");
    for (int i = 0; i < n / 2; i++) {
        print_row(6, (int[]){n / 2 - i, 1, 2 * n, 1, i, 1}, " / / |");
    }
    print_row(5, (int[]){1, 2 * n, 1, n / 2, 1}, "+-+ |");
    for (int j = 0; j < n - n / 2 - 1; j++) {
        print_row(5, (int[]){1, 2 * n, 1, n / 2, 1}, "| | |");
    }
    print_row(5, (int[]){1, 2 * n, 1, n / 2, 1}, "| | +");
    for (int k = 0; k < n / 2; k++) {
        print_row(5, (int[]){1, 2 * n, 1, n / 2 - k - 1, 1}, "| | /");
    }
    print_row(3, (int[]){1, 2 * n, 1}, "+-+");
}
