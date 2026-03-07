unsigned __int64 __fastcall NSInstrumentation::CBackTrace::ComputeHash(const __m128i *this)
{
  __int64 v1; // rax
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  unsigned __int64 result; // rax

  v1 = 10LL;
  v2 = 0LL;
  do
  {
    v3 = _mm_loadu_si128(this++);
    v4 = _mm_add_epi64(v3, v2);
    v2 = v4;
    --v1;
  }
  while ( v1 );
  result = _mm_add_epi64(v4, _mm_srli_si128(v4, 8)).m128i_u64[0];
  if ( !result )
    return 1LL;
  return result;
}
