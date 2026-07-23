/*
 * XREFs of sub_1409632D4 @ 0x1409632D4
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409632D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r11
  unsigned int *v12; // r9
  unsigned int v13; // r9d
  unsigned int *v14; // r8
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // r8
  unsigned int v19; // r8d
  unsigned int *v20; // rcx
  int v21; // edi
  int v22; // edx
  unsigned int v23; // ecx
  _DWORD *PoolWithTag; // rax
  int v25; // edi
  unsigned int v26; // r9d
  __int64 v27; // r10
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int64 k; // rdx
  unsigned int v33; // eax

  v4 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_17;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_17;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_17:
      v7 = -1073741675;
    }
    else
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v14;
      v7 = 0;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v4 = *(_QWORD *)v15;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  if ( !v8 || *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v17 = *v8;
    v18 = v8 + 1;
    if ( v8 + 1 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v19 = *v8;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( v19 )
    v20 = v8 + 1;
  v21 = qword_140D2D398 ? qword_140D2D398(v20, v19) : -1073741637;
  v22 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v23 = *(_DWORD *)(a2 + 16) + 52;
  if ( v23 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v7 = v23 + v22 < v23 ? 0xC0000095 : 0;
  if ( v23 + v22 < v23 )
    return v7;
  *(_DWORD *)(a4 + 4) = 20;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v25 = v21 | 0x10000000;
  if ( PoolWithTag + 1 < PoolWithTag )
    return (unsigned int)-1073741675;
  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *PoolWithTag = 4;
  PoolWithTag[1] = v25;
  v26 = ++*(_DWORD *)a4;
  v27 = *(_QWORD *)(a4 + 8);
  if ( !v27 )
  {
    v28 = *(_DWORD *)(a4 + 4);
    v29 = -1;
    v30 = v28 + 12;
    if ( v28 + 12 >= v28 )
      v29 = v28 + 12;
    v7 = v30 < v28 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v29;
    if ( v30 >= v28 )
    {
      v7 = 0;
      *(_DWORD *)a4 = v26 + 1;
    }
    return v7;
  }
  v31 = 0;
  for ( k = *(_QWORD *)(a4 + 8); v31 < v26; k += v33 )
  {
    v33 = *(_DWORD *)k + 4;
    if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v33 < k )
      return (unsigned int)-1073741675;
    ++v31;
  }
  if ( k + 4 < k )
    return (unsigned int)-1073741675;
  v7 = 0;
  if ( k + 12 > v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *(_DWORD *)k = 8;
  *(_QWORD *)(k + 4) = v4;
  ++*(_DWORD *)a4;
  return v7;
}
