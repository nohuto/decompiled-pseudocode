/*
 * XREFs of sub_140961530 @ 0x140961530
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140961530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r13d
  void *v7; // r12
  unsigned int *v8; // r8
  signed int v9; // ebx
  unsigned int *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r9
  unsigned int *v13; // rdx
  unsigned int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // rax
  unsigned int j; // ecx
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // edx
  unsigned int *v22; // rcx
  unsigned int *v23; // rax
  const wchar_t *v24; // rsi
  size_t v25; // rdx
  unsigned int k; // r9d
  __int64 v27; // rax
  unsigned int *v28; // rcx
  size_t v29; // rcx
  unsigned int *v30; // rcx
  __int64 v31; // r11
  unsigned int v32; // eax
  size_t v33; // rbp
  PVOID PoolWithTag; // rax
  void *v35; // rbx
  unsigned int v36; // r10d
  unsigned int *v37; // rax
  unsigned int m; // edx
  __int64 v39; // r9
  unsigned int *v40; // r8
  unsigned int v41; // r12d
  unsigned int *v42; // r15
  unsigned int *v44; // rax
  unsigned int n; // r8d
  __int64 v46; // r9
  unsigned int *v47; // rdx
  unsigned int v48; // r14d
  unsigned int *v49; // rbp
  unsigned int ii; // r8d
  __int64 v51; // rax
  unsigned int *v52; // rdx
  unsigned int v53; // r8d
  unsigned int *v54; // rax
  unsigned int v55; // ecx
  size_t v56; // rbx
  int v57; // esi
  PVOID v58; // rax
  void *v59; // rdx
  int v60; // ebp
  unsigned int v61; // r14d
  int v62; // r12d
  unsigned int v63; // ecx
  unsigned int v64; // eax
  int v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // eax
  PVOID v69; // rax
  __int64 v70; // r8
  int v71; // ebp
  int v72; // esi
  unsigned int v73; // edx
  int v74; // eax
  unsigned int v75; // ecx
  _DWORD *v76; // rdx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  __int64 v79; // r8
  unsigned int v80; // edx
  int v81; // eax
  unsigned int v82; // ecx
  unsigned __int64 v83; // rdx
  unsigned int v84; // ecx
  unsigned int v85; // eax
  __int64 v86; // rax
  void *v87; // r11
  __int64 v88; // r8
  int v89; // r11d
  unsigned int v90; // ecx
  unsigned int v91; // eax
  __int64 v92; // r8
  unsigned int v93; // edx
  int v94; // eax
  unsigned int v95; // ecx
  unsigned int *v96; // rdx
  unsigned int kk; // ecx
  unsigned int v98; // eax
  _DWORD *v99; // rdx
  unsigned int jj; // ecx
  unsigned int v101; // eax
  unsigned int v102; // [rsp+50h] [rbp-68h]
  int v103; // [rsp+54h] [rbp-64h] BYREF
  void *Src; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  size_t pcbLength; // [rsp+68h] [rbp-50h] BYREF
  __int64 v107; // [rsp+70h] [rbp-48h]
  unsigned int Size; // [rsp+D0h] [rbp+18h]

  v107 = 0LL;
  P = 0LL;
  v6 = 0;
  v102 = 0;
  v7 = 0LL;
  Size = 0;
  v8 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v103 = 0;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = v8;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_14;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_14;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_14:
      v9 = -1073741675;
    }
    else
    {
      v16 = 0LL;
      if ( v14 )
        v16 = v15;
      v9 = 0;
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v107 = *(_QWORD *)v16;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    v17 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        goto LABEL_28;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_28;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
LABEL_28:
      v9 = -1073741675;
    }
    else
    {
      v23 = 0LL;
      if ( v21 )
        v23 = v22;
      v9 = 0;
      if ( v21 != 4 )
        return (unsigned int)-1073741789;
      v102 = *v23;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  pcbLength = 0LL;
  v24 = 0LL;
  LODWORD(v25) = 0;
  if ( v8 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v27 = *v8;
      v28 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_51;
      v8 = (unsigned int *)((char *)v28 + v27);
      if ( (unsigned int *)((char *)v28 + v27) < v28 )
        goto LABEL_51;
    }
    v29 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_51:
      v9 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v29 )
        v24 = (const wchar_t *)(v8 + 1);
      v9 = 0;
      if ( !(_DWORD)v29 || (v29 & 1) != 0 )
        return (unsigned int)-1073741762;
      if ( v24[(v29 >> 1) - 1] )
        return (unsigned int)-1073741762;
      if ( StringCbLengthW(v24, v29, &pcbLength) < 0 || pcbLength + 2 != v31 )
        return (unsigned int)-1073741762;
      v25 = pcbLength >> 1;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  v32 = 2 * v25 + 2;
  if ( 2 * (_DWORD)v25 == -2 )
    return (unsigned int)-1073741762;
  v33 = v32;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
  v35 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, v24, v33);
  P = v35;
  v30 = *(unsigned int **)(a1 + 8);
  if ( !v30 || (v36 = *(_DWORD *)a1, *(_DWORD *)a1 <= 6u) )
  {
    v9 = -1073741811;
    goto LABEL_68;
  }
  v37 = *(unsigned int **)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v39 = *v37;
    v40 = v37 + 1;
    if ( v37 + 1 >= v37 )
    {
      v37 = (unsigned int *)((char *)v40 + v39);
      if ( (unsigned int *)((char *)v40 + v39) >= v40 )
        continue;
    }
    v9 = -1073741675;
    goto LABEL_68;
  }
  v41 = *v37;
  if ( v37 + 1 < v37 )
  {
    v9 = -1073741675;
    goto LABEL_67;
  }
  v42 = 0LL;
  if ( v41 )
    v42 = v37 + 1;
  if ( v36 <= 7 )
  {
    v9 = -1073741811;
    goto LABEL_67;
  }
  v44 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v46 = *v44;
    v47 = v44 + 1;
    if ( v44 + 1 < v44 )
      goto LABEL_199;
    v44 = (unsigned int *)((char *)v47 + v46);
    if ( (unsigned int *)((char *)v47 + v46) < v47 )
      goto LABEL_199;
  }
  v48 = *v44;
  if ( v44 + 1 < v44 )
  {
LABEL_199:
    v9 = -1073741675;
LABEL_67:
    v7 = 0LL;
    goto LABEL_68;
  }
  v49 = 0LL;
  if ( v48 )
    v49 = v44 + 1;
  if ( v36 > 8 )
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v51 = *v30;
      v52 = v30 + 1;
      if ( v30 + 1 < v30 )
        goto LABEL_92;
      v30 = (unsigned int *)((char *)v52 + v51);
      if ( (unsigned int *)((char *)v52 + v51) < v52 )
        goto LABEL_92;
    }
    v53 = *v30;
    if ( v30 + 1 < v30 )
    {
LABEL_92:
      v9 = -1073741675;
      goto LABEL_93;
    }
    v54 = 0LL;
    if ( v53 )
      v54 = v30 + 1;
    v9 = 0;
    if ( v53 != 4 )
    {
      v9 = -1073741789;
      goto LABEL_67;
    }
    v55 = *v54;
    Size = *v54;
  }
  else
  {
    v9 = -1073741811;
LABEL_93:
    v55 = 0;
  }
  if ( v9 < 0 )
    goto LABEL_67;
  if ( v55 )
  {
    v56 = v55;
    v57 = 0;
    v58 = ExAllocatePoolWithTag(PagedPool, v55, 0x20534C53u);
    Src = v58;
    if ( !v58 )
    {
      v9 = -1073741801;
      v7 = 0LL;
      goto LABEL_68;
    }
    memset(v58, 0, v56);
    v55 = Size;
  }
  else
  {
    v57 = 1;
  }
  if ( qword_140D2D3E0 )
  {
    v59 = 0LL;
    if ( !v57 )
      v59 = Src;
    v60 = qword_140D2D3E0(v102, P, v42, v41, v49, v48, v59, v55, &v103);
  }
  else
  {
    v60 = -1073741637;
  }
  v61 = Size + 4;
  if ( Size < 0xFFFFFFFC )
  {
    if ( v61 < 0xFFFFFFEC )
    {
      v6 = Size + 32;
      if ( Size + 32 >= Size + 24 )
      {
        v9 = 0;
        v62 = -1073741675;
        goto LABEL_112;
      }
    }
LABEL_109:
    v9 = -1073741675;
LABEL_110:
    v7 = Src;
    goto LABEL_68;
  }
  v62 = -1073741675;
  v9 = -1073741675;
LABEL_112:
  if ( v9 < 0 )
    goto LABEL_110;
  v63 = 0;
  if ( v6 >= 0xFFFFFFF8 )
  {
LABEL_114:
    v9 = v62;
    goto LABEL_110;
  }
  v64 = (v6 + 15) & 0xFFFFFFF8;
  if ( v64 < v6 + 8 )
  {
    v9 = -1073741675;
    goto LABEL_119;
  }
  v63 = v64 + 8;
  if ( v64 + 8 < v64 )
    goto LABEL_124;
  v9 = 0;
LABEL_119:
  if ( v9 < 0 )
    goto LABEL_110;
  v65 = *(_DWORD *)(a2 + 16);
  v66 = v63 + 4;
  v67 = v63 + 8;
  if ( v67 < v66 || (v68 = v67 + v65, v67 + v65 < v67) || v68 + 4 < v68 )
LABEL_124:
    v9 = -1073741675;
  else
    v9 = v68 + 4 + *(_DWORD *)(a2 + 32) < v68 + 4 ? 0xC0000095 : 0;
  if ( v9 < 0 )
    goto LABEL_110;
  if ( !a4 )
  {
    v9 = -1073741811;
    goto LABEL_110;
  }
  *(_DWORD *)(a4 + 4) = v6;
  v9 = 0;
  if ( v6 )
  {
    v69 = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
    if ( v69 )
    {
      *(_QWORD *)(a4 + 8) = v69;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v9 = -1073741801;
    }
  }
  else
  {
    v9 = -1073741762;
  }
  if ( v9 < 0 )
    goto LABEL_110;
  v70 = *(_QWORD *)(a4 + 8);
  v71 = v60 | 0x10000000;
  v72 = -1;
  if ( v70 )
  {
    v76 = *(_DWORD **)(a4 + 8);
    v77 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v78 = *v76 + 4;
        if ( *v76 >= 0xFFFFFFFC )
          break;
        if ( (_DWORD *)((char *)v76 + v78) < v76 )
          goto LABEL_114;
        ++v77;
        v76 = (_DWORD *)((char *)v76 + v78);
        if ( v77 >= *(_DWORD *)a4 )
          goto LABEL_143;
      }
      v9 = -1073741675;
      goto LABEL_148;
    }
LABEL_143:
    if ( v76 + 1 < v76 )
      goto LABEL_114;
    v9 = 0;
    if ( (unsigned __int64)(v76 + 2) <= v70 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *v76 = 4;
      v76[1] = v71;
      ++*(_DWORD *)a4;
      goto LABEL_148;
    }
    goto LABEL_145;
  }
  v73 = *(_DWORD *)(a4 + 4);
  v74 = -1;
  v75 = v73 + 8;
  if ( v73 + 8 >= v73 )
    v74 = v73 + 8;
  v9 = v75 < v73 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v74;
  if ( v75 >= v73 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_149;
  }
LABEL_148:
  if ( v9 < 0 )
    goto LABEL_110;
LABEL_149:
  v79 = *(_QWORD *)(a4 + 8);
  if ( v79 )
  {
    v83 = *(_QWORD *)(a4 + 8);
    v84 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v85 = *(_DWORD *)v83 + 4;
        if ( *(_DWORD *)v83 >= 0xFFFFFFFC )
          break;
        if ( v83 + v85 < v83 )
          goto LABEL_114;
        ++v84;
        v83 += v85;
        if ( v84 >= *(_DWORD *)a4 )
          goto LABEL_158;
      }
      v9 = -1073741675;
      goto LABEL_161;
    }
LABEL_158:
    if ( v83 + 4 < v83 )
      goto LABEL_114;
    v9 = 0;
    if ( v83 + 12 <= v79 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v86 = v107;
      *(_DWORD *)v83 = 8;
      *(_QWORD *)(v83 + 4) = v86;
      ++*(_DWORD *)a4;
      goto LABEL_161;
    }
    goto LABEL_145;
  }
  v80 = *(_DWORD *)(a4 + 4);
  v81 = -1;
  v82 = v80 + 12;
  if ( v80 + 12 >= v80 )
    v81 = v80 + 12;
  v9 = v82 < v80 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v81;
  if ( v82 >= v80 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_162;
  }
LABEL_161:
  if ( v9 < 0 )
    goto LABEL_110;
LABEL_162:
  v87 = Src;
  v62 = 0;
  if ( Src )
  {
    if ( Size )
      goto LABEL_173;
LABEL_164:
    v9 = -1073741811;
    goto LABEL_165;
  }
  if ( Size )
    goto LABEL_164;
LABEL_173:
  v92 = *(_QWORD *)(a4 + 8);
  if ( !v92 )
  {
    if ( v61 >= 4 )
    {
      v93 = *(_DWORD *)(a4 + 4);
      v94 = -1;
      v95 = v93 + v61;
      if ( v93 + v61 >= v93 )
        v94 = v93 + v61;
      v9 = v95 < v93 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v94;
      if ( v95 >= v93 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_166;
      }
LABEL_165:
      if ( v9 < 0 )
        goto LABEL_110;
LABEL_166:
      v88 = *(_QWORD *)(a4 + 8);
      v89 = v103;
      if ( !v88 )
      {
        v90 = *(_DWORD *)(a4 + 4);
        v91 = v90 + 8;
        if ( v90 + 8 >= v90 )
          v72 = v90 + 8;
        v9 = v91 < v90 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v72;
        if ( v91 < v90 )
          goto LABEL_110;
        ++*(_DWORD *)a4;
        goto LABEL_114;
      }
      v99 = *(_DWORD **)(a4 + 8);
      for ( jj = 0; jj < *(_DWORD *)a4; v99 = (_DWORD *)((char *)v99 + v101) )
      {
        v101 = *v99 + 4;
        if ( *v99 >= 0xFFFFFFFC || (_DWORD *)((char *)v99 + v101) < v99 )
          goto LABEL_109;
        ++jj;
      }
      if ( v99 + 1 < v99 )
        goto LABEL_109;
      v9 = 0;
      if ( (unsigned __int64)(v99 + 2) <= v88 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v99 = 4;
        v99[1] = v89;
        ++*(_DWORD *)a4;
        goto LABEL_110;
      }
LABEL_145:
      v9 = -1073741789;
      goto LABEL_110;
    }
LABEL_179:
    v9 = -1073741675;
    goto LABEL_165;
  }
  v96 = *(unsigned int **)(a4 + 8);
  for ( kk = 0; kk < *(_DWORD *)a4; v96 = (unsigned int *)((char *)v96 + v98) )
  {
    v98 = *v96 + 4;
    if ( *v96 >= 0xFFFFFFFC )
      goto LABEL_179;
    if ( (unsigned int *)((char *)v96 + v98) < v96 )
      goto LABEL_187;
    ++kk;
  }
  if ( v96 + 1 < v96 )
  {
LABEL_187:
    v9 = -1073741675;
  }
  else
  {
    v9 = 0;
    if ( (unsigned __int64)v96 + Size + 4 <= v92 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *v96 = Size;
      if ( v87 )
        memmove(v96 + 1, v87, Size);
      ++*(_DWORD *)a4;
      goto LABEL_165;
    }
    v9 = -1073741789;
  }
  v7 = Src;
LABEL_68:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v9;
}
