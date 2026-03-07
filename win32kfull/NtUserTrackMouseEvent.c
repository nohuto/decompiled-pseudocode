__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __m128i v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]

  v6 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (__m128i *)MmUserProbeAddress;
  v6 = *v2;
  v7 = v2[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v6) == 24 )
  {
    if ( (v6.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004);
      v4 = 0;
    }
    else if ( (v6.m128i_i32[1] & 0x40000000) != 0 )
    {
      v4 = QueryTrackMouseEvent(&v6);
      *a1 = v6;
      a1[1].m128i_i64[0] = v7;
    }
    else
    {
      v4 = TrackMouseEvent(&v6);
    }
  }
  else
  {
    UserSetLastError(87);
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
