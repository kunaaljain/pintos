#define F (1 << 14)

int fixed_point_create (int num, int denom);
int fixed_point_multiply (int x, int y);
int fixed_point_divide (int x, int y);
int fixed_point_round_down (int x);
int fixed_point_round_nearest (int x);
int fixed_point_add(int x, int y);
int fixed_point_sub(int x, int y);

int
fixed_point_create (int num, int denom)
{
  return (num * F) / denom;
}

int
fixed_point_multiply (int x, int y)
{
  return ((int64_t)x) * y / F;
}

int
fixed_point_divide (int x, int y)
{
  return ((int64_t)x) * F / y;
}

int
fixed_point_round_down (int x)
{
  return x / F;
}


int
fixed_point_round_nearest (int x)
{
  return (x >= 0) ? (x + F/2) / F : (x - F/2) / F;
}

int
fixed_point_add(int x, int y)
{
	return x+y;
}

int
fixed_point_sub(int x, int y)
{
	return x-y;
}