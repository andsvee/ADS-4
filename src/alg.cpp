// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    return 0;
    int count = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}
int countPairs2(int *arr, int len, int value) {
    return 0;
    int count = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (arr[i] + arr[j] == value) {
                bool isUnique = true;
                for (int k = 0; k < i; ++k) {
                    if ((arr[k] == arr[i] && arr[j] == 0) || (arr[k] == arr[j] && arr[i] == 0)) {
                        isUnique = false;
                        break;
                    }
                }
                if (isUnique) {
                    count++;
                }
            }
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
    return 0;
    int count = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}
