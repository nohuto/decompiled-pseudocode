/*
 * XREFs of CreateStandardMonoPattern @ 0x1C0254780
 * Callers:
 *     FindCachedSMP @ 0x1C0252520 (FindCachedSMP.c)
 *     GetCachedSMP @ 0x1C0252734 (GetCachedSMP.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     ComputeBytesPerScanLine @ 0x1C0253E3C (ComputeBytesPerScanLine.c)
 *     DrawCornerLine @ 0x1C0254C8C (DrawCornerLine.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  int v3; // r13d
  unsigned int v4; // r12d
  BOOL v5; // r11d
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // cl
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v17; // r8d
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // r14d
  unsigned int v21; // edi
  unsigned __int16 v22; // r12
  unsigned __int16 v23; // ax
  _BYTE *v24; // r14
  _BYTE *v25; // r15
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  __int16 k; // ax
  int v32; // r13d
  _BYTE *v33; // rdx
  int v34; // r8d
  char v35; // al
  char *v36; // rsi
  int v37; // ebx
  __int64 v38; // r12
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // ax
  char *v41; // rcx
  __int16 i; // di
  unsigned __int16 j; // dx
  char v44; // al
  int v45; // [rsp+20h] [rbp-48h]
  unsigned int v46; // [rsp+30h] [rbp-38h]
  int v47; // [rsp+34h] [rbp-34h]
  unsigned __int16 v48; // [rsp+38h] [rbp-30h]
  unsigned int v49; // [rsp+3Ch] [rbp-2Ch]
  int v50; // [rsp+44h] [rbp-24h]
  __m128i v51; // [rsp+48h] [rbp-20h]
  _BYTE *Src; // [rsp+58h] [rbp-10h]
  unsigned __int16 v53; // [rsp+B0h] [rbp+48h]
  int v55; // [rsp+C8h] [rbp+60h]

  v2 = *a2;
  v3 = *(unsigned __int16 *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  LOWORD(v49) = 0;
  v51 = *a2;
  v53 = *(_WORD *)(a1 + 190);
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v47 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v5 = (_mm_cvtsi128_si32(v2) & 1) == 0;
  v55 = v5;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v6 = 8;
  v51.m128i_i8[4] = v6;
  v7 = v51.m128i_u8[5];
  if ( !v51.m128i_i8[5] )
    v7 = 15;
  v51.m128i_i8[5] = v7;
  v8 = ((v7 >> 1) + 100 * v4) / v7;
  v50 = v6;
  v9 = (v4 * v6 + 5) / 0xA;
  if ( v51.m128i_u8[3] > 9u )
  {
    if ( v51.m128i_u8[3] != 10 )
    {
      v10 = v51.m128i_u8[3] - 11;
      if ( v51.m128i_u8[3] != 11 )
      {
LABEL_17:
        v12 = v10 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( (unsigned int)(v15 - 1) >= 2 )
                  return 0LL;
              }
            }
          }
        }
      }
    }
  }
  else if ( v51.m128i_u8[3] != 9 )
  {
    if ( !v51.m128i_i8[3] || v51.m128i_u8[3] == 1 || (v10 = v51.m128i_u8[3] - 2, v51.m128i_u8[3] == 2) )
    {
      v11 = (v8 + 50) / 0x64;
      v51.m128i_i16[4] = v11;
      if ( v51.m128i_i8[3] )
      {
        if ( v51.m128i_i8[3] == 1 )
          v8 = 800;
      }
      else
      {
        LOWORD(v11) = 8 * v51.m128i_u8[2];
        v51.m128i_i16[4] = v11;
      }
      v55 = v5;
      goto LABEL_26;
    }
    goto LABEL_17;
  }
  v17 = (unsigned __int16)(v51.m128i_u8[3] - 3);
  v18 = 0;
  v49 = v17 % 3;
  if ( (unsigned __int16)(v51.m128i_u8[3] - 3) % 3u )
  {
    LOBYTE(v18) = !v5;
    v55 = v18;
  }
  v19 = MonoPatRatio[v17 / 3];
  LOWORD(v11) = ((v19 >> 17) + 100 * v8) / HIWORD(v19);
  v51.m128i_i16[4] = v11;
  v8 = ((v19 >> 17) + v8 * (unsigned __int16)v19) / HIWORD(v19);
  v9 = ((v19 >> 17) + 10000 * v9) / HIWORD(v19);
LABEL_26:
  v20 = v9 - v47;
  if ( (_WORD)v4 != (_WORD)v3 )
    v8 = ((v4 >> 1) + v8 * v3) / v4;
  if ( !(_WORD)v11 )
  {
    LOWORD(v11) = 1;
    v51.m128i_i16[4] = 1;
  }
  v21 = (v8 + 50) / 0x64;
  v51.m128i_i16[5] = v21;
  if ( !(_WORD)v21 )
  {
    LOWORD(v21) = 1;
    v51.m128i_i16[5] = 1;
  }
  v22 = 1;
  v23 = v11 - 1;
  if ( (unsigned __int16)((v20 + 50) / 0x64u) <= (unsigned __int16)v11 )
    v23 = (v20 + 50) / 0x64u;
  if ( v23 )
    v22 = v23;
  v48 = ComputeBytesPerScanLine(1u, v51.m128i_u8[2], (unsigned __int16)v11);
  v51.m128i_i16[3] = v48;
  v46 = (unsigned __int16)v21 * v48;
  v24 = Src;
  v25 = Src;
  if ( !Src )
    goto LABEL_50;
  memset_0(Src, 0, (unsigned __int16)v46);
  if ( v51.m128i_u8[3] <= 9u )
  {
    if ( v51.m128i_u8[3] == 9 )
      goto LABEL_69;
    if ( v51.m128i_i8[3] )
    {
      if ( v51.m128i_u8[3] != 1 )
      {
        v26 = v51.m128i_u8[3] - 2;
        if ( v51.m128i_u8[3] != 2 )
          goto LABEL_42;
      }
      v32 = ((unsigned __int16)v11 - v22) >> 1;
      v33 = &Src[(unsigned __int64)(unsigned __int16)v32 >> 3];
      v34 = 128 >> (v32 & 7);
      while ( 1 )
      {
        v35 = 0;
        if ( !v22 )
          break;
        do
        {
          --v22;
          v35 |= v34;
          LOBYTE(v34) = (unsigned __int8)v34 >> 1;
        }
        while ( (_BYTE)v34 && v22 );
        *v33 = v35;
        LOBYTE(v34) = 0x80;
        ++v33;
      }
      v36 = Src;
      v37 = (unsigned __int16)v21;
      v38 = (unsigned __int16)v21;
      do
      {
        memmove(v36, Src, v48);
        v36 += v48;
        --v38;
      }
      while ( v38 );
    }
    else
    {
      v37 = (unsigned __int16)v21;
    }
    if ( v51.m128i_i8[3] != 1 )
    {
      v39 = v21 - 1;
      v40 = 1;
      if ( (unsigned __int16)(((v50 * (unsigned int)v53 + 5) / 0xA - v47 + 50) / 0x64) < (unsigned __int16)v21 )
        v39 = ((v50 * (unsigned int)v53 + 5) / 0xA - v47 + 50) / 0x64;
      if ( v39 )
        v40 = v39;
      memset_0(&Src[v48 * ((v37 - v40) >> 1)], 255, v40 * v48);
    }
    goto LABEL_47;
  }
  if ( v51.m128i_u8[3] == 10 || (v26 = v51.m128i_u8[3] - 11, v51.m128i_u8[3] == 11) )
  {
LABEL_69:
    LOWORD(v45) = v22;
    DrawCornerLine(Src, v45, v55);
    if ( (_WORD)v49 == 2 )
    {
      v41 = &Src[v48 * ((unsigned __int16)v21 - 1)];
      for ( i = (unsigned __int16)v21 >> 1; i; v41 -= 2 * (unsigned int)v48 )
      {
        --i;
        for ( j = v48; j; --j )
        {
          *v41 |= *v25;
          v44 = *v41++;
          *v25++ = v44;
        }
      }
    }
    goto LABEL_47;
  }
LABEL_42:
  v27 = v26 - 1;
  if ( !v27 )
    goto LABEL_69;
  v28 = v27 - 1;
  if ( !v28 )
    goto LABEL_69;
  v29 = v28 - 1;
  if ( !v29 )
    goto LABEL_69;
  v30 = v29 - 1;
  if ( !v30 || (unsigned int)(v30 - 1) < 2 )
    goto LABEL_69;
LABEL_47:
  if ( (v51.m128i_i8[0] & 2) != 0 )
  {
    for ( k = v46; k; --k )
    {
      *v24 = ~*v24;
      ++v24;
    }
  }
LABEL_50:
  *a2 = v51;
  a2[1].m128i_i64[0] = (__int64)Src;
  return v46;
}
