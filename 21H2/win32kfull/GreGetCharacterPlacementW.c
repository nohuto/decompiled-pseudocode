/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C02BAA8C
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C02ACDC0 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     GreGetGlyphIndicesW @ 0x1C0100C28 (GreGetGlyphIndicesW.c)
 *     GreGetKerningPairs @ 0x1C01301E4 (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C015FAA8 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02BA904 (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 */

__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6)
{
  int v6; // r13d
  unsigned int *v7; // rdi
  unsigned int v8; // ebx
  unsigned __int16 *v9; // r10
  HDC v10; // r11
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  int *v14; // rsi
  __int128 v15; // xmm0
  unsigned int v16; // r8d
  int v17; // r14d
  int v18; // eax
  int *v19; // r12
  unsigned int *v20; // rcx
  __int64 v21; // rbx
  int *v22; // rdx
  int v23; // r8d
  int v24; // ecx
  unsigned int KerningPairs; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r9
  unsigned int x; // esi
  _DWORD *v31; // rcx
  unsigned __int16 *v32; // r10
  __int16 v33; // r11
  unsigned __int16 *i; // r8
  unsigned int v35; // r9d
  __int64 v36; // rax
  int *v37; // rdx
  unsigned __int16 *j; // rax
  __int64 v39; // rax
  int v40; // r14d
  int v41; // eax
  unsigned int v42; // ecx
  int *v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  unsigned int v46; // r8d
  signed int v47; // edx
  unsigned int v48; // r10d
  unsigned int *v49; // rcx
  __int64 v50; // r9
  unsigned int v51; // r8d
  __int64 v52; // rax
  int *v53; // r8
  int v54; // ecx
  __int64 v55; // rdx
  int v56; // eax
  _DWORD *v57; // rax
  unsigned int k; // ecx
  LONG y; // esi
  __int64 v60; // rax
  struct _POINTL v61; // [rsp+48h] [rbp-59h] BYREF
  unsigned int *v62; // [rsp+50h] [rbp-51h] BYREF
  int v63; // [rsp+58h] [rbp-49h]
  int v64; // [rsp+5Ch] [rbp-45h]
  int v65; // [rsp+60h] [rbp-41h]
  void *v66[2]; // [rsp+68h] [rbp-39h]
  void *Src[2]; // [rsp+78h] [rbp-29h]
  void *v68[2]; // [rsp+88h] [rbp-19h]
  __m128i v69; // [rsp+98h] [rbp-9h]
  size_t Size; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v73; // [rsp+110h] [rbp+6Fh]

  v73 = a4;
  v6 = 0;
  v61.y = 0;
  v7 = 0LL;
  v61.x = 0;
  v8 = a3;
  v63 = 0;
  v9 = a2;
  v62 = 0LL;
  v10 = a1;
  if ( !a5 )
  {
    if ( (unsigned int)GreGetTextExtentW(a1, a2, a3, (struct tagSIZE *)&v61, 1u) )
      return (unsigned int)LOWORD(v61.x) | (v61.y << 16);
    return 0LL;
  }
  v12 = *a5;
  *(_OWORD *)Src = a5[1];
  v13 = (__m128i)a5[3];
  v14 = (int *)Src[1];
  *(_OWORD *)v66 = v12;
  v15 = a5[2];
  v69 = v13;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(_OWORD *)v68 = v15;
  if ( v8 > v16 )
    v8 = v16;
  v17 = a6 | 0x100000;
  LODWORD(Size) = v8;
  if ( (a6 & 0x10000) == 0 )
    v17 = a6;
  v65 = v17;
  if ( (v17 & 0x200000) != 0 )
  {
    if ( !Src[1] )
      goto LABEL_13;
    v18 = nCalcJustInArray(&v62, 1u, (char *)Src[1], 1, v16);
    v9 = a2;
    a4 = v73;
    v10 = a1;
    v7 = v62;
    v63 = v18;
  }
  if ( v14 )
    v6 = 1;
LABEL_13:
  if ( v68[0] )
    v6 += 2;
  v19 = v14;
  if ( v6 == 2 )
    v19 = (int *)v68[0];
  v64 = v17 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v10,
                        v9,
                        v8,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v17 & 0x100000) != 0)),
                        v19,
                        (struct tagSIZE *)&v61,
                        0) )
  {
    if ( !v7 )
      return 0LL;
    v20 = v7;
LABEL_20:
    Win32FreePool(v20);
    return 0LL;
  }
  LODWORD(v21) = Size;
  if ( v19 )
  {
    if ( (_DWORD)Size )
    {
      v22 = &v19[(unsigned int)(Size - 1)];
      if ( v22 > v19 )
      {
        v23 = *v22;
        do
        {
          v24 = *(v22 - 1);
          *v22-- = v23 - v24;
          v23 = v24;
        }
        while ( v22 > v19 );
      }
    }
  }
  if ( (v17 & 0x100000) != 0 && !(_DWORD)v21 )
  {
    if ( v7 )
      Win32FreePool(v7);
    return (unsigned int)LOWORD(v61.x) | (v61.y << 16);
  }
  if ( (v17 & 8) != 0
    && v6
    && (unsigned int)v21 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL), (v26 = KerningPairs) != 0)
    && 8 * KerningPairs
    && (v27 = Win32AllocPoolZInit(8 * KerningPairs, 1954051143LL), (v28 = v27) != 0) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v26, v27) != (_DWORD)v26 )
    {
      if ( v7 )
        Win32FreePool(v7);
      v20 = (unsigned int *)v28;
      goto LABEL_20;
    }
    v29 = v28 + 8 * v26;
    x = v61.x;
    if ( v28 < v29 )
    {
      v31 = (_DWORD *)(v28 + 4);
      v32 = &a2[(unsigned int)(v21 - 1)];
      do
      {
        v33 = *((_WORD *)v31 - 2);
        for ( i = a2; i < v32; ++i )
        {
          if ( v33 == *i && i[1] == *((_WORD *)v31 - 1) )
          {
            v19[i - a2] += *v31;
            x += *v31;
            v61.x = x;
          }
        }
        v31 += 2;
      }
      while ( (unsigned __int64)(v31 - 1) < v29 );
      v7 = v62;
    }
    Win32FreePool(v28);
    v35 = v73;
    if ( v64 )
    {
      while ( x > v73 )
      {
        if ( !(_DWORD)v21 )
          goto LABEL_66;
        v21 = (unsigned int)(v21 - 1);
        x -= v19[v21];
        v61.x = x;
      }
      if ( !(_DWORD)v21 )
      {
LABEL_66:
        if ( v7 )
          Win32FreePool(v7);
        v39 = (__int64)a5;
        *((_DWORD *)a5 + 14) = 0;
        *(_DWORD *)(v39 + 60) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    x = v61.x;
    v35 = v73;
  }
  if ( (v65 & 0x10000) == 0 )
    goto LABEL_89;
  if ( v6 )
  {
    if ( !(_DWORD)v21 )
      goto LABEL_89;
    v36 = (unsigned int)(v21 - 1);
    v37 = &v19[v36];
    for ( j = &a2[v36]; j >= a2 && *j == 32; --j )
    {
      x -= *v37;
      LODWORD(v21) = v21 - 1;
      --v37;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_66;
    v40 = v35 - x;
    if ( (int)(v35 - x) >= 0 && (unsigned int)v21 >= 2 )
    {
      v41 = v63;
      if ( !v63 )
      {
        v41 = nCalcJustInArray(&v62, 0x20u, (char *)a2, 0, v21);
        if ( !v41 )
        {
          while ( v40 > 0 )
          {
            v42 = 0;
            v43 = v19;
            do
            {
              ++*v43;
              if ( !--v40 )
                break;
              ++v42;
              ++v43;
            }
            while ( v42 < (int)v21 - 1 );
          }
          v7 = v62;
          goto LABEL_88;
        }
        v7 = v62;
      }
      v44 = v41 - 1;
      v45 = v41 - 1;
      if ( v44 >= 0 )
      {
        do
        {
          if ( (int)v21 - 1 >= v7[v45] )
            break;
          --v44;
          --v45;
        }
        while ( v45 >= 0 );
      }
      v46 = v44 + 1;
      v47 = v40 % (unsigned int)(v44 + 1);
      v48 = v40 / (unsigned int)(v44 + 1);
      if ( v44 != -1 )
      {
        v49 = v7;
        v50 = v46;
        do
        {
          v51 = v48;
          if ( v47 > 0 )
            v51 = v48 + 1;
          v52 = *v49;
          --v47;
          ++v49;
          v19[v52] += v51;
          --v50;
        }
        while ( v50 );
      }
    }
LABEL_88:
    v61.x = v73;
LABEL_89:
    if ( v6 == 3 )
      memmove(v68[0], Src[1], 4LL * (unsigned int)v21);
  }
  v53 = (int *)v68[0];
  if ( v68[0] )
  {
    v54 = 0;
    if ( (_DWORD)v21 )
    {
      v55 = (unsigned int)v21;
      do
      {
        v56 = *v53;
        *v53 = v54;
        v54 += v56;
        ++v53;
        --v55;
      }
      while ( v55 );
    }
  }
  if ( v66[1] )
    memmove(v66[1], a2, 2LL * (unsigned int)v21);
  if ( v68[1] )
    memset(v68[1], 1, (unsigned int)v21);
  v57 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v21; ++v57 )
      *v57 = k++;
  }
  if ( v69.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, a2, v21, v69.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v21) = 0;
    y = 0;
    v61.x = 0;
  }
  else
  {
    y = v61.y;
  }
  if ( v7 )
    Win32FreePool(v7);
  v60 = (__int64)a5;
  *((_DWORD *)a5 + 14) = v21;
  *(_DWORD *)(v60 + 60) = v21;
  return (y << 16) | (unsigned int)LOWORD(v61.x);
}
