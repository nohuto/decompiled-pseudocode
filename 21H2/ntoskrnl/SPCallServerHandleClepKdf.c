/*
 * XREFs of SPCallServerHandleClepKdf @ 0x1406D9B20
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r9
  unsigned int v12; // ebx
  unsigned int v14; // ebp
  unsigned int *v15; // rbx
  unsigned int m; // edx
  __int64 v17; // rax
  unsigned int *v18; // r8
  unsigned int v19; // r11d
  unsigned int *v20; // r10
  unsigned int v21; // r15d
  unsigned int *v22; // r14
  unsigned int *v23; // rax
  unsigned int k; // edx
  __int64 v25; // r10
  unsigned int *v26; // r8
  unsigned int *v27; // rax
  __int64 v28; // r12
  unsigned int v29; // r9d
  unsigned int *v30; // rax
  unsigned int j; // edx
  __int64 v32; // r10
  unsigned int *v33; // r8
  unsigned int v34; // ecx
  unsigned __int64 ii; // rdx
  __int64 v36; // r9
  unsigned int v37; // eax
  _DWORD *Pool2; // rax
  int v39; // ebx
  unsigned int v40; // ecx
  unsigned __int64 n; // rdx
  unsigned int v42; // eax
  unsigned int v43; // r8d
  __int64 v44; // r9
  unsigned int v45; // eax
  unsigned int v46; // r9d
  unsigned int *v47; // rdx
  unsigned int v48; // eax
  _OWORD v49[2]; // [rsp+50h] [rbp-58h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = v7;
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
  v46 = *v8;
  v47 = v8 + 1;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  v27 = 0LL;
  if ( v46 )
    v27 = v47;
  if ( v46 != 8 )
    return (unsigned int)-1073741789;
  v28 = *(_QWORD *)v27;
  v29 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v30 = v7;
  for ( j = 0; j < 4; ++j )
  {
    v32 = *v30;
    v33 = v30 + 1;
    if ( v30 + 1 < v30 )
      return (unsigned int)-1073741675;
    v30 = (unsigned int *)((char *)v33 + v32);
    if ( (unsigned int *)((char *)v33 + v32) < v33 )
      return (unsigned int)-1073741675;
  }
  v21 = *v30;
  if ( v30 + 1 < v30 )
    return (unsigned int)-1073741675;
  v22 = 0LL;
  if ( v21 )
    v22 = v30 + 1;
  if ( v29 <= 5 )
    return (unsigned int)-1073741811;
  v23 = v7;
  for ( k = 0; k < 5; ++k )
  {
    v25 = *v23;
    v26 = v23 + 1;
    if ( v23 + 1 < v23 )
      return (unsigned int)-1073741675;
    v23 = (unsigned int *)((char *)v26 + v25);
    if ( (unsigned int *)((char *)v26 + v25) < v26 )
      return (unsigned int)-1073741675;
  }
  v14 = *v23;
  if ( v23 + 1 < v23 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v14 )
    v15 = v23 + 1;
  if ( v29 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v17 = *v7;
    v18 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v19 = *v7;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( v19 )
    v20 = v7 + 1;
  if ( !qword_140D3B3E0 )
    return (unsigned int)-1073741637;
  v12 = qword_140D3B3E0(v22, v21, v15, v14, v20, v19, v49, 32);
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0
    || *(_DWORD *)(a2 + 16) + 84 < (unsigned int)(*(_DWORD *)(a2 + 16) + 80)
    || *(_DWORD *)(a2 + 16) + 84 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 84) )
  {
    return (unsigned int)-1073741675;
  }
  *(_DWORD *)(a4 + 4) = 56;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 56LL, 542329939LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v39 = v12 | 0x10000000;
  if ( Pool2 + 1 < Pool2 )
    return (unsigned int)-1073741675;
  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *Pool2 = 4;
  Pool2[1] = v39;
  v43 = ++*(_DWORD *)a4;
  v44 = *(_QWORD *)(a4 + 8);
  if ( v44 )
  {
    v40 = 0;
    for ( n = *(_QWORD *)(a4 + 8); v40 < v43; n += v42 )
    {
      v42 = *(_DWORD *)n + 4;
      if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v42 < n )
        return (unsigned int)-1073741675;
      ++v40;
    }
    if ( n + 4 < n )
      return (unsigned int)-1073741675;
    if ( n + 12 > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)n = 8;
    *(_QWORD *)(n + 4) = v28;
    ++*(_DWORD *)a4;
  }
  else
  {
    v45 = *(_DWORD *)(a4 + 4);
    if ( v45 + 12 < v45 )
    {
LABEL_69:
      *(_DWORD *)(a4 + 4) = -1;
      return (unsigned int)-1073741675;
    }
    *(_DWORD *)(a4 + 4) = v45 + 12;
    *(_DWORD *)a4 = v43 + 1;
  }
  v36 = *(_QWORD *)(a4 + 8);
  if ( v36 )
  {
    v34 = 0;
    for ( ii = *(_QWORD *)(a4 + 8); v34 < *(_DWORD *)a4; ii += v37 )
    {
      v37 = *(_DWORD *)ii + 4;
      if ( *(_DWORD *)ii >= 0xFFFFFFFC || ii + v37 < ii )
        return (unsigned int)-1073741675;
      ++v34;
    }
    if ( ii + 4 < ii )
      return (unsigned int)-1073741675;
    v12 = 0;
    if ( ii + 36 <= v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)ii = 32;
      *(_OWORD *)(ii + 4) = v49[0];
      *(_OWORD *)(ii + 20) = v49[1];
      ++*(_DWORD *)a4;
      return v12;
    }
    return (unsigned int)-1073741789;
  }
  v48 = *(_DWORD *)(a4 + 4);
  if ( v48 + 36 < v48 )
    goto LABEL_69;
  ++*(_DWORD *)a4;
  v12 = 0;
  *(_DWORD *)(a4 + 4) = v48 + 36;
  return v12;
}
