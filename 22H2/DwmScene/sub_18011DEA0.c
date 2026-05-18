/*
 * XREFs of sub_18011DEA0 @ 0x18011DEA0
 * Callers:
 *     <none>
 * Callees:
 *     _o_cos @ 0x18011E052 (_o_cos.c)
 */

__m128 __fastcall sub_18011DEA0(__int64 a1, double a2)
{
  __int128 v2; // xmm6
  __m128 result; // xmm0

  v2 = 0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 <= 0.0 )
      return result;
    *(double *)&v2 = 1.0 - o_cos();
  }
  return (__m128)v2;
}
