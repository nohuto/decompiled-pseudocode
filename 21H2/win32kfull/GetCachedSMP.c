/*
 * XREFs of GetCachedSMP @ 0x1C0019708
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C001965C (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0019884 (ComputeBytesPerScanLine.c)
 *     FindCachedSMP @ 0x1C00198D8 (FindCachedSMP.c)
 *     CreateStandardMonoPattern @ 0x1C01535F4 (CreateStandardMonoPattern.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall GetCachedSMP(__int64 a1, __int16 *a2)
{
  __int16 *v2; // rbx
  __int64 v3; // r15
  char v4; // dl
  char v5; // al
  __m128i *CachedSMP; // rax
  __m128i *v7; // rbp
  __m128i v8; // xmm0
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // r10
  int v11; // r11d
  char *v12; // rsi
  char *v13; // r12
  unsigned int v14; // edi
  unsigned __int16 v15; // cx
  __int16 v16; // r13
  unsigned __int64 v17; // r10
  int v18; // eax
  __int16 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rsi
  size_t v22; // r15
  unsigned int i; // ecx
  char *v25; // [rsp+28h] [rbp-60h]
  __m128i v26; // [rsp+30h] [rbp-58h]

  v2 = a2;
  v3 = a1;
  v4 = *((_BYTE *)a2 + 4);
  if ( !v4 )
  {
    *((_BYTE *)v2 + 4) = 8;
    v4 = 8;
  }
  v5 = *((_BYTE *)v2 + 5);
  if ( !v5 )
  {
    *((_BYTE *)v2 + 5) = 15;
    v5 = 15;
  }
  if ( *((unsigned __int8 *)v2 + 3) >= 0x12u )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v4 != 8 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v5 != 15 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  CachedSMP = (__m128i *)FindCachedSMP(a1, *((unsigned __int8 *)v2 + 3));
  if ( !CachedSMP )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  v7 = CachedSMP + 1;
  v26 = *CachedSMP;
  v8 = _mm_srli_si128(*CachedSMP, 8);
  v2[5] = v8.m128i_i16[2];
  v2[4] = v8.m128i_i16[1];
  v9 = ComputeBytesPerScanLine(1LL);
  v12 = (char *)*((_QWORD *)v2 + 2);
  v13 = v12;
  v14 = v11 * v9;
  v15 = v9;
  v2[3] = v9;
  v25 = v12;
  if ( v12 )
  {
    v16 = *v2;
    v17 = HIWORD(v10);
    v18 = v17;
    if ( (*v2 & 1) == 0 )
    {
      v7 = (__m128i *)((char *)v7 + (int)v17 * (v11 - 1));
      v18 = -(int)v17;
    }
    if ( (_WORD)v11 )
    {
      v19 = v26.m128i_i16[6];
      v20 = v15;
      v21 = v18;
      v22 = (unsigned int)v17;
      do
      {
        --v19;
        memmove(v13, v7, v22);
        v13 += v20;
        v7 = (__m128i *)((char *)v7 + v21);
      }
      while ( v19 );
      v2 = a2;
      v12 = v25;
      v3 = a1;
    }
    if ( (v16 & 2) != 0 )
    {
      for ( i = v14; i; --i )
      {
        *v12 = ~*v12;
        ++v12;
      }
    }
  }
  EngReleaseSemaphore(hsem);
  if ( !v14 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  return v14;
}
