__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6)
{
  unsigned int *v6; // rdi
  unsigned int v7; // ebx
  HDC v9; // r10
  __int128 v11; // xmm0
  __m128i v12; // xmm1
  int *v13; // r14
  __int128 v14; // xmm0
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  int v18; // esi
  int *v19; // r12
  int v20; // r14d
  unsigned int *v21; // rcx
  __int64 v22; // rbx
  int *v23; // rdx
  int v24; // r8d
  int v25; // ecx
  unsigned int KerningPairs; // eax
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned int *v29; // r14
  unsigned __int64 v30; // r10
  unsigned int cx; // esi
  unsigned __int16 *v32; // r9
  _DWORD *v33; // rcx
  __int16 v34; // r11
  unsigned __int16 *i; // r8
  unsigned int v36; // r8d
  __int64 v37; // rax
  int *v38; // rdx
  unsigned __int16 *j; // rax
  int v40; // r14d
  unsigned int v41; // eax
  unsigned int v42; // ecx
  int *v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  unsigned int v46; // ecx
  int v47; // r9d
  int v48; // r11d
  unsigned int *v49; // r8
  __int64 v50; // r10
  int v51; // ecx
  __int64 v52; // rax
  int *v53; // r8
  int v54; // ecx
  __int64 v55; // rdx
  int v56; // eax
  _DWORD *v57; // rax
  unsigned int k; // ecx
  LONG cy; // esi
  struct tagSIZE v60; // [rsp+58h] [rbp-51h] BYREF
  unsigned int *v61; // [rsp+60h] [rbp-49h] BYREF
  unsigned int Size; // [rsp+68h] [rbp-41h] BYREF
  unsigned int Size_4; // [rsp+6Ch] [rbp-3Dh]
  int v64; // [rsp+70h] [rbp-39h]
  void *v65[2]; // [rsp+78h] [rbp-31h]
  void *Src[2]; // [rsp+88h] [rbp-21h]
  void *v67[2]; // [rsp+98h] [rbp-11h]
  __m128i v68; // [rsp+A8h] [rbp-1h]
  int v70; // [rsp+108h] [rbp+5Fh]
  unsigned int v71; // [rsp+110h] [rbp+67h]
  int v72; // [rsp+128h] [rbp+7Fh]

  v71 = a4;
  v6 = 0LL;
  v60.cy = 0;
  v7 = a3;
  v60.cx = 0;
  v9 = a1;
  Size_4 = 0;
  v61 = 0LL;
  if ( !a5 )
  {
    if ( (unsigned int)GrepGetTextExtentW(a1, a2, a3, &v60, 1u, COERCE_FLOAT(8)) )
      return (unsigned int)LOWORD(v60.cx) | (v60.cy << 16);
    return 0LL;
  }
  v11 = *a5;
  *(_OWORD *)Src = a5[1];
  v12 = (__m128i)a5[3];
  v13 = (int *)Src[1];
  *(_OWORD *)v65 = v11;
  v14 = a5[2];
  v68 = v12;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
  *(_OWORD *)v67 = v14;
  if ( a3 > v15 )
    v7 = v15;
  v16 = a6 | 0x100000;
  Size = v7;
  if ( (a6 & 0x10000) == 0 )
    v16 = a6;
  v70 = v16;
  if ( (v16 & 0x200000) != 0 && Src[1] )
  {
    v17 = nCalcJustInArray(&v61, 1u, Src[1], 1, v15);
    v16 = v70;
    a4 = v71;
    v9 = a1;
    v6 = v61;
    Size_4 = v17;
  }
  v18 = v13 != 0LL;
  v72 = v18;
  if ( v67[0] )
  {
    v18 += 2;
    v72 = v18;
  }
  v19 = v13;
  if ( v18 == 2 )
    v19 = (int *)v67[0];
  v20 = v16 & 0x100000;
  v64 = v16 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v16 & 0x100000) != 0)),
                        v19,
                        &v60,
                        0,
                        8) )
  {
    if ( !v6 )
      return 0LL;
    v21 = v6;
LABEL_18:
    Win32FreePool(v21);
    return 0LL;
  }
  LODWORD(v22) = Size;
  if ( v19 )
  {
    if ( Size )
    {
      v23 = &v19[Size - 1];
      if ( v23 > v19 )
      {
        v24 = *v23;
        do
        {
          v25 = *(v23 - 1);
          *v23-- = v24 - v25;
          v24 = v25;
        }
        while ( v23 > v19 );
      }
    }
  }
  if ( v20 && !(_DWORD)v22 )
  {
    if ( v6 )
      Win32FreePool(v6);
    return (unsigned int)LOWORD(v60.cx) | (v60.cy << 16);
  }
  if ( (v70 & 8) != 0
    && v18
    && (unsigned int)v22 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL, 8u), (v27 = KerningPairs) != 0)
    && 8 * KerningPairs
    && (v28 = Win32AllocPoolZInit(8 * KerningPairs, 1954051143LL), (v29 = (unsigned int *)v28) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v27, v28, 8u) != (_DWORD)v27 )
    {
      if ( v6 )
        Win32FreePool(v6);
      v21 = v29;
      goto LABEL_18;
    }
    v30 = (unsigned __int64)&v29[2 * v27];
    cx = v60.cx;
    if ( (unsigned __int64)v29 < v30 )
    {
      v32 = &a2[(unsigned int)(v22 - 1)];
      v33 = v29 + 1;
      do
      {
        v34 = *((_WORD *)v33 - 2);
        for ( i = a2; i < v32; ++i )
        {
          if ( v34 == *i && i[1] == *((_WORD *)v33 - 1) )
          {
            v19[i - a2] += *v33;
            cx += *v33;
            v60.cx = cx;
          }
        }
        v33 += 2;
      }
      while ( (unsigned __int64)(v33 - 1) < v30 );
    }
    Win32FreePool(v29);
    v36 = v71;
    if ( v64 )
    {
      while ( cx > v71 )
      {
        if ( !(_DWORD)v22 )
          goto LABEL_63;
        v22 = (unsigned int)(v22 - 1);
        cx -= v19[v22];
        v60.cx = cx;
      }
      if ( !(_DWORD)v22 )
      {
LABEL_63:
        if ( v6 )
          Win32FreePool(v6);
        *((_DWORD *)a5 + 14) = 0;
        *((_DWORD *)a5 + 15) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v60.cx;
    v36 = v71;
  }
  if ( (v70 & 0x10000) == 0 )
    goto LABEL_85;
  if ( v72 )
  {
    if ( !(_DWORD)v22 )
      goto LABEL_85;
    v37 = (unsigned int)(v22 - 1);
    v38 = &v19[v37];
    for ( j = &a2[v37]; j >= a2 && *j == 32; --j )
    {
      cx -= *v38;
      LODWORD(v22) = v22 - 1;
      --v38;
    }
    if ( !(_DWORD)v22 )
      goto LABEL_63;
    v40 = v36 - cx;
    if ( (int)(v36 - cx) >= 0 && (unsigned int)v22 >= 2 )
    {
      v41 = Size_4;
      if ( !Size_4 )
      {
        v41 = nCalcJustInArray(&v61, 0x20u, a2, 0, v22);
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
            while ( v42 < (int)v22 - 1 );
          }
          v6 = v61;
          goto LABEL_84;
        }
        v6 = v61;
      }
      v44 = v41 - 1;
      v45 = (int)(v41 - 1);
      if ( v44 >= 0 )
      {
        do
        {
          if ( (int)v22 - 1 >= v6[v45] )
            break;
          --v44;
          --v45;
        }
        while ( v45 >= 0 );
      }
      v46 = v44 + 1;
      v47 = v40 % v46;
      v48 = v40 / v46;
      v49 = v6;
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
LABEL_84:
    v60.cx = v71;
LABEL_85:
    if ( v72 == 3 )
      memmove(v67[0], Src[1], 4LL * (unsigned int)v22);
  }
  v53 = (int *)v67[0];
  if ( v67[0] )
  {
    v54 = 0;
    if ( (_DWORD)v22 )
    {
      v55 = (unsigned int)v22;
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
  if ( v65[1] )
    memmove(v65[1], a2, 2LL * (unsigned int)v22);
  if ( v67[1] )
    memset_0(v67[1], 1, (unsigned int)v22);
  v57 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v22; ++v57 )
      *v57 = k++;
  }
  if ( v68.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, a2, v22, v68.m128i_i64[0], 0, 0, 8) == -1 )
  {
    LODWORD(v22) = 0;
    cy = 0;
    v60.cx = 0;
  }
  else
  {
    cy = v60.cy;
  }
  if ( v6 )
    Win32FreePool(v6);
  *((_DWORD *)a5 + 14) = v22;
  *((_DWORD *)a5 + 15) = v22;
  return (cy << 16) | (unsigned int)LOWORD(v60.cx);
}
