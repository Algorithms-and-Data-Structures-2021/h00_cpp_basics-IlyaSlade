#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs && rhs) {
        int temp = *lhs;
        *lhs = *rhs;
        *rhs = temp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows > 0 && num_cols > 0) {
        int **array_2d = new int *[num_rows];
        for (int row_index = 0; row_index < num_rows; row_index++) {
            array_2d[row_index] = new int [num_cols];
        }

        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                array_2d[i][j] = init_value;
            }
        }
        return array_2d;
    }
    return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (num_rows > 0 && num_cols > 0 && arr_2d_source && arr_2d_target) {
        for (int i = 0; i < num_rows; i++) {
            copy(arr_2d_source[i], arr_2d_source[i] + num_rows, arr_2d_target[i]);
        }
    }
    return false;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int temp;
    for (int i = 0; i < arr.size() / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i -1] = temp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin && arr_end) {
        while (arr_begin < arr_end){
            swap_args(arr_begin++, arr_end--);
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr && size > 0) {
        int *pointer_to_max = arr;
        for (int i = 0; i < size; i++) {
            if (arr[i] > *pointer_to_max) {
                pointer_to_max = &arr[i];
            }
        }
        return pointer_to_max;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_arr;
    for (auto elem : arr) {
        if (elem % 2 != 0) {
            odd_arr.push_back(elem);
        }
    }
    return odd_arr;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> arr_c;
    for (auto a_element : arr_a){
        for (auto b_element : arr_b){
            if (a_element == b_element){
                arr_c.push_back(a_element);
            }
        }
    }
    return arr_c;
}
