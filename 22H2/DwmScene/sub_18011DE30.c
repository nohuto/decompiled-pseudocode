/*
 * XREFs of sub_18011DE30 @ 0x18011DE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall sub_18011DE30(__int64 a1, double a2)
{
  double v2; // xmm2_8
  double v3; // xmm0_8

  v2 = 0.0;
  if ( a2 < 0.0 || (v3 = 1.0, v2 = a2, a2 <= 1.0) )
    v3 = v2;
  return v3 * v3;
}
