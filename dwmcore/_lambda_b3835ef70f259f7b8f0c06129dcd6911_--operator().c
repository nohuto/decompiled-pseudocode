unsigned __int64 *__fastcall lambda_b3835ef70f259f7b8f0c06129dcd6911_::operator()(
        _BYTE *a1,
        unsigned __int64 *a2,
        unsigned int *a3)
{
  unsigned __int64 v3; // xmm0_8
  unsigned __int64 *result; // rax
  __m128 v5; // xmm0
  __m128 v6; // xmm1

  if ( a1[8] )
  {
    v5 = (__m128)*a3;
    v6 = (__m128)a3[1];
    v5.m128_f32[0] = v5.m128_f32[0] / **(float **)a1;
    v6.m128_f32[0] = v6.m128_f32[0] / *(float *)(*(_QWORD *)a1 + 4LL);
    v3 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  }
  else
  {
    v3 = *(_QWORD *)a3;
  }
  result = a2;
  *a2 = v3;
  return result;
}
