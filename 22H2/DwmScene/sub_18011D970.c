/*
 * XREFs of sub_18011D970 @ 0x18011D970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011D7A8 @ 0x18011D7A8 (sub_18011D7A8.c)
 */

__m128 __fastcall sub_18011D970(__int64 a1, double a2)
{
  __int128 v2; // xmm3
  __m128 result; // xmm0

  v2 = 0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 <= 0.0 )
      return result;
    *(double *)&v2 = 1.0 - sub_18011D7A8(1.0 - a2);
  }
  return (__m128)v2;
}
