/*
 * XREFs of sub_1800F81AC @ 0x1800F81AC
 * Callers:
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 * Callees:
 *     sub_1800F76B4 @ 0x1800F76B4 (sub_1800F76B4.c)
 */

__m128 __fastcall sub_1800F81AC(__int64 a1)
{
  __m128 result; // xmm0
  __m128 v3; // xmm1

  if ( *(_DWORD *)(a1 + 1816) )
  {
    v3 = sub_1800F76B4(a1, *(float *)(a1 + 1812));
    result = (__m128)*(unsigned int *)(a1 + 1828);
    if ( result.m128_f32[0] <= v3.m128_f32[0] )
      return v3;
  }
  else
  {
    return (__m128)*(unsigned int *)(a1 + 1828);
  }
  return result;
}
