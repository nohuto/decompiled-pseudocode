/*
 * XREFs of sub_1800B23F0 @ 0x1800B23F0
 * Callers:
 *     sub_1800C19D0 @ 0x1800C19D0 (sub_1800C19D0.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_1800B23F0(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_sub_ps(*a2, *a3);
  return result;
}
