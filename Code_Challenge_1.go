package main

import (
	"fmt"
)

func grayCode(n int) []int {
	arr := []int{}
	for i := 0; i < 1<<n; i++ {
		arr = append(arr, i^(i>>1))
	}

	return arr
}

func main() {
	res := grayCode(4)
	for _, code := range res {
		fmt.Println(code)
	}
}
