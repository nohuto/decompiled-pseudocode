/*
 * XREFs of CreateStandardMonoPattern @ 0x1C01535F4
 * Callers:
 *     GetCachedSMP @ 0x1C0019708 (GetCachedSMP.c)
 *     FindCachedSMP @ 0x1C00198D8 (FindCachedSMP.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0019884 (ComputeBytesPerScanLine.c)
 *     DivFD6 @ 0x1C001CDDC (DivFD6.c)
 *     DrawCornerLine @ 0x1C0153A28 (DrawCornerLine.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  unsigned __int16 v3; // bx
  unsigned int v4; // r13d
  unsigned __int8 v5; // r14
  BOOL v6; // r11d
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // cl
  unsigned int v9; // r10d
  unsigned int v10; // edi
  BOOL v11; // r12d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  int v14; // r8d
  unsigned int v15; // esi
  int v16; // edi
  unsigned int v17; // ebx
  unsigned __int16 v18; // r15
  unsigned __int16 v19; // ax
  _BYTE *v20; // rdi
  char *v21; // rsi
  __int64 v22; // r12
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  int v26; // ecx
  _BYTE *v27; // rdx
  int v28; // r8d
  char v29; // al
  char *v30; // rcx
  __int16 i; // bx
  unsigned __int16 j; // dx
  char v33; // al
  __int16 k; // ax
  int v35; // [rsp+20h] [rbp-48h]
  unsigned __int16 v36; // [rsp+30h] [rbp-38h]
  int v37; // [rsp+34h] [rbp-34h]
  int v38; // [rsp+44h] [rbp-24h]
  __m128i v39; // [rsp+48h] [rbp-20h]
  _BYTE *Src; // [rsp+58h] [rbp-10h]
  unsigned __int16 v41; // [rsp+B0h] [rbp+48h]
  unsigned int v43; // [rsp+C0h] [rbp+58h]
  __int16 v44; // [rsp+C8h] [rbp+60h]

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  v44 = 0;
  v39 = *a2;
  v41 = v3;
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v5 = HIBYTE(a2->m128i_u32[0]);
  v37 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v6 = (_mm_cvtsi128_si32(v2) & 1) == 0;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v7 = 8;
  v39.m128i_i8[4] = v7;
  v8 = v39.m128i_u8[5];
  if ( !v39.m128i_i8[5] )
    v8 = 15;
  v39.m128i_i8[5] = v8;
  v9 = ((v8 >> 1) + 100 * v4) / v8;
  v38 = v7;
  v10 = (v4 * v7 + 5) / 0xA;
  if ( v5 <= 2u )
  {
    v11 = v6;
    v39.m128i_i16[4] = (v9 + 50) / 0x64;
    LOWORD(v15) = v39.m128i_i16[4];
    if ( v5 )
    {
      if ( v5 == 1 )
        v9 = 800;
    }
    else
    {
      LOWORD(v15) = 8 * v39.m128i_u8[2];
      v39.m128i_i16[4] = v15;
    }
LABEL_10:
    v16 = v10 - v37;
    if ( (_WORD)v4 != v3 )
      v9 = ((v4 >> 1) + v9 * v3) / v4;
    if ( !(_WORD)v15 )
    {
      LOWORD(v15) = 1;
      v39.m128i_i16[4] = 1;
    }
    v17 = (v9 + 50) / 0x64;
    v39.m128i_i16[5] = v17;
    if ( !(_WORD)v17 )
    {
      LOWORD(v17) = 1;
      v39.m128i_i16[5] = 1;
    }
    v18 = 1;
    v19 = v15 - 1;
    if ( (unsigned __int16)((v16 + 50) / 0x64u) <= (unsigned __int16)v15 )
      v19 = (v16 + 50) / 0x64u;
    if ( v19 )
      v18 = v19;
    v36 = ComputeBytesPerScanLine(1u, v39.m128i_u8[2], (unsigned __int16)v15);
    v39.m128i_i16[3] = v36;
    v43 = v36 * (unsigned __int16)v17;
    v20 = Src;
    if ( !Src )
      goto LABEL_33;
    memset(Src, 0, (unsigned __int16)v43);
    if ( v5 )
    {
      if ( v5 > 2u )
      {
        LOWORD(v35) = v18;
        DrawCornerLine(Src, v35, v11);
        if ( v44 == 2 )
        {
          v30 = &Src[v36 * ((unsigned __int16)v17 - 1)];
          for ( i = (unsigned __int16)v17 >> 1; i; v30 -= 2 * (unsigned int)v36 )
          {
            --i;
            for ( j = v36; j; --j )
            {
              *v30 |= *v20;
              v33 = *v30++;
              *v20++ = v33;
            }
          }
          v20 = Src;
        }
LABEL_32:
        if ( (v39.m128i_i8[0] & 2) != 0 )
        {
          for ( k = v43; k; --k )
          {
            *v20 = ~*v20;
            ++v20;
          }
        }
LABEL_33:
        *a2 = v39;
        a2[1].m128i_i64[0] = (__int64)Src;
        return v43;
      }
      v26 = ((unsigned __int16)v15 - v18) >> 1;
      v27 = &Src[(unsigned __int64)(unsigned __int16)v26 >> 3];
      v28 = 128 >> (v26 & 7);
      while ( 1 )
      {
        v29 = 0;
        if ( !v18 )
          break;
        do
        {
          --v18;
          v29 |= v28;
          LOBYTE(v28) = (unsigned __int8)v28 >> 1;
        }
        while ( (_BYTE)v28 && v18 );
        *v27 = v29;
        LOBYTE(v28) = 0x80;
        ++v27;
      }
      v21 = Src;
      v22 = (unsigned __int16)v17;
      do
      {
        memmove(v21, Src, v36);
        v21 += v36;
        --v22;
      }
      while ( v22 );
    }
    if ( v5 != 1 )
    {
      v23 = v17 - 1;
      v24 = 1;
      if ( (unsigned __int16)(((v38 * (unsigned int)v41 + 5) / 0xA - v37 + 50) / 0x64) < (unsigned __int16)v17 )
        v23 = ((v38 * (unsigned int)v41 + 5) / 0xA - v37 + 50) / 0x64;
      if ( v23 )
        v24 = v23;
      memset(&Src[v36 * (((unsigned __int16)v17 - v24) >> 1)], 255, v24 * v36);
    }
    goto LABEL_32;
  }
  if ( v5 <= 0x11u )
  {
    v11 = v6;
    v12 = (unsigned __int16)(v39.m128i_u8[3] - 3) / 3u;
    v44 = (unsigned __int16)(v39.m128i_u8[3] - 3) % 3u;
    if ( v39.m128i_u8[3] - 3 != 3 * ((unsigned __int16)(v39.m128i_u8[3] - 3) / 3u) )
      v11 = !v6;
    v13 = HIWORD(MonoPatRatio[v12]);
    v14 = MonoPatRatio[v12] >> 17;
    v15 = (v14 + 100 * v9) / v13;
    v39.m128i_i16[4] = v15;
    v9 = (v14 + v9 * (unsigned __int16)MonoPatRatio[v12]) / v13;
    v10 = (v14 + 10000 * v10) / v13;
    goto LABEL_10;
  }
  return 0LL;
}
