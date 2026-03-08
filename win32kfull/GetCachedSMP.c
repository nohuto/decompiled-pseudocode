/*
 * XREFs of GetCachedSMP @ 0x1C0252734
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C0252C14 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     FindCachedSMP @ 0x1C0252520 (FindCachedSMP.c)
 *     ComputeBytesPerScanLine @ 0x1C0253E3C (ComputeBytesPerScanLine.c)
 *     CreateStandardMonoPattern @ 0x1C0254780 (CreateStandardMonoPattern.c)
 */

__int64 __fastcall GetCachedSMP(__int64 a1, __int16 *a2)
{
  __int16 *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // r14
  char v7; // al
  unsigned int v8; // ecx
  __m128i *CachedSMP; // rax
  __int64 v10; // rdx
  __m128i *v11; // rbp
  __m128i v12; // xmm0
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // r10
  int v15; // r11d
  char *v16; // rsi
  char *v17; // r13
  unsigned int v18; // edi
  unsigned __int16 v19; // cx
  __int16 v20; // r12
  unsigned __int64 v21; // r10
  int v22; // eax
  __int16 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rsi
  size_t v26; // r15
  unsigned int i; // edx
  char *v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  __m128i v31; // [rsp+38h] [rbp-60h]

  v2 = a2;
  v3 = a1;
  v4 = SGDGetSessionState(a1);
  v5 = *((_BYTE *)v2 + 4);
  v6 = *(_QWORD *)(v4 + 48);
  v30 = v6;
  if ( !v5 )
  {
    *((_BYTE *)v2 + 4) = 8;
    v5 = 8;
  }
  v7 = *((_BYTE *)v2 + 5);
  if ( !v7 )
  {
    *((_BYTE *)v2 + 5) = 15;
    v7 = 15;
  }
  v8 = *((unsigned __int8 *)v2 + 3);
  if ( v8 >= 0x12 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v5 != 8 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v7 != 15 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  CachedSMP = (__m128i *)FindCachedSMP(v3, v8);
  if ( !CachedSMP )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  v10 = *((unsigned __int8 *)v2 + 2);
  v11 = CachedSMP + 1;
  v31 = *CachedSMP;
  v12 = _mm_srli_si128(*CachedSMP, 8);
  v2[5] = v12.m128i_i16[2];
  v2[4] = v12.m128i_i16[1];
  v13 = ComputeBytesPerScanLine(1LL, v10);
  v16 = (char *)*((_QWORD *)v2 + 2);
  v17 = v16;
  v18 = v15 * v13;
  v19 = v13;
  v2[3] = v13;
  v29 = v16;
  if ( v16 )
  {
    v20 = *v2;
    v21 = HIWORD(v14);
    v22 = v21;
    if ( (*v2 & 1) == 0 )
    {
      v11 = (__m128i *)((char *)v11 + (int)v21 * (v15 - 1));
      v22 = -(int)v21;
    }
    if ( (_WORD)v15 )
    {
      v23 = v31.m128i_i16[6];
      v24 = v19;
      v25 = v22;
      v26 = (unsigned int)v21;
      do
      {
        --v23;
        memmove(v17, v11, v26);
        v17 += v24;
        v11 = (__m128i *)((char *)v11 + v25);
      }
      while ( v23 );
      v2 = a2;
      v16 = v29;
      v3 = a1;
      v6 = v30;
    }
    if ( (v20 & 2) != 0 )
    {
      for ( i = v18; i; --i )
      {
        *v16 = ~*v16;
        ++v16;
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v6 + 16));
  if ( !v18 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  return v18;
}
