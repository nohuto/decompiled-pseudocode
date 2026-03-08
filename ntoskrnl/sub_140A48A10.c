/*
 * XREFs of sub_140A48A10 @ 0x140A48A10
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A48A10(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID v5; // r11
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r10
  unsigned int *v10; // r9
  unsigned int v11; // r9d
  __int64 *v12; // rbp
  __int64 v13; // rbp
  unsigned int *v14; // rax
  unsigned int j; // r9d
  __int64 v16; // r10
  unsigned int *v17; // rdx
  unsigned int v18; // r9d
  unsigned int *v19; // rdx
  unsigned int *v20; // rax
  unsigned int v21; // ebx
  unsigned int *v22; // rax
  unsigned int k; // r9d
  __int64 v24; // r10
  unsigned int *v25; // rdx
  unsigned int v26; // r15d
  unsigned int *v27; // rdi
  signed int v28; // ebx
  unsigned int *v29; // rax
  unsigned int m; // r9d
  __int64 v31; // r10
  unsigned int *v32; // rdx
  unsigned int v33; // r13d
  unsigned int *v34; // r12
  unsigned int n; // edx
  __int64 v36; // rax
  unsigned int *v37; // rcx
  unsigned int v38; // ecx
  unsigned int *v39; // rdx
  size_t v40; // rsi
  void *Pool2; // rax
  int v42; // ecx
  PVOID v43; // r8
  int v44; // r15d
  unsigned int v45; // r13d
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // eax
  int v49; // r8d
  unsigned int v50; // edx
  unsigned int v51; // eax
  unsigned int *v52; // rdi
  __int64 v53; // rax
  unsigned __int64 *v54; // rbx
  int v55; // r15d
  __int64 v56; // r8
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  _DWORD *ii; // rdx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned __int64 jj; // rdx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  _DWORD *kk; // rdx
  __int64 v68; // rax
  _DWORD *v69; // rax
  int v70; // r8d
  unsigned __int64 v71; // r9
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  _DWORD *mm; // rdx
  __int64 v75; // rax
  _DWORD *v76; // rax
  PVOID P; // [rsp+50h] [rbp-48h]
  int v80; // [rsp+B0h] [rbp+18h] BYREF

  v80 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v80 = 0;
  P = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  v11 = *v7;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v12 = 0LL;
  if ( v11 )
    v12 = (__int64 *)(v7 + 1);
  if ( v11 != 8 )
    return (unsigned int)-1073741789;
  v13 = *v12;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v14 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v16 = *v14;
    v17 = v14 + 1;
    if ( v14 + 1 < v14 )
      return (unsigned int)-1073741675;
    v14 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v14;
  v19 = v14 + 1;
  if ( v14 + 1 < v14 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( v18 )
    v20 = v19;
  if ( v18 != 4 )
    return (unsigned int)-1073741789;
  v21 = *v20;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v22 = v4;
  for ( k = 0; k < 5; ++k )
  {
    v24 = *v22;
    v25 = v22 + 1;
    if ( v22 + 1 < v22 )
      return (unsigned int)-1073741675;
    v22 = (unsigned int *)((char *)v25 + v24);
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      return (unsigned int)-1073741675;
  }
  v26 = *v22;
  if ( v22 + 1 < v22 )
    return (unsigned int)-1073741675;
  v27 = 0LL;
  if ( v26 )
    v27 = v22 + 1;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  v29 = v4;
  for ( m = 0; m < 6; ++m )
  {
    v31 = *v29;
    v32 = v29 + 1;
    if ( v29 + 1 < v29 )
      return (unsigned int)-1073741675;
    v29 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      return (unsigned int)-1073741675;
  }
  v33 = *v29;
  if ( v29 + 1 < v29 )
    return (unsigned int)-1073741675;
  v34 = 0LL;
  if ( v33 )
    v34 = v29 + 1;
  if ( *(_DWORD *)a1 > 7u )
  {
    for ( n = 0; n < 7; ++n )
    {
      v36 = *v4;
      v37 = v4 + 1;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v4 = (unsigned int *)((char *)v37 + v36);
      if ( (unsigned int *)((char *)v37 + v36) < v37 )
        return (unsigned int)-1073741675;
    }
    v38 = *v4;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v39 = 0LL;
    if ( v38 )
      v39 = v4 + 1;
    if ( v38 != 4 )
      return (unsigned int)-1073741789;
    v40 = *v39;
    if ( (_DWORD)v40 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v40, 542329939LL);
      P = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      memset(Pool2, 0, v40);
      v5 = P;
      v42 = 0;
    }
    else
    {
      v42 = 1;
    }
    if ( qword_140D53440 )
    {
      v43 = 0LL;
      if ( !v42 )
        v43 = v5;
      v44 = qword_140D53440(v21, v27, v26, v34, v33, v43, v40, &v80);
    }
    else
    {
      v44 = -1073741637;
    }
    v45 = v40 + 4;
    if ( (unsigned int)v40 >= 0xFFFFFFFC )
      goto LABEL_82;
    if ( v45 >= 0xFFFFFFEC )
      goto LABEL_82;
    v46 = v40 + 32;
    if ( (int)v40 + 32 < (unsigned int)(v40 + 24) )
      goto LABEL_82;
    if ( v46 >= 0xFFFFFFF8 )
      goto LABEL_82;
    v47 = (v40 + 47) & 0xFFFFFFF8;
    if ( v47 < (int)v40 + 40 || v47 + 8 < v47 )
      goto LABEL_82;
    v48 = v47 + 12;
    v49 = *(_DWORD *)(a2 + 16);
    if ( v47 + 12 < 4 || (v50 = v47 + 16, v48 + 4 < v48) || (v51 = v50 + v49, v50 + v49 < v50) || v51 + 4 < v51 )
      v28 = -1073741675;
    else
      v28 = v51 + 4 + *(_DWORD *)(a2 + 32) < v51 + 4 ? 0xC0000095 : 0;
    if ( v28 < 0 )
      goto LABEL_83;
    if ( !a4 )
      goto LABEL_71;
    v28 = 0;
    v52 = (unsigned int *)(a4 + 4);
    *(_DWORD *)(a4 + 4) = v46;
    if ( (_DWORD)v40 == -32 )
    {
      v28 = -1073741762;
    }
    else
    {
      v53 = ExAllocatePool2(256LL, v46, 542329939LL);
      if ( v53 )
      {
        *(_QWORD *)(a4 + 8) = v53;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v28 = -1073741801;
      }
    }
    if ( v28 < 0 )
      goto LABEL_83;
    v54 = (unsigned __int64 *)(a4 + 8);
    v55 = v44 | 0x10000000;
    v56 = *(_QWORD *)(a4 + 8);
    if ( v56 )
    {
      v58 = 0;
      for ( ii = *(_DWORD **)(a4 + 8); v58 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v60) )
      {
        v60 = *ii + 4;
        if ( v60 < 4 || (_DWORD *)((char *)ii + v60) < ii )
          goto LABEL_82;
        ++v58;
      }
      if ( ii + 1 < ii )
        goto LABEL_82;
      if ( (unsigned __int64)(ii + 2) > v56 + (unsigned __int64)*v52 )
        goto LABEL_115;
      *ii = 4;
      ii[1] = v55;
    }
    else
    {
      v57 = *v52 + 8;
      if ( v57 < *v52 )
        goto LABEL_81;
      *v52 = v57;
    }
    ++*(_DWORD *)a4;
    if ( *v54 )
    {
      v62 = 0;
      for ( jj = *v54; v62 < *(_DWORD *)a4; jj += v64 )
      {
        v64 = *(_DWORD *)jj + 4;
        if ( v64 < 4 || jj + v64 < jj )
          goto LABEL_82;
        ++v62;
      }
      if ( jj + 4 < jj )
        goto LABEL_82;
      if ( jj + 12 > *v54 + *v52 )
        goto LABEL_115;
      *(_DWORD *)jj = 8;
      *(_QWORD *)(jj + 4) = v13;
    }
    else
    {
      v61 = *v52 + 12;
      if ( v61 < *v52 )
        goto LABEL_81;
      *v52 = v61;
    }
    ++*(_DWORD *)a4;
    if ( P )
    {
      if ( !(_DWORD)v40 )
      {
LABEL_71:
        v28 = -1073741811;
        goto LABEL_83;
      }
    }
    else if ( (_DWORD)v40 )
    {
      goto LABEL_71;
    }
    if ( *v54 )
    {
      v66 = 0;
      for ( kk = (_DWORD *)*v54; v66 < *(_DWORD *)a4; kk = v69 )
      {
        v68 = (unsigned int)(*kk + 4);
        if ( (unsigned int)v68 < 4 )
          goto LABEL_82;
        v69 = (_DWORD *)((char *)kk + v68);
        if ( v69 < kk )
          goto LABEL_82;
        ++v66;
      }
      if ( kk + 1 < kk )
        goto LABEL_82;
      if ( (unsigned __int64)kk + v40 + 4 > *v54 + *v52 )
        goto LABEL_115;
      *kk = v40;
      if ( P )
        memmove(kk + 1, P, v40);
LABEL_118:
      v70 = v80;
      ++*(_DWORD *)a4;
      v71 = *v54;
      if ( !*v54 )
      {
        v72 = *v52 + 8;
        if ( v72 >= *v52 )
        {
          *v52 = v72;
          ++*(_DWORD *)a4;
          v28 = 0;
          goto LABEL_83;
        }
        goto LABEL_81;
      }
      v73 = 0;
      for ( mm = (_DWORD *)*v54; v73 < *(_DWORD *)a4; mm = v76 )
      {
        v75 = (unsigned int)(*mm + 4);
        if ( (unsigned int)v75 < 4 )
          goto LABEL_82;
        v76 = (_DWORD *)((char *)mm + v75);
        if ( v76 < mm )
          goto LABEL_82;
        ++v73;
      }
      if ( mm + 1 >= mm )
      {
        v28 = 0;
        if ( (unsigned __int64)(mm + 2) <= v71 + *v52 )
        {
          *mm = 4;
          mm[1] = v70;
          ++*(_DWORD *)a4;
LABEL_83:
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v28;
        }
LABEL_115:
        v28 = -1073741789;
        goto LABEL_83;
      }
LABEL_82:
      v28 = -1073741675;
      goto LABEL_83;
    }
    v65 = *v52 + v45;
    if ( v65 >= *v52 )
    {
      *v52 = v65;
      goto LABEL_118;
    }
LABEL_81:
    *v52 = -1;
    goto LABEL_82;
  }
  return (unsigned int)-1073741811;
}
