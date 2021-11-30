int b(int x) {
	if (x == 0)
		return 1;
	else
		return b(x - 1) * a(x);
}
