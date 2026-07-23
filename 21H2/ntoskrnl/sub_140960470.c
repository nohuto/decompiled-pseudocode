/*
 * XREFs of sub_140960470 @ 0x140960470
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140960470(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v7; // r13d
  unsigned int *v8; // r8
  unsigned int v9; // r11d
  signed int v10; // ebx
  unsigned int *v11; // rax
  unsigned int i; // ecx
  __int64 v13; // r10
  unsigned int *v14; // rdx
  unsigned int v15; // edx
  unsigned int *v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // r10d
  unsigned int *v19; // rax
  unsigned int j; // ecx
  __int64 v21; // r9
  unsigned int *v22; // rdx
  unsigned int v23; // r12d
  unsigned int *v24; // r15
  unsigned int *v25; // rax
  unsigned int k; // ecx
  __int64 v27; // r9
  unsigned int *v28; // rdx
  unsigned int v29; // r14d
  unsigned int *v30; // rbp
  unsigned int m; // ecx
  __int64 v32; // rax
  unsigned int *v33; // rdx
  unsigned int v34; // edx
  unsigned int *v35; // rax
  size_t v36; // rbx
  PVOID PoolWithTag; // rax
  void *v38; // r10
  int v39; // ebp
  unsigned int v40; // r14d
  unsigned int v41; // ecx
  unsigned int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  PVOID v47; // rax
  __int64 v48; // r9
  int v49; // ebp
  int v50; // esi
  unsigned int v51; // edx
  int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  _DWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // r8
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rax
  void *v65; // r11
  __int64 v66; // r8
  int v67; // r11d
  unsigned int v68; // ecx
  unsigned int v69; // eax
  __int64 v70; // r8
  unsigned int v71; // edx
  int v72; // eax
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  unsigned int *v75; // rdx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  _DWORD *n; // rdx
  unsigned int v79; // eax
  int v81; // [rsp+40h] [rbp-58h] BYREF
  void *Src; // [rsp+48h] [rbp-50h]
  __int64 v83; // [rsp+50h] [rbp-48h]
  unsigned int Size; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  v83 = 0LL;
  Size = 0;
  v7 = 0;
  v8 = *(unsigned int **)(a1 + 8);
  v9 = 0;
  Src = 0LL;
  v81 = 0;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v11 = v8;
    for ( i = 0; i < 3; ++i )
    {
      v13 = *v11;
      v14 = v11 + 1;
      if ( v11 + 1 < v11 )
        goto LABEL_14;
      v11 = (unsigned int *)((char *)v14 + v13);
      if ( (unsigned int *)((char *)v14 + v13) < v14 )
        goto LABEL_14;
    }
    v15 = *v11;
    v16 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
LABEL_14:
      v10 = -1073741675;
    }
    else
    {
      v17 = 0LL;
      if ( v15 )
        v17 = v16;
      v10 = 0;
      if ( v15 != 8 )
        return (unsigned int)-1073741789;
      v83 = *(_QWORD *)v17;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v8 )
    return (unsigned int)-1073741811;
  v18 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v19 = v8;
  for ( j = 0; j < 4; ++j )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( v19 + 1 < v19 )
      return (unsigned int)-1073741675;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  v23 = *v19;
  if ( v19 + 1 < v19 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( v23 )
    v24 = v19 + 1;
  if ( v18 <= 5 )
    return (unsigned int)-1073741811;
  v25 = v8;
  for ( k = 0; k < 5; ++k )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( v25 + 1 < v25 )
      return (unsigned int)-1073741675;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  v29 = *v25;
  if ( v25 + 1 < v25 )
    return (unsigned int)-1073741675;
  v30 = 0LL;
  if ( v29 )
    v30 = v25 + 1;
  if ( v18 > 6 )
  {
    for ( m = 0; m < 6; ++m )
    {
      v32 = *v8;
      v33 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_45;
      v8 = (unsigned int *)((char *)v33 + v32);
      if ( (unsigned int *)((char *)v33 + v32) < v33 )
        goto LABEL_45;
    }
    v34 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_45:
      v10 = -1073741675;
      goto LABEL_46;
    }
    v35 = 0LL;
    if ( v34 )
      v35 = v8 + 1;
    v10 = 0;
    if ( v34 == 4 )
    {
      v9 = *v35;
      Size = *v35;
      goto LABEL_46;
    }
    return (unsigned int)-1073741789;
  }
  v10 = -1073741811;
LABEL_46:
  if ( v10 >= 0 )
  {
    if ( v9 )
    {
      v36 = v9;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20534C53u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, v36);
      v9 = Size;
    }
    else
    {
      v4 = 1;
    }
    if ( qword_140D2D428 )
    {
      v38 = 0LL;
      if ( !v4 )
        v38 = Src;
      v39 = qword_140D2D428(v24, v23, v30, v29, v38, v9, &v81);
    }
    else
    {
      v39 = -1073741637;
    }
    v40 = Size + 4;
    if ( Size >= 0xFFFFFFFC )
    {
      v10 = -1073741675;
    }
    else
    {
      if ( v40 >= 0xFFFFFFEC || (v7 = Size + 32, Size + 32 < Size + 24) )
      {
        v10 = -1073741675;
        goto LABEL_147;
      }
      v10 = 0;
    }
    if ( v10 < 0 )
    {
LABEL_147:
      if ( Src )
        ExFreePoolWithTag(Src, 0x20534C53u);
      return (unsigned int)v10;
    }
    v41 = 0;
    if ( v7 >= 0xFFFFFFF8 )
      goto LABEL_146;
    v42 = (v7 + 15) & 0xFFFFFFF8;
    if ( v42 >= v7 + 8 )
    {
      v41 = v42 + 8;
      if ( v42 + 8 < v42 )
        goto LABEL_74;
      v10 = 0;
    }
    else
    {
      v10 = -1073741675;
    }
    if ( v10 < 0 )
      goto LABEL_147;
    v43 = *(_DWORD *)(a2 + 16);
    v44 = v41 + 4;
    v45 = v41 + 8;
    if ( v45 >= v44 )
    {
      v46 = v45 + v43;
      if ( v45 + v43 >= v45 && v46 + 4 >= v46 )
      {
        v10 = v46 + 4 + *(_DWORD *)(a2 + 32) < v46 + 4 ? 0xC0000095 : 0;
        goto LABEL_75;
      }
    }
LABEL_74:
    v10 = -1073741675;
LABEL_75:
    if ( v10 < 0 )
      goto LABEL_147;
    if ( !a4 )
    {
      v10 = -1073741811;
      goto LABEL_147;
    }
    v10 = 0;
    *(_DWORD *)(a4 + 4) = v7;
    if ( v7 )
    {
      v47 = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
      if ( v47 )
      {
        *(_QWORD *)(a4 + 8) = v47;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741762;
    }
    if ( v10 < 0 )
      goto LABEL_147;
    v48 = *(_QWORD *)(a4 + 8);
    v49 = v39 | 0x10000000;
    v50 = -1;
    if ( v48 )
    {
      v54 = 0;
      v55 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v56 = *v55 + 4;
          if ( *v55 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v55 + v56) < v55 )
            goto LABEL_146;
          ++v54;
          v55 = (_DWORD *)((char *)v55 + v56);
          if ( v54 >= *(_DWORD *)a4 )
            goto LABEL_93;
        }
        v10 = -1073741675;
      }
      else
      {
LABEL_93:
        if ( v55 + 1 < v55 )
          goto LABEL_146;
        v10 = 0;
        if ( (unsigned __int64)(v55 + 2) > v48 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_95;
        *v55 = 4;
        v55[1] = v49;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v51 = *(_DWORD *)(a4 + 4);
      v52 = -1;
      v53 = v51 + 8;
      if ( v51 + 8 >= v51 )
        v52 = v51 + 8;
      v10 = v53 < v51 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v52;
      if ( v53 >= v51 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_99;
      }
    }
    if ( v10 < 0 )
      goto LABEL_147;
LABEL_99:
    v57 = *(_QWORD *)(a4 + 8);
    if ( v57 )
    {
      v61 = 0;
      v62 = *(_QWORD *)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v63 = *(_DWORD *)v62 + 4;
          if ( *(_DWORD *)v62 >= 0xFFFFFFFC )
            break;
          if ( v62 + v63 < v62 )
            goto LABEL_146;
          ++v61;
          v62 += v63;
          if ( v61 >= *(_DWORD *)a4 )
            goto LABEL_108;
        }
        v10 = -1073741675;
      }
      else
      {
LABEL_108:
        if ( v62 + 4 < v62 )
          goto LABEL_146;
        v10 = 0;
        if ( v62 + 12 > v57 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_95;
        v64 = v83;
        *(_DWORD *)v62 = 8;
        *(_QWORD *)(v62 + 4) = v64;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v58 = *(_DWORD *)(a4 + 4);
      v59 = -1;
      v60 = v58 + 12;
      if ( v58 + 12 >= v58 )
        v59 = v58 + 12;
      v10 = v60 < v58 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v59;
      if ( v60 >= v58 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_112;
      }
    }
    if ( v10 < 0 )
      goto LABEL_147;
LABEL_112:
    v65 = Src;
    if ( Src )
    {
      if ( !Size )
        goto LABEL_114;
    }
    else if ( Size )
    {
LABEL_114:
      v10 = -1073741811;
      goto LABEL_115;
    }
    v70 = *(_QWORD *)(a4 + 8);
    if ( v70 )
    {
      v74 = 0;
      v75 = *(unsigned int **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
      {
LABEL_134:
        if ( v75 + 1 < v75 )
          goto LABEL_146;
        v10 = 0;
        if ( (unsigned __int64)v75 + Size + 4 > v70 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_95;
        *v75 = Size;
        if ( v65 )
          memmove(v75 + 1, v65, Size);
        ++*(_DWORD *)a4;
        goto LABEL_115;
      }
      while ( 1 )
      {
        v76 = *v75 + 4;
        if ( *v75 >= 0xFFFFFFFC )
          break;
        if ( (unsigned int *)((char *)v75 + v76) < v75 )
          goto LABEL_146;
        ++v74;
        v75 = (unsigned int *)((char *)v75 + v76);
        if ( v74 >= *(_DWORD *)a4 )
          goto LABEL_134;
      }
    }
    else if ( v40 >= 4 )
    {
      v71 = *(_DWORD *)(a4 + 4);
      v72 = -1;
      v73 = v71 + v40;
      if ( v71 + v40 >= v71 )
        v72 = v71 + v40;
      v10 = v73 < v71 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v72;
      if ( v73 >= v71 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_116;
      }
LABEL_115:
      if ( v10 < 0 )
        goto LABEL_147;
LABEL_116:
      v66 = *(_QWORD *)(a4 + 8);
      v67 = v81;
      if ( !v66 )
      {
        v68 = *(_DWORD *)(a4 + 4);
        v69 = v68 + 8;
        if ( v68 + 8 >= v68 )
          v50 = v68 + 8;
        v10 = v69 < v68 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v50;
        if ( v69 >= v68 )
        {
          ++*(_DWORD *)a4;
          v10 = 0;
        }
        goto LABEL_147;
      }
      v77 = 0;
      for ( n = *(_DWORD **)(a4 + 8); v77 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v79) )
      {
        v79 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v79) < n )
          goto LABEL_146;
        ++v77;
      }
      if ( n + 1 >= n )
      {
        v10 = 0;
        if ( (unsigned __int64)(n + 2) <= v66 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *n = 4;
          n[1] = v67;
          ++*(_DWORD *)a4;
          goto LABEL_147;
        }
LABEL_95:
        v10 = -1073741789;
        goto LABEL_147;
      }
LABEL_146:
      v10 = -1073741675;
      goto LABEL_147;
    }
    v10 = -1073741675;
    goto LABEL_115;
  }
  return (unsigned int)v10;
}
