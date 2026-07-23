/*
 * XREFs of SPCallServerHandleCheckLicense @ 0x14072B088
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleCheckLicense(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int i; // r8d
  __int64 v10; // r11
  unsigned int *v11; // r9
  unsigned int v12; // r8d
  unsigned int *v13; // rax
  unsigned int j; // ecx
  __int64 v15; // rax
  unsigned int *v16; // r8
  unsigned int v17; // r8d
  unsigned int *v18; // rcx
  int v19; // edi
  int v20; // edx
  unsigned int v22; // r9d
  unsigned int *v23; // r8
  unsigned int v24; // ecx
  _DWORD *PoolWithTag; // rax
  int v26; // edi
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // ecx
  unsigned __int64 k; // rdx
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // ecx

  v4 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_7;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_7;
    }
    v22 = *v8;
    v23 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_7:
      v12 = -1073741675;
    }
    else
    {
      v13 = 0LL;
      if ( v22 )
        v13 = v23;
      v12 = 0;
      if ( v22 != 8 )
        return (unsigned int)-1073741789;
      v4 = *(_QWORD *)v13;
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  if ( !v7 || *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v15 = *v7;
    v16 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v16 + v15);
    if ( (unsigned int *)((char *)v16 + v15) < v16 )
      return (unsigned int)-1073741675;
  }
  v17 = *v7;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( v17 )
    v18 = v7 + 1;
  v19 = qword_140D2D448 ? qword_140D2D448(v18, v17) : -1073741637;
  v20 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v24 = *(_DWORD *)(a2 + 16) + 52;
  if ( v24 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v12 = v24 + v20 < v24 ? 0xC0000095 : 0;
  if ( v24 + v20 < v24 )
    return v12;
  *(_DWORD *)(a4 + 4) = 20;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v26 = v19 | 0x10000000;
  if ( PoolWithTag + 1 < PoolWithTag )
    return (unsigned int)-1073741675;
  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *PoolWithTag = 4;
  PoolWithTag[1] = v26;
  v27 = ++*(_DWORD *)a4;
  v28 = *(_QWORD *)(a4 + 8);
  if ( v28 )
  {
    v29 = 0;
    for ( k = *(_QWORD *)(a4 + 8); v29 < v27; k += v31 )
    {
      v31 = *(_DWORD *)k + 4;
      if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v31 < k )
        return (unsigned int)-1073741675;
      ++v29;
    }
    if ( k + 4 >= k )
    {
      v12 = 0;
      if ( k + 12 <= v28 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)k = 8;
        *(_QWORD *)(k + 4) = v4;
        ++*(_DWORD *)a4;
        return v12;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  v32 = *(_DWORD *)(a4 + 4);
  v33 = -1;
  v34 = v32 + 12;
  if ( v32 + 12 >= v32 )
    v33 = v32 + 12;
  v12 = v34 < v32 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v33;
  if ( v34 >= v32 )
  {
    v12 = 0;
    *(_DWORD *)a4 = v27 + 1;
  }
  return v12;
}
