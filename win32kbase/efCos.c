__int64 __fastcall efCos(unsigned int a1)
{
  __m128i v1; // xmm0

  v1 = _mm_cvtsi32_si128(a1);
  *(float *)v1.m128i_i32 = *(float *)v1.m128i_i32 + *(float *)&FP_90_0;
  return efSin((unsigned int)_mm_cvtsi128_si32(v1));
}
