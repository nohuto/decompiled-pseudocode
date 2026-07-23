/*
 * XREFs of sub_140960AA0 @ 0x140960AA0
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140960AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v7; // r13d
  unsigned int v8; // r11d
  unsigned int *v9; // r8
  signed int v10; // ebx
  unsigned int *v11; // rax
  unsigned int i; // ecx
  __int64 v13; // r10
  unsigned int *v14; // rdx
  unsigned int v15; // edx
  unsigned int *v16; // rcx
  unsigned int *v17; // rax
  unsigned int *v18; // rax
  unsigned int j; // ecx
  __int64 v20; // r10
  unsigned int *v21; // rdx
  unsigned int v22; // edx
  unsigned int *v23; // rcx
  unsigned int *v24; // rax
  unsigned int v25; // r10d
  unsigned int *v26; // rax
  unsigned int k; // ecx
  __int64 v28; // r9
  unsigned int *v29; // rdx
  unsigned int v30; // r12d
  unsigned int *v31; // r15
  unsigned int *v32; // rax
  unsigned int m; // ecx
  __int64 v34; // r9
  unsigned int *v35; // rdx
  unsigned int v36; // r14d
  unsigned int *v37; // rbp
  unsigned int n; // edx
  __int64 v39; // rax
  unsigned int *v40; // rcx
  unsigned int v41; // edx
  unsigned int *v42; // rax
  size_t v43; // rbx
  PVOID PoolWithTag; // rax
  void *v45; // r10
  int v46; // ebp
  unsigned int v47; // r14d
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // eax
  PVOID v54; // rax
  __int64 v55; // r8
  int v56; // ebp
  int v57; // esi
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  _DWORD *v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // r8
  unsigned int v65; // edx
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned __int64 v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rax
  void *v72; // r11
  __int64 v73; // r8
  int v74; // r11d
  unsigned int v75; // ecx
  unsigned int v76; // eax
  __int64 v77; // r8
  unsigned int v78; // edx
  int v79; // eax
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  unsigned int *v82; // rdx
  unsigned int v83; // eax
  unsigned int v84; // ecx
  _DWORD *ii; // rdx
  unsigned int v86; // eax
  unsigned int v88; // [rsp+50h] [rbp-58h]
  int v89; // [rsp+54h] [rbp-54h] BYREF
  void *Src; // [rsp+58h] [rbp-50h]
  __int64 v91; // [rsp+60h] [rbp-48h]
  unsigned int Size; // [rsp+C0h] [rbp+18h]

  v4 = 0;
  v91 = 0LL;
  v88 = 0;
  v7 = 0;
  Size = 0;
  v8 = 0;
  v9 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v89 = 0;
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v11 = v9;
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
      v91 = *(_QWORD *)v17;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( v9 && *(_DWORD *)a1 > 4u )
  {
    v18 = v9;
    for ( j = 0; j < 4; ++j )
    {
      v20 = *v18;
      v21 = v18 + 1;
      if ( v18 + 1 < v18 )
        goto LABEL_28;
      v18 = (unsigned int *)((char *)v21 + v20);
      if ( (unsigned int *)((char *)v21 + v20) < v21 )
        goto LABEL_28;
    }
    v22 = *v18;
    v23 = v18 + 1;
    if ( v18 + 1 < v18 )
    {
LABEL_28:
      v10 = -1073741675;
    }
    else
    {
      v24 = 0LL;
      if ( v22 )
        v24 = v23;
      v10 = 0;
      if ( v22 != 4 )
        return (unsigned int)-1073741789;
      v88 = *v24;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v9 )
    return (unsigned int)-1073741811;
  v25 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v26 = v9;
  for ( k = 0; k < 5; ++k )
  {
    v28 = *v26;
    v29 = v26 + 1;
    if ( v26 + 1 < v26 )
      return (unsigned int)-1073741675;
    v26 = (unsigned int *)((char *)v29 + v28);
    if ( (unsigned int *)((char *)v29 + v28) < v29 )
      return (unsigned int)-1073741675;
  }
  v30 = *v26;
  if ( v26 + 1 < v26 )
    return (unsigned int)-1073741675;
  v31 = 0LL;
  if ( v30 )
    v31 = v26 + 1;
  if ( v25 <= 6 )
    return (unsigned int)-1073741811;
  v32 = v9;
  for ( m = 0; m < 6; ++m )
  {
    v34 = *v32;
    v35 = v32 + 1;
    if ( v32 + 1 < v32 )
      return (unsigned int)-1073741675;
    v32 = (unsigned int *)((char *)v35 + v34);
    if ( (unsigned int *)((char *)v35 + v34) < v35 )
      return (unsigned int)-1073741675;
  }
  v36 = *v32;
  if ( v32 + 1 < v32 )
    return (unsigned int)-1073741675;
  v37 = 0LL;
  if ( v36 )
    v37 = v32 + 1;
  if ( v25 > 7 )
  {
    for ( n = 0; n < 7; ++n )
    {
      v39 = *v9;
      v40 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_59;
      v9 = (unsigned int *)((char *)v40 + v39);
      if ( (unsigned int *)((char *)v40 + v39) < v40 )
        goto LABEL_59;
    }
    v41 = *v9;
    if ( v9 + 1 < v9 )
    {
LABEL_59:
      v10 = -1073741675;
      goto LABEL_60;
    }
    v42 = 0LL;
    if ( v41 )
      v42 = v9 + 1;
    v10 = 0;
    if ( v41 == 4 )
    {
      v8 = *v42;
      Size = *v42;
      goto LABEL_60;
    }
    return (unsigned int)-1073741789;
  }
  v10 = -1073741811;
LABEL_60:
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      v43 = v8;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x20534C53u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, v43);
      v8 = Size;
    }
    else
    {
      v4 = 1;
    }
    if ( qword_140D2D430 )
    {
      v45 = 0LL;
      if ( !v4 )
        v45 = Src;
      v46 = qword_140D2D430(v88, v31, v30, v37, v36, v45, v8, &v89);
    }
    else
    {
      v46 = -1073741637;
    }
    v47 = Size + 4;
    if ( Size >= 0xFFFFFFFC )
    {
      v10 = -1073741675;
    }
    else
    {
      if ( v47 >= 0xFFFFFFEC || (v7 = Size + 32, Size + 32 < Size + 24) )
      {
        v10 = -1073741675;
        goto LABEL_161;
      }
      v10 = 0;
    }
    if ( v10 < 0 )
    {
LABEL_161:
      if ( Src )
        ExFreePoolWithTag(Src, 0x20534C53u);
      return (unsigned int)v10;
    }
    v48 = 0;
    if ( v7 >= 0xFFFFFFF8 )
      goto LABEL_160;
    v49 = (v7 + 15) & 0xFFFFFFF8;
    if ( v49 >= v7 + 8 )
    {
      v48 = v49 + 8;
      if ( v49 + 8 < v49 )
        goto LABEL_88;
      v10 = 0;
    }
    else
    {
      v10 = -1073741675;
    }
    if ( v10 < 0 )
      goto LABEL_161;
    v50 = *(_DWORD *)(a2 + 16);
    v51 = v48 + 4;
    v52 = v48 + 8;
    if ( v52 >= v51 )
    {
      v53 = v52 + v50;
      if ( v52 + v50 >= v52 && v53 + 4 >= v53 )
      {
        v10 = v53 + 4 + *(_DWORD *)(a2 + 32) < v53 + 4 ? 0xC0000095 : 0;
        goto LABEL_89;
      }
    }
LABEL_88:
    v10 = -1073741675;
LABEL_89:
    if ( v10 < 0 )
      goto LABEL_161;
    if ( !a4 )
    {
      v10 = -1073741811;
      goto LABEL_161;
    }
    v10 = 0;
    *(_DWORD *)(a4 + 4) = v7;
    if ( v7 )
    {
      v54 = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
      if ( v54 )
      {
        *(_QWORD *)(a4 + 8) = v54;
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
      goto LABEL_161;
    v55 = *(_QWORD *)(a4 + 8);
    v56 = v46 | 0x10000000;
    v57 = -1;
    if ( v55 )
    {
      v61 = 0;
      v62 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v63 = *v62 + 4;
          if ( *v62 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v62 + v63) < v62 )
            goto LABEL_160;
          ++v61;
          v62 = (_DWORD *)((char *)v62 + v63);
          if ( v61 >= *(_DWORD *)a4 )
            goto LABEL_107;
        }
        v10 = -1073741675;
      }
      else
      {
LABEL_107:
        if ( v62 + 1 < v62 )
          goto LABEL_160;
        v10 = 0;
        if ( (unsigned __int64)(v62 + 2) > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_109;
        *v62 = 4;
        v62[1] = v56;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v58 = *(_DWORD *)(a4 + 4);
      v59 = -1;
      v60 = v58 + 8;
      if ( v58 + 8 >= v58 )
        v59 = v58 + 8;
      v10 = v60 < v58 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v59;
      if ( v60 >= v58 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_113;
      }
    }
    if ( v10 < 0 )
      goto LABEL_161;
LABEL_113:
    v64 = *(_QWORD *)(a4 + 8);
    if ( v64 )
    {
      v68 = 0;
      v69 = *(_QWORD *)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v70 = *(_DWORD *)v69 + 4;
          if ( *(_DWORD *)v69 >= 0xFFFFFFFC )
            break;
          if ( v69 + v70 < v69 )
            goto LABEL_160;
          ++v68;
          v69 += v70;
          if ( v68 >= *(_DWORD *)a4 )
            goto LABEL_122;
        }
        v10 = -1073741675;
      }
      else
      {
LABEL_122:
        if ( v69 + 4 < v69 )
          goto LABEL_160;
        v10 = 0;
        if ( v69 + 12 > v64 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_109;
        v71 = v91;
        *(_DWORD *)v69 = 8;
        *(_QWORD *)(v69 + 4) = v71;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v65 = *(_DWORD *)(a4 + 4);
      v66 = -1;
      v67 = v65 + 12;
      if ( v65 + 12 >= v65 )
        v66 = v65 + 12;
      v10 = v67 < v65 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v66;
      if ( v67 >= v65 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_126;
      }
    }
    if ( v10 < 0 )
      goto LABEL_161;
LABEL_126:
    v72 = Src;
    if ( Src )
    {
      if ( !Size )
        goto LABEL_128;
    }
    else if ( Size )
    {
LABEL_128:
      v10 = -1073741811;
      goto LABEL_129;
    }
    v77 = *(_QWORD *)(a4 + 8);
    if ( v77 )
    {
      v81 = 0;
      v82 = *(unsigned int **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
      {
LABEL_148:
        if ( v82 + 1 < v82 )
          goto LABEL_160;
        v10 = 0;
        if ( (unsigned __int64)v82 + Size + 4 > v77 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_109;
        *v82 = Size;
        if ( v72 )
          memmove(v82 + 1, v72, Size);
        ++*(_DWORD *)a4;
        goto LABEL_129;
      }
      while ( 1 )
      {
        v83 = *v82 + 4;
        if ( *v82 >= 0xFFFFFFFC )
          break;
        if ( (unsigned int *)((char *)v82 + v83) < v82 )
          goto LABEL_160;
        ++v81;
        v82 = (unsigned int *)((char *)v82 + v83);
        if ( v81 >= *(_DWORD *)a4 )
          goto LABEL_148;
      }
    }
    else if ( v47 >= 4 )
    {
      v78 = *(_DWORD *)(a4 + 4);
      v79 = -1;
      v80 = v78 + v47;
      if ( v78 + v47 >= v78 )
        v79 = v78 + v47;
      v10 = v80 < v78 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v79;
      if ( v80 >= v78 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_130;
      }
LABEL_129:
      if ( v10 < 0 )
        goto LABEL_161;
LABEL_130:
      v73 = *(_QWORD *)(a4 + 8);
      v74 = v89;
      if ( !v73 )
      {
        v75 = *(_DWORD *)(a4 + 4);
        v76 = v75 + 8;
        if ( v75 + 8 >= v75 )
          v57 = v75 + 8;
        v10 = v76 < v75 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v57;
        if ( v76 >= v75 )
        {
          ++*(_DWORD *)a4;
          v10 = 0;
        }
        goto LABEL_161;
      }
      v84 = 0;
      for ( ii = *(_DWORD **)(a4 + 8); v84 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v86) )
      {
        v86 = *ii + 4;
        if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v86) < ii )
          goto LABEL_160;
        ++v84;
      }
      if ( ii + 1 >= ii )
      {
        v10 = 0;
        if ( (unsigned __int64)(ii + 2) <= v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *ii = 4;
          ii[1] = v74;
          ++*(_DWORD *)a4;
          goto LABEL_161;
        }
LABEL_109:
        v10 = -1073741789;
        goto LABEL_161;
      }
LABEL_160:
      v10 = -1073741675;
      goto LABEL_161;
    }
    v10 = -1073741675;
    goto LABEL_129;
  }
  return (unsigned int)v10;
}
