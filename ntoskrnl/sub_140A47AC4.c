/*
 * XREFs of sub_140A47AC4 @ 0x140A47AC4
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A47AC4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r10
  unsigned int *v10; // r9
  unsigned int v11; // r9d
  __int64 *v12; // rbp
  __int64 v13; // rbp
  signed int v14; // ebx
  unsigned int j; // edx
  __int64 v16; // rax
  unsigned int *v17; // rcx
  unsigned int v18; // edx
  _DWORD *v19; // rax
  void *Pool2; // r12
  int v21; // edx
  unsigned int v22; // ecx
  signed int v23; // r15d
  unsigned int *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 *v26; // rbx
  int v27; // r15d
  __int64 v28; // r8
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _DWORD *k; // rdx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned __int64 m; // rdx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // r8
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  _DWORD *n; // rdx
  unsigned int v44; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
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
  if ( *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v16 = *v4;
      v17 = v4 + 1;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v4 = (unsigned int *)((char *)v17 + v16);
      if ( (unsigned int *)((char *)v17 + v16) < v17 )
        return (unsigned int)-1073741675;
    }
    v18 = *v4;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v19 = 0LL;
    if ( v18 )
      v19 = v4 + 1;
    if ( v18 != 4 )
      return (unsigned int)-1073741789;
    if ( *v19 != 2048 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(256LL, 2048LL, 542329939LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !qword_140D53490 )
    {
      v14 = -1073741637;
      goto LABEL_82;
    }
    v14 = qword_140D53490(Pool2);
    if ( v14 < 0 )
      goto LABEL_82;
    v21 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8
      || (v22 = *(_DWORD *)(a2 + 16) + 2108, v23 = v14, v22 < *(_DWORD *)(a2 + 16) + 2104) )
    {
      v14 = -1073741675;
      goto LABEL_82;
    }
    v14 = v22 + v21 < v22 ? 0xC0000095 : 0;
    if ( v22 + v21 < v22 )
    {
LABEL_82:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v14;
    }
    if ( !a4 )
    {
      v14 = -1073741811;
      goto LABEL_82;
    }
    v24 = (unsigned int *)(a4 + 4);
    *(_DWORD *)(a4 + 4) = 2080;
    v14 = 0;
    v25 = ExAllocatePool2(256LL, 2080LL, 542329939LL);
    if ( v25 )
    {
      *(_QWORD *)(a4 + 8) = v25;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v14 = -1073741801;
    }
    if ( v14 < 0 )
      goto LABEL_82;
    v26 = (unsigned __int64 *)(a4 + 8);
    v27 = v23 | 0x10000000;
    v28 = *(_QWORD *)(a4 + 8);
    if ( v28 )
    {
      v30 = 0;
      for ( k = *(_DWORD **)(a4 + 8); v30 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v32) )
      {
        v32 = *k + 4;
        if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v32) < k )
          goto LABEL_61;
        ++v30;
      }
      if ( k + 1 < k )
        goto LABEL_61;
      if ( (unsigned __int64)(k + 2) > v28 + (unsigned __int64)*v24 )
        goto LABEL_68;
      *k = 4;
      k[1] = v27;
    }
    else
    {
      v29 = *v24 + 8;
      if ( v29 < *v24 )
        goto LABEL_60;
      *v24 = v29;
    }
    ++*(_DWORD *)a4;
    if ( *v26 )
    {
      v34 = 0;
      for ( m = *v26; v34 < *(_DWORD *)a4; m += v36 )
      {
        v36 = *(_DWORD *)m + 4;
        if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v36 < m )
          goto LABEL_61;
        ++v34;
      }
      if ( m + 4 < m )
        goto LABEL_61;
      if ( m + 12 > *v26 + *v24 )
        goto LABEL_68;
      *(_DWORD *)m = 8;
      *(_QWORD *)(m + 4) = v13;
    }
    else
    {
      v33 = *v24 + 12;
      if ( v33 < *v24 )
        goto LABEL_60;
      *v24 = v33;
    }
    ++*(_DWORD *)a4;
    if ( !*v26 )
    {
      v37 = *v24 + 2052;
      if ( v37 >= *v24 )
      {
        *v24 = v37;
        goto LABEL_70;
      }
LABEL_60:
      *v24 = -1;
      goto LABEL_61;
    }
    v38 = 0;
    v39 = (_DWORD *)*v26;
    if ( *(_DWORD *)a4 )
    {
      while ( *v39 < 0xFFFFFFFC && (_DWORD *)((char *)v39 + (unsigned int)(*v39 + 4)) >= v39 )
      {
        ++v38;
        v39 = (_DWORD *)((char *)v39 + (unsigned int)(*v39 + 4));
        if ( v38 >= *(_DWORD *)a4 )
          goto LABEL_66;
      }
      goto LABEL_61;
    }
LABEL_66:
    if ( v39 + 1 < v39 )
      goto LABEL_61;
    if ( (unsigned __int64)(v39 + 513) <= *v26 + *v24 )
    {
      *v39 = 2048;
      memmove(v39 + 1, Pool2, 0x800uLL);
LABEL_70:
      ++*(_DWORD *)a4;
      v40 = *v26;
      if ( !*v26 )
      {
        v41 = *v24 + 8;
        if ( v41 >= *v24 )
        {
          *v24 = v41;
          ++*(_DWORD *)a4;
          v14 = 0;
          goto LABEL_82;
        }
        goto LABEL_60;
      }
      v42 = 0;
      for ( n = (_DWORD *)*v26; v42 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v44) )
      {
        v44 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v44) < n )
          goto LABEL_61;
        ++v42;
      }
      if ( n + 1 >= n )
      {
        v14 = 0;
        if ( (unsigned __int64)(n + 2) <= v40 + *v24 )
        {
          *n = 4;
          n[1] = 2048;
          ++*(_DWORD *)a4;
          goto LABEL_82;
        }
        goto LABEL_68;
      }
LABEL_61:
      v14 = -1073741675;
      goto LABEL_82;
    }
LABEL_68:
    v14 = -1073741789;
    goto LABEL_82;
  }
  return (unsigned int)-1073741811;
}
