/*
 * XREFs of sub_140A0B0F0 @ 0x140A0B0F0
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0B0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  int v15; // ebx
  __int64 v16; // rbp
  unsigned int j; // ecx
  __int64 v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // edx
  _DWORD *v21; // rax
  void *Pool2; // r14
  __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // r9
  unsigned int v26; // ecx
  _DWORD *k; // rdx
  unsigned int v28; // eax
  __int64 v29; // r9
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned __int64 m; // rdx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned int v35; // eax
  unsigned int v36; // ecx
  _DWORD *n; // rdx
  unsigned int v38; // eax
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned int v41; // ecx
  _DWORD *v42; // rdx
  unsigned int v43; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( v8 + 1 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  v12 = *v8;
  v13 = v8 + 1;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v12 )
    v14 = v13;
  if ( v12 != 8 )
    return (unsigned int)-1073741789;
  v16 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *v4;
    v19 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  v21 = 0LL;
  if ( v20 )
    v21 = v4 + 1;
  if ( v20 == 4 )
  {
    if ( *v21 != 2048 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(256LL, 2048LL, 542329939LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !qword_140D3B450 )
    {
      v15 = -1073741637;
      goto LABEL_75;
    }
    v15 = qword_140D3B450(Pool2);
    if ( v15 < 0 )
    {
LABEL_75:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v15;
    }
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8
      || *(_DWORD *)(a2 + 16) + 2108 < (unsigned int)(*(_DWORD *)(a2 + 16) + 2104)
      || *(_DWORD *)(a2 + 16) + 2108 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 2108) )
    {
      goto LABEL_56;
    }
    if ( !a4 )
    {
      v15 = -1073741811;
      goto LABEL_75;
    }
    *(_DWORD *)(a4 + 4) = 2080;
    v23 = ExAllocatePool2(256LL, 2080LL, 542329939LL);
    if ( !v23 )
    {
      v15 = -1073741801;
      goto LABEL_75;
    }
    *(_QWORD *)(a4 + 8) = v23;
    *(_DWORD *)a4 = 0;
    v24 = v15 | 0x10000000;
    v25 = v23;
    v26 = 0;
    for ( k = (_DWORD *)v23; v26 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v28) )
    {
      v28 = *k + 4;
      if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v28) < k )
        goto LABEL_56;
      ++v26;
    }
    if ( k + 1 < k )
      goto LABEL_56;
    if ( (unsigned __int64)(k + 2) > v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
LABEL_41:
      v15 = -1073741789;
      goto LABEL_75;
    }
    *k = 4;
    k[1] = v24;
    ++*(_DWORD *)a4;
    v29 = *(_QWORD *)(a4 + 8);
    if ( v29 )
    {
      v31 = 0;
      for ( m = *(_QWORD *)(a4 + 8); v31 < *(_DWORD *)a4; m += v33 )
      {
        v33 = *(_DWORD *)m + 4;
        if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v33 < m )
          goto LABEL_56;
        ++v31;
      }
      if ( m + 4 < m )
        goto LABEL_56;
      if ( m + 12 > v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_41;
      *(_DWORD *)m = 8;
      *(_QWORD *)(m + 4) = v16;
    }
    else
    {
      v30 = *(_DWORD *)(a4 + 4);
      if ( v30 + 12 < v30 )
        goto LABEL_55;
      *(_DWORD *)(a4 + 4) = v30 + 12;
    }
    ++*(_DWORD *)a4;
    v34 = *(_QWORD *)(a4 + 8);
    if ( v34 )
    {
      v36 = 0;
      for ( n = *(_DWORD **)(a4 + 8); v36 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v38) )
      {
        v38 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v38) < n )
          goto LABEL_56;
        ++v36;
      }
      if ( n + 1 < n )
        goto LABEL_56;
      if ( (unsigned __int64)(n + 513) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_41;
      *n = 2048;
      memmove(n + 1, Pool2, 0x800uLL);
LABEL_64:
      ++*(_DWORD *)a4;
      v39 = *(_QWORD *)(a4 + 8);
      if ( !v39 )
      {
        v40 = *(_DWORD *)(a4 + 4);
        if ( v40 + 8 >= v40 )
        {
          ++*(_DWORD *)a4;
          v15 = 0;
          *(_DWORD *)(a4 + 4) = v40 + 8;
          goto LABEL_75;
        }
        goto LABEL_55;
      }
      v41 = 0;
      v42 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v43 = *v42 + 4;
          if ( *v42 >= 0xFFFFFFFC || (_DWORD *)((char *)v42 + v43) < v42 )
            break;
          ++v41;
          v42 = (_DWORD *)((char *)v42 + v43);
          if ( v41 >= *(_DWORD *)a4 )
            goto LABEL_71;
        }
      }
      else
      {
LABEL_71:
        if ( v42 + 1 >= v42 )
        {
          v15 = 0;
          if ( (unsigned __int64)(v42 + 2) <= v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v42 = 4;
            v42[1] = 2048;
            ++*(_DWORD *)a4;
            goto LABEL_75;
          }
          goto LABEL_41;
        }
      }
LABEL_56:
      v15 = -1073741675;
      goto LABEL_75;
    }
    v35 = *(_DWORD *)(a4 + 4);
    if ( v35 + 2052 >= v35 )
    {
      *(_DWORD *)(a4 + 4) = v35 + 2052;
      goto LABEL_64;
    }
LABEL_55:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_56;
  }
  return (unsigned int)-1073741789;
}
