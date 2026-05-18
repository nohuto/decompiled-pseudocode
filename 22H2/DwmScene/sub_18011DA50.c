/*
 * XREFs of sub_18011DA50 @ 0x18011DA50
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x18011E070 (_o_pow.c)
 *     _o_sin @ 0x18011E07C (_o_sin.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18011DA50(__int64 a1, double a2)
{
  __m128 result; // xmm0
  double v3; // xmm0_8
  __m128 v4; // xmm6

  result = (__m128)0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
    {
      v3 = o_sin();
      v4.m128_u64[1] = *(unsigned __int64 *)(&a2 + 1);
      *(double *)v4.m128_u64 = v3 * o_pow();
      return _mm_xor_ps(v4, (__m128)xmmword_1801D7C90);
    }
  }
  return result;
}
