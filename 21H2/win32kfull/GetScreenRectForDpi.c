/*
 * XREFs of GetScreenRectForDpi @ 0x1C0042630
 * Callers:
 *     GetScreenRectForDpiContext @ 0x1C00425B4 (GetScreenRectForDpiContext.c)
 *     GetScreenRect @ 0x1C0122CA4 (GetScreenRect.c)
 *     xxxSoundSentry @ 0x1C015DA30 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0041FE8 (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, unsigned __int16 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __int64 DispInfo; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm0
  int v11; // r14d
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 *MonitorRectForDpi; // rax
  __m128i v16; // xmm0
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // xmm0_8
  unsigned __int64 v19; // rax
  __m128i v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF

  v4 = (__int64 *)((__int64 (*)(void))GetDispInfo)();
  v5 = *v4;
  if ( !a2 )
  {
    v6 = *(__m128i *)(v5 + 24);
LABEL_3:
    *a1 = v6;
    return a1;
  }
  if ( *(_DWORD *)v5 == 1 )
  {
    DispInfo = GetDispInfo(v5, 0LL);
    v6 = *(__m128i *)GetMonitorRectForDpi(v20.m128i_i64, *(_QWORD *)(DispInfo + 96), a2);
    goto LABEL_3;
  }
  v9 = v4[13];
  v10 = 0LL;
  v20 = 0LL;
  if ( v9 )
  {
    v11 = v20.m128i_i32[3];
    v12 = v20.m128i_i32[2];
    v13 = v20.m128i_i32[1];
    v14 = v20.m128i_i32[0];
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = GetMonitorRectForDpi(&v21, v9, a2);
        v16 = *(__m128i *)MonitorRectForDpi;
        v17 = *MonitorRectForDpi;
        v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
        if ( v14 >= (int)v17 )
          v14 = v17;
        v19 = HIDWORD(v17);
        v20.m128i_i32[0] = v14;
        if ( v13 >= (int)v19 )
          v13 = v19;
        v20.m128i_i32[1] = v13;
        if ( v12 <= (int)v18 )
          v12 = v18;
        v20.m128i_i32[2] = v12;
        if ( v11 <= SHIDWORD(v18) )
          v11 = HIDWORD(v18);
        v20.m128i_i32[3] = v11;
      }
      v9 = *(_QWORD *)(v9 + 56);
    }
    while ( v9 );
    v10 = _mm_loadu_si128(&v20);
  }
  *a1 = v10;
  return a1;
}
