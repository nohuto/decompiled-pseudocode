/*
 * XREFs of ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C023B168
 * Callers:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1C0235178 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 *     ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1C0235248 (-AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 * Callees:
 *     sqrt_0 @ 0x1C00E189D (sqrt_0.c)
 */

char __fastcall ndotprod(int a1, int a2, int a3, int a4, double *a5)
{
  double v9; // xmm6_8
  double v10; // xmm0_8

  v9 = sqrt_0((double)(a2 * a2 + a1 * a1));
  v10 = sqrt_0((double)(a4 * a4 + a3 * a3));
  *a5 = (double)a1 / v9 * ((double)a3 / v10) + (double)a2 / v9 * ((double)a4 / v10);
  return 1;
}
