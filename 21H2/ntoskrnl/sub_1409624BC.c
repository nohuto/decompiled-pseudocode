/*
 * XREFs of sub_1409624BC @ 0x1409624BC
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409624BC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r12d
  signed int v8; // ebx
  unsigned int *v9; // rcx
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // r8
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  unsigned int *v17; // rax
  unsigned int j; // edx
  __int64 v19; // r9
  unsigned int *v20; // r8
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  unsigned int *v23; // rax
  const wchar_t *v24; // rbp
  size_t v25; // r8
  unsigned int k; // r9d
  __int64 v27; // rax
  unsigned int *v28; // rdx
  size_t v29; // rdx
  unsigned int *v30; // rax
  const wchar_t *v31; // rbp
  size_t v32; // rdx
  __int64 v33; // r11
  unsigned int v34; // eax
  size_t v35; // rsi
  PVOID PoolWithTag; // rax
  PVOID v37; // rbx
  unsigned int m; // r8d
  __int64 v39; // r9
  unsigned int *v40; // rcx
  size_t v41; // rcx
  unsigned int *v42; // rcx
  __int64 v43; // r11
  unsigned int v44; // eax
  size_t v45; // rsi
  PVOID v46; // rax
  PVOID v47; // rbx
  PVOID v48; // rbp
  unsigned int v49; // r10d
  unsigned int *v50; // rax
  unsigned int n; // edx
  __int64 v52; // r9
  unsigned int *v53; // r8
  unsigned int v54; // esi
  unsigned int *v55; // rbx
  unsigned int *v56; // rax
  unsigned int ii; // edx
  __int64 v58; // r9
  unsigned int *v59; // r8
  unsigned int v60; // r11d
  unsigned int *v61; // r9
  unsigned int jj; // r8d
  __int64 v63; // rax
  unsigned int *v64; // rdx
  unsigned int v65; // r8d
  unsigned int *v66; // rdx
  int v67; // edi
  int v68; // edx
  unsigned int v69; // ecx
  _DWORD *v70; // rax
  int v71; // edi
  unsigned int v72; // r8d
  __int64 v73; // r9
  unsigned int v74; // edx
  int v75; // eax
  unsigned int v76; // ecx
  unsigned __int64 v77; // rdx
  unsigned int v78; // ecx
  unsigned int v79; // eax
  __int64 v80; // rax
  PVOID v82; // [rsp+50h] [rbp-48h]
  size_t pcbLength; // [rsp+58h] [rbp-40h] BYREF
  __int64 v84; // [rsp+60h] [rbp-38h]
  PVOID P; // [rsp+A8h] [rbp+10h]

  v84 = 0LL;
  v82 = 0LL;
  v7 = 0;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v10 = v9;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_17;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_17;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_17:
      v8 = -1073741675;
    }
    else
    {
      v16 = 0LL;
      if ( v14 )
        v16 = v15;
      v8 = 0;
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v84 = *(_QWORD *)v16;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v9 && *(_DWORD *)a1 > 4u )
  {
    v17 = v9;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        goto LABEL_31;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_31;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
LABEL_31:
      v8 = -1073741675;
    }
    else
    {
      v23 = 0LL;
      if ( v21 )
        v23 = v22;
      v8 = 0;
      if ( v21 != 4 )
        return (unsigned int)-1073741789;
      v7 = *v23;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  pcbLength = 0LL;
  v24 = 0LL;
  LODWORD(v25) = 0;
  if ( v9 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v27 = *v9;
      v28 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_52;
      v9 = (unsigned int *)((char *)v28 + v27);
      if ( (unsigned int *)((char *)v28 + v27) < v28 )
        goto LABEL_52;
    }
    v29 = *v9;
    if ( v9 + 1 < v9 )
    {
LABEL_52:
      v8 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v29 )
        v24 = (const wchar_t *)(v9 + 1);
      v8 = 0;
      if ( !(_DWORD)v29
        || (v29 & 1) != 0
        || v24[(v29 >> 1) - 1]
        || StringCbLengthW(v24, v29, &pcbLength) < 0
        || pcbLength + 2 != v33 )
      {
        return (unsigned int)-1073741762;
      }
      v25 = pcbLength >> 1;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  v34 = 2 * v25 + 2;
  if ( 2 * (_DWORD)v25 == -2 )
    return (unsigned int)-1073741762;
  v35 = v34;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v34, 0x20534C53u);
  v37 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, v24, v35);
  P = v37;
  v30 = *(unsigned int **)(a1 + 8);
  v31 = 0LL;
  pcbLength = 0LL;
  LODWORD(v32) = 0;
  if ( v30 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v39 = *v30;
      v40 = v30 + 1;
      if ( v30 + 1 < v30 )
        goto LABEL_75;
      v30 = (unsigned int *)((char *)v40 + v39);
      if ( (unsigned int *)((char *)v40 + v39) < v40 )
        goto LABEL_75;
    }
    v41 = *v30;
    if ( v30 + 1 < v30 )
    {
LABEL_75:
      v8 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v41 )
        v31 = (const wchar_t *)(v30 + 1);
      v8 = 0;
      if ( !(_DWORD)v41
        || (v41 & 1) != 0
        || v31[(v41 >> 1) - 1]
        || StringCbLengthW(v31, v41, &pcbLength) < 0
        || pcbLength + 2 != v43 )
      {
LABEL_67:
        v8 = -1073741762;
        goto LABEL_131;
      }
      v32 = pcbLength >> 1;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_131;
  v44 = 2 * v32 + 2;
  if ( 2 * (_DWORD)v32 == -2 )
    goto LABEL_67;
  v45 = v44;
  v46 = ExAllocatePoolWithTag(PagedPool, v44, 0x20534C53u);
  v47 = v46;
  if ( !v46 )
  {
    v8 = -1073741801;
    goto LABEL_131;
  }
  memmove(v46, v31, v45);
  v48 = v47;
  v82 = v47;
  v42 = *(unsigned int **)(a1 + 8);
  if ( v42 )
  {
    v49 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 7u )
    {
      v50 = *(unsigned int **)(a1 + 8);
      for ( n = 0; n < 7; ++n )
      {
        v52 = *v50;
        v53 = v50 + 1;
        if ( v50 + 1 < v50 )
          goto LABEL_130;
        v50 = (unsigned int *)((char *)v53 + v52);
        if ( (unsigned int *)((char *)v53 + v52) < v53 )
          goto LABEL_130;
      }
      v54 = *v50;
      if ( v50 + 1 < v50 )
        goto LABEL_130;
      v55 = 0LL;
      if ( v54 )
        v55 = v50 + 1;
      if ( v49 > 8 )
      {
        v56 = *(unsigned int **)(a1 + 8);
        for ( ii = 0; ii < 8; ++ii )
        {
          v58 = *v56;
          v59 = v56 + 1;
          if ( v56 + 1 < v56 )
            goto LABEL_130;
          v56 = (unsigned int *)((char *)v59 + v58);
          if ( (unsigned int *)((char *)v59 + v58) < v59 )
            goto LABEL_130;
        }
        v60 = *v56;
        if ( v56 + 1 < v56 )
          goto LABEL_130;
        v61 = 0LL;
        if ( v60 )
          v61 = v56 + 1;
        if ( v49 > 9 )
        {
          for ( jj = 0; jj < 9; ++jj )
          {
            v63 = *v42;
            v64 = v42 + 1;
            if ( v42 + 1 < v42 )
              goto LABEL_130;
            v42 = (unsigned int *)((char *)v64 + v63);
            if ( (unsigned int *)((char *)v64 + v63) < v64 )
              goto LABEL_130;
          }
          v65 = *v42;
          if ( v42 + 1 < v42 )
            goto LABEL_130;
          v66 = 0LL;
          if ( v65 )
            v66 = v42 + 1;
          if ( qword_140D2D438 )
            v67 = qword_140D2D438(v7, P, v48, v55, v54, v61, v60, v66, v65);
          else
            v67 = -1073741637;
          v8 = v67;
          if ( v67 < 0 )
            goto LABEL_131;
          v68 = *(_DWORD *)(a2 + 32);
          if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
          {
            v69 = *(_DWORD *)(a2 + 16) + 52;
            if ( v69 >= *(_DWORD *)(a2 + 16) + 48 )
            {
              v8 = v69 + v68 < v69 ? 0xC0000095 : 0;
              if ( v69 + v68 < v69 )
                goto LABEL_131;
              *(_DWORD *)(a4 + 4) = 20;
              v70 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
              if ( !v70 )
              {
                v8 = -1073741801;
                goto LABEL_131;
              }
              *(_QWORD *)(a4 + 8) = v70;
              *(_DWORD *)a4 = 0;
              v71 = v67 | 0x10000000;
              if ( v70 + 1 >= v70 )
              {
                if ( v70 + 2 > (_DWORD *)((char *)v70 + *(unsigned int *)(a4 + 4)) )
                  goto LABEL_116;
                *v70 = 4;
                v70[1] = v71;
                v72 = ++*(_DWORD *)a4;
                v73 = *(_QWORD *)(a4 + 8);
                if ( !v73 )
                {
                  v74 = *(_DWORD *)(a4 + 4);
                  v75 = -1;
                  v76 = v74 + 12;
                  if ( v74 + 12 >= v74 )
                    v75 = v74 + 12;
                  v8 = v76 < v74 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v75;
                  if ( v76 >= v74 )
                  {
                    v8 = 0;
                    *(_DWORD *)a4 = v72 + 1;
                  }
                  goto LABEL_131;
                }
                v77 = *(_QWORD *)(a4 + 8);
                v78 = 0;
                if ( v72 )
                {
                  while ( 1 )
                  {
                    v79 = *(_DWORD *)v77 + 4;
                    if ( *(_DWORD *)v77 >= 0xFFFFFFFC || v77 + v79 < v77 )
                      break;
                    ++v78;
                    v77 += v79;
                    if ( v78 >= v72 )
                      goto LABEL_126;
                  }
                }
                else
                {
LABEL_126:
                  if ( v77 + 4 >= v77 )
                  {
                    v8 = 0;
                    if ( v77 + 12 <= v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      v80 = v84;
                      *(_DWORD *)v77 = 8;
                      *(_QWORD *)(v77 + 4) = v80;
                      ++*(_DWORD *)a4;
                      goto LABEL_131;
                    }
LABEL_116:
                    v8 = -1073741789;
                    goto LABEL_131;
                  }
                }
              }
              v8 = -1073741675;
              goto LABEL_131;
            }
          }
LABEL_130:
          v8 = -1073741675;
          goto LABEL_131;
        }
      }
    }
  }
  v8 = -1073741811;
LABEL_131:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v82 )
    ExFreePoolWithTag(v82, 0x20534C53u);
  return (unsigned int)v8;
}
