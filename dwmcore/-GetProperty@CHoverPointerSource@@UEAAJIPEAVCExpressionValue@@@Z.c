__int64 __fastcall CHoverPointerSource::GetProperty(CHoverPointerSource *this, int a2, struct CExpressionValue *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 || a2 )
    return 2147942487LL;
  *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 18), (__m128)*((unsigned int *)this + 19)).m128_u64[0];
  *((_DWORD *)a3 + 18) = 35;
  *((_BYTE *)a3 + 76) = 1;
  return result;
}
