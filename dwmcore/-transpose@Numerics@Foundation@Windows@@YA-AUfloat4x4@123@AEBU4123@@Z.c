__m128 *__fastcall Windows::Foundation::Numerics::transpose(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 *result; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm4
  __m128 v6; // xmm3
  __m128 v7; // xmm0
  __m128 v8; // xmm2

  v2 = a2[1];
  result = a1;
  v4 = a2[3];
  v5 = _mm_shuffle_ps(*a2, v2, 238);
  v6 = _mm_shuffle_ps(*a2, v2, 68);
  v7 = _mm_shuffle_ps(a2[2], v4, 68);
  v8 = _mm_shuffle_ps(a2[2], v4, 238);
  *a1 = _mm_shuffle_ps(v6, v7, 136);
  a1[1] = _mm_shuffle_ps(v6, v7, 221);
  a1[2] = _mm_shuffle_ps(v5, v8, 136);
  a1[3] = _mm_shuffle_ps(v5, v8, 221);
  return result;
}
