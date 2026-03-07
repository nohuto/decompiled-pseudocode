char __fastcall ndotprod(int a1, int a2, int a3, int a4, double *a5)
{
  double v9; // xmm6_8
  double v10; // xmm0_8

  v9 = sqrt_0((double)(a2 * a2 + a1 * a1));
  v10 = sqrt_0((double)(a4 * a4 + a3 * a3));
  *a5 = (double)a1 / v9 * ((double)a3 / v10) + (double)a2 / v9 * ((double)a4 / v10);
  return 1;
}
