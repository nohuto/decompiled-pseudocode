/*
 * XREFs of sub_180100190 @ 0x180100190
 * Callers:
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180100190(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, 0.0);
  *(float *)(a1 + 160) = fminf(v3, 1.0);
}
