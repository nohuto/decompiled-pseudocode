__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>(__int64 a1, __m128i *a2)
{
  char v2; // al
  __m128i v4; // [rsp+20h] [rbp-18h]

  v4 = *a2;
  v2 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  *(_BYTE *)(a1 + 8) = v2;
  if ( v2 )
  {
    *(_QWORD *)a1 = v4.m128i_i64[0];
    _InterlockedIncrement((volatile signed __int32 *)v4.m128i_i64[0]);
  }
  else
  {
    *(_QWORD *)a1 = v4.m128i_i64[0];
    if ( v4.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4.m128i_i64[0] + 8LL))(v4.m128i_i64[0]);
  }
  return 0LL;
}
