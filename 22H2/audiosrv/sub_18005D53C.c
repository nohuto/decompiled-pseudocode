/*
 * XREFs of sub_18005D53C @ 0x18005D53C
 * Callers:
 *     sub_180036B70 @ 0x180036B70 (sub_180036B70.c)
 *     sub_18005D3C0 @ 0x18005D3C0 (sub_18005D3C0.c)
 *     sub_1800C1C58 @ 0x1800C1C58 (sub_1800C1C58.c)
 * Callees:
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18005D53C(__int64 a1, double a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm0

  v2 = *(_OWORD *)&a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( a2 > 1.0 )
      *((_QWORD *)&v2 + 1) = 0LL;
    *((_QWORD *)&v3 + 1) = *((_QWORD *)&v2 + 1);
    *(double *)&v3 = o_pow();
    return (__m128)v3;
  }
  else if ( *(_DWORD *)a1 == 2 )
  {
    *(double *)&v2 = o_pow() * *(double *)(a1 + 40);
  }
  return (__m128)v2;
}
