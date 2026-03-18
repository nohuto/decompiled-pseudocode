/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C00F8CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C00F8DE8 (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C00F8E74 (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __int64 v2; // rdx
  __m128i *v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __m128i v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]

  v7 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  v3 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (__m128i *)MmUserProbeAddress;
  v7 = *v3;
  v8 = v3[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v7) == 24 )
  {
    if ( (v7.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL, v2);
      v5 = 0;
    }
    else if ( (v7.m128i_i32[1] & 0x40000000) != 0 )
    {
      v5 = QueryTrackMouseEvent(&v7);
      *a1 = v7;
      a1[1].m128i_i64[0] = v8;
    }
    else
    {
      v5 = TrackMouseEvent(&v7);
    }
  }
  else
  {
    UserSetLastError(87LL, v2);
    v5 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
