/**
 * Author: Simon Lindholm
 * Date: 2018-07-06
 * License: CC0
 * Description: Permutação -> Inteiro (não preserva ordem)
 * Uso para hashing.
 * Time: O(n)
 */
#pragma once

int permHash(vi& v) {
	int use = 0, i = 0, r = 0;
	for(int x:v) r = r * ++i + __builtin_popcount(use & -(1<<x)),
		use |= 1 << x;                     // (note: minus, not ~!)
	return r;
}
