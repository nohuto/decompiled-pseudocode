/*
 * XREFs of sub_18005444C @ 0x18005444C
 * Callers:
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18005D2D8 @ 0x18005D2D8 (sub_18005D2D8.c)
 *     sub_18005D45C @ 0x18005D45C (sub_18005D45C.c)
 * Callees:
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18005444C(_DWORD *a1, double a2)
{
  __int128 v2; // xmm3
  __int128 v3; // xmm0

  v2 = *(_OWORD *)&a2;
  if ( *a1 == 1 )
  {
    *((double *)&v3 + 1) = *(&a2 + 1);
    if ( a2 > 1.0 )
    {
      v2 = 0x4000000000000000uLL;
      *(double *)&v2 = 2.0 - o_pow();
      return (__m128)v2;
    }
  }
  else
  {
    if ( *a1 != 2 )
      return (__m128)v2;
    *((double *)&v3 + 1) = *(&a2 + 1);
  }
  *(double *)&v3 = o_pow();
  return (__m128)v3;
}
