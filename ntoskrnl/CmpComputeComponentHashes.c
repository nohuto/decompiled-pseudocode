/*
 * XREFs of CmpComputeComponentHashes @ 0x140739D80
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     CmpExpandPathInfo @ 0x14073A0C4 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  char v3; // r13
  __m128i v4; // xmm6
  __int16 v6; // bx
  __int16 v7; // bp
  _WORD *v8; // rdi
  __int16 v9; // si
  __int64 v10; // rdi
  __int16 v11; // bp
  __int64 v12; // rsi
  __int16 v13; // ax
  int v14; // r9d
  unsigned __int16 *v15; // r10
  __int64 v16; // r11
  unsigned __int16 v17; // dx
  __int64 result; // rax
  __int16 v19; // r14
  __int64 v20; // r15
  int v21; // r9d
  unsigned __int16 *v22; // r10
  __int64 v23; // r11
  unsigned __int16 v24; // dx
  struct _LIST_ENTRY *v25; // rax
  unsigned __int16 v26; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v28; // dx
  __m128i v29; // [rsp+20h] [rbp-58h]
  __m128i v30; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v6 = _mm_cvtsi128_si32(*a1);
  v29 = *a1;
  v4 = *a1;
  v30 = *a1;
  v29.m128i_i16[0] = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = (_WORD *)v29.m128i_i64[1];
    v9 = v29.m128i_i16[1];
    do
    {
      if ( v7 >= 32 )
        break;
      if ( *v8 == 92 )
      {
        ++v7;
        v19 = v30.m128i_i16[0] - v6;
        v30.m128i_i16[0] = v19;
        v30.m128i_i16[1] = v19;
        if ( v7 > 8 && !v3 )
        {
          result = CmpExpandPathInfo(a3, 0LL);
          if ( (int)result < 0 )
            return result;
          v3 = 1;
        }
        v20 = (unsigned int)(v7 - 1);
        if ( (unsigned int)v20 >= 8 )
          *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v7 - 9) + 6LL)) = v30;
        else
          *(__m128i *)(a3 + 16 * ((unsigned int)v20 + 2LL)) = v30;
        v21 = 0;
        if ( v19 )
        {
          v22 = (unsigned __int16 *)v30.m128i_i64[1];
          v23 = (unsigned __int16)(((unsigned __int16)(v19 - 1) >> 1) + 1);
          do
          {
            v24 = *v22;
            if ( *v22 >= 0x61u )
            {
              if ( v24 > 0x7Au )
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v24 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v28);
              }
              else
              {
                v24 -= 32;
              }
            }
            ++v22;
            v21 = v24 + 37 * v21;
            --v23;
          }
          while ( v23 );
        }
        if ( (unsigned int)v20 >= 8 )
          *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v7 - 9)) = v21;
        else
          *(_DWORD *)(a3 + 4 * v20) = v21;
        do
        {
          if ( *v8 != 92 )
            break;
          v6 -= 2;
          ++v8;
          v9 -= 2;
          v29.m128i_i16[0] = v6;
        }
        while ( v6 );
        v29.m128i_i64[1] = (__int64)v8;
        v29.m128i_i16[1] = v9;
        v4 = v29;
        v30 = v29;
      }
      else
      {
        ++v8;
        v6 -= 2;
        v9 -= 2;
        v29.m128i_i16[0] = v6;
      }
    }
    while ( v6 );
    v10 = (unsigned int)v7;
    if ( v6 )
    {
      return 3221225485LL;
    }
    else
    {
      v11 = v7 + 1;
      if ( v11 <= 8 || v3 || (result = CmpExpandPathInfo(a3, 0LL), (int)result >= 0) )
      {
        v12 = (unsigned int)(v10 - 8);
        if ( (unsigned int)v10 >= 8 )
          *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)v12 + 6LL)) = v4;
        else
          *(__m128i *)(a3 + 16 * (v10 + 2)) = v4;
        v13 = _mm_cvtsi128_si32(v4);
        v14 = 0;
        if ( v13 )
        {
          v15 = (unsigned __int16 *)v4.m128i_i64[1];
          v16 = (unsigned __int16)(((unsigned __int16)(v13 - 1) >> 1) + 1);
          do
          {
            v17 = *v15;
            if ( *v15 >= 0x61u )
            {
              if ( v17 > 0x7Au )
              {
                v25 = PsGetCurrentServerSiloGlobals();
                v17 = NLS_UPCASE((__int64)v25[77].Flink, v26);
              }
              else
              {
                v17 -= 32;
              }
            }
            ++v15;
            v14 = v17 + 37 * v14;
            --v16;
          }
          while ( v16 );
        }
        if ( (unsigned int)v10 >= 8 )
          *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4 * v12) = v14;
        else
          *(_DWORD *)(a3 + 4 * v10) = v14;
        *a2 = v11;
        return 0LL;
      }
    }
  }
  else
  {
    *a2 = 0;
    return 0LL;
  }
  return result;
}
