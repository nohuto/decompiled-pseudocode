/*
 * XREFs of sub_1409600CC @ 0x1409600CC
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409600CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r11
  unsigned int *v12; // r10
  unsigned int v13; // r10d
  unsigned int *v14; // r8
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // r8
  unsigned int v19; // r10d
  unsigned int *v20; // rcx
  int v21; // edi
  int v22; // edx
  unsigned int v23; // ecx
  _DWORD *PoolWithTag; // rax
  int v25; // edi
  unsigned int v26; // r9d
  __int64 v27; // r10
  int v28; // r11d
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r10
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  _DWORD *k; // r9
  unsigned int v40; // eax
  _OWORD *v41; // rdx
  __int64 v42; // rcx
  _OWORD *v43; // rax
  __int128 v44; // xmm1
  _BYTE v46[256]; // [rsp+30h] [rbp-128h] BYREF

  v4 = 0LL;
  if ( !a1 || !a2 || !a4 )
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
        goto LABEL_18;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_18;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_18:
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
  if ( qword_140D2D408 )
    v21 = qword_140D2D408(v20, v19, v46, 256LL);
  else
    v21 = -1073741637;
  v7 = v21;
  if ( v21 < 0 )
    return v7;
  v22 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 )
    return (unsigned int)-1073741675;
  v23 = *(_DWORD *)(a2 + 16) + 308;
  if ( v23 < *(_DWORD *)(a2 + 16) + 304 )
    return (unsigned int)-1073741675;
  v7 = v23 + v22 < v23 ? 0xC0000095 : 0;
  if ( v23 + v22 < v23 )
    return v7;
  *(_DWORD *)(a4 + 4) = 280;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
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
  v28 = -1;
  if ( v27 )
  {
    v32 = 0;
    v33 = *(_QWORD *)(a4 + 8);
    if ( v26 )
    {
      while ( 1 )
      {
        v34 = *(_DWORD *)v33 + 4;
        if ( *(_DWORD *)v33 >= 0xFFFFFFFC )
          break;
        if ( v33 + v34 < v33 )
          return (unsigned int)-1073741675;
        ++v32;
        v33 += v34;
        if ( v32 >= v26 )
          goto LABEL_50;
      }
      v7 = -1073741675;
    }
    else
    {
LABEL_50:
      if ( v33 + 4 < v33 )
        return (unsigned int)-1073741675;
      v7 = 0;
      if ( v33 + 12 > v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *(_DWORD *)v33 = 8;
      *(_QWORD *)(v33 + 4) = v4;
      ++*(_DWORD *)a4;
    }
  }
  else
  {
    v29 = *(_DWORD *)(a4 + 4);
    v30 = -1;
    v31 = v29 + 12;
    if ( v29 + 12 >= v29 )
      v30 = v29 + 12;
    v7 = v31 < v29 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v30;
    if ( v31 >= v29 )
    {
      *(_DWORD *)a4 = v26 + 1;
      goto LABEL_54;
    }
  }
  if ( (v7 & 0x80000000) != 0 )
    return v7;
LABEL_54:
  v35 = *(_QWORD *)(a4 + 8);
  if ( !v35 )
  {
    v36 = *(_DWORD *)(a4 + 4);
    v37 = v36 + 260;
    if ( v36 + 260 >= v36 )
      v28 = v36 + 260;
    v7 = v37 < v36 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v28;
    if ( v37 >= v36 )
    {
      ++*(_DWORD *)a4;
      return 0;
    }
    return v7;
  }
  v38 = 0;
  for ( k = *(_DWORD **)(a4 + 8); v38 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v40) )
  {
    v40 = *k + 4;
    if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v40) < k )
      return (unsigned int)-1073741675;
    ++v38;
  }
  v41 = k + 1;
  if ( k + 1 < k )
    return (unsigned int)-1073741675;
  v7 = 0;
  if ( (unsigned __int64)(k + 65) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  v42 = 2LL;
  *k = 256;
  v43 = v46;
  do
  {
    *v41 = *v43;
    v41[1] = v43[1];
    v41[2] = v43[2];
    v41[3] = v43[3];
    v41[4] = v43[4];
    v41[5] = v43[5];
    v41[6] = v43[6];
    v41 += 8;
    v44 = v43[7];
    v43 += 8;
    *(v41 - 1) = v44;
    --v42;
  }
  while ( v42 );
  ++*(_DWORD *)a4;
  return v7;
}
