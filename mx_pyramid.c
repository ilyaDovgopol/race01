void mx_printchar(char c);

static void print_row(int size, int *times_arr, char *char_arr) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < times_arr[i]; j++) {
            mx_printchar(char_arr[i]);
        }
    }
    mx_printchar('\n');
}

void mx_pyramid(int n) {
    if (n < 2 || n % 2) {
        return;
    }
    print_row(3, (int[]){n - 1, 1, 1}, " /\\");
    for (int i = 0; i < n - n / 2 - 1; i++) {
        int t[6] = {n - 2 - i, 1, 2 * (i + 1) - 1, 1, i + 1, 1};

        print_row(6, t, " / \\ \\");
    }
    for (int j = 0; j < n / 2 - 1; j++) {
        int t[6] = {n / 2 - j - 1, 1, 2 * (j + 1 - 1 + n - n / 2 - 1) + 1,
                    1, n - n / 2 - 1 - j, 1};

        print_row(6, t, " / \\ |");
    }
    print_row(4, (int[]){1, 2 * n - 3, 1, 1}, "/_\\|");
}
