__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __m128i v7; // xmm0
  int v8; // ebp
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  __m128i *MonitorRectForDpi; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rax
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF
  char v18[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)gpDispInfo;
  if ( a2 )
  {
    if ( *(_DWORD *)v4 == 1 )
    {
      *a1 = *(__m128i *)GetMonitorRectForDpi(&v17, *((_QWORD *)gpDispInfo + 12), a2);
    }
    else
    {
      v6 = *((_QWORD *)gpDispInfo + 13);
      v7 = 0LL;
      v17 = 0LL;
      if ( v6 )
      {
        v8 = v17.m128i_i32[3];
        v9 = v17.m128i_i32[2];
        v10 = v17.m128i_i32[1];
        v11 = v17.m128i_i32[0];
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v18, v6, a2);
            v13 = *MonitorRectForDpi;
            v14 = MonitorRectForDpi->m128i_i64[0];
            v15 = _mm_srli_si128(v13, 8).m128i_u64[0];
            if ( v11 >= (int)v14 )
              v11 = v14;
            v16 = HIDWORD(v14);
            v17.m128i_i32[0] = v11;
            if ( v10 >= (int)v16 )
              v10 = v16;
            v17.m128i_i32[1] = v10;
            if ( v9 <= (int)v15 )
              v9 = v15;
            v17.m128i_i32[2] = v9;
            if ( v8 <= SHIDWORD(v15) )
              v8 = HIDWORD(v15);
            v17.m128i_i32[3] = v8;
            v7 = _mm_loadu_si128(&v17);
          }
          v6 = *(_QWORD *)(v6 + 56);
        }
        while ( v6 );
      }
      *a1 = v7;
    }
  }
  else
  {
    *a1 = *(__m128i *)(v4 + 24);
  }
  return a1;
}
