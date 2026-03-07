__int64 __fastcall SPCallServerHandleClepSign(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rsi
  unsigned int j; // r8d
  __int64 v10; // rax
  unsigned int *v11; // rdx
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  unsigned int *v14; // rax
  unsigned int *v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  _DWORD *m; // r8
  _OWORD *v19; // r9
  __int64 v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  _DWORD *v24; // r10
  unsigned int v25; // eax
  unsigned int *v26; // rax
  unsigned int i; // edx
  __int64 v28; // r10
  unsigned int *v29; // r9
  unsigned int v30; // r9d
  int v31; // r8d
  unsigned int v32; // ecx
  unsigned int v33; // ebp
  __int64 Pool2; // rax
  unsigned __int64 *v35; // rdx
  int v36; // ebp
  __int64 v37; // r11
  unsigned int v38; // r9d
  _DWORD *k; // r8
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned __int64 n; // r8
  unsigned int v44; // eax
  unsigned int v45; // eax
  _BYTE v46[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v12 = *(unsigned int **)(a1 + 8);
  if ( !v12 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v26 = v12;
  for ( i = 0; i < 3; ++i )
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
  v7 = 0LL;
  if ( v30 )
    v7 = (__int64 *)(v26 + 1);
  if ( v30 != 8 )
    return (unsigned int)-1073741789;
  v8 = *v7;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v10 = *v12;
    v11 = v12 + 1;
    if ( v12 + 1 < v12 )
      return (unsigned int)-1073741675;
    v12 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  v13 = *v12;
  v14 = v12 + 1;
  if ( v12 + 1 < v12 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( (_DWORD)v13 )
    v15 = v14;
  if ( !qword_140D53418 )
    return (unsigned int)-1073741637;
  v16 = qword_140D53418(v15, v13, v46, 256LL);
  if ( (v16 & 0x80000000) != 0 )
    return v16;
  v31 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 )
    return (unsigned int)-1073741675;
  v32 = *(_DWORD *)(a2 + 16) + 308;
  v33 = v16;
  if ( v32 < *(_DWORD *)(a2 + 16) + 304 )
    return (unsigned int)-1073741675;
  v16 = v31 + v32 < v32 ? 0xC0000095 : 0;
  if ( v31 + v32 >= v32 )
  {
    *(_DWORD *)(a4 + 4) = 280;
    Pool2 = ExAllocatePool2(256LL, 280LL, 542329939LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v35 = (unsigned __int64 *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
    v36 = v33 | 0x10000000;
    v37 = Pool2;
    v38 = 0;
    for ( k = (_DWORD *)Pool2; v38 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v40) )
    {
      v40 = *k + 4;
      if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v40) < k )
        return (unsigned int)-1073741675;
      ++v38;
    }
    if ( k + 1 < k )
      return (unsigned int)-1073741675;
    if ( (unsigned __int64)(k + 2) <= v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *k = 4;
      k[1] = v36;
      ++*(_DWORD *)a4;
      if ( !*v35 )
      {
        v41 = *(_DWORD *)(a4 + 4);
        if ( v41 + 12 < v41 )
          goto LABEL_56;
        *(_DWORD *)(a4 + 4) = v41 + 12;
LABEL_27:
        ++*(_DWORD *)a4;
        v24 = (_DWORD *)*v35;
        if ( *v35 )
        {
          v17 = 0;
          for ( m = (_DWORD *)*v35; v17 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v25) )
          {
            v25 = *m + 4;
            if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v25) < m )
              return (unsigned int)-1073741675;
            ++v17;
          }
          v19 = m + 1;
          if ( m + 1 >= m )
          {
            v16 = 0;
            if ( m + 65 > (_DWORD *)((char *)v24 + *(unsigned int *)(a4 + 4)) )
              return (unsigned int)-1073741789;
            v20 = 2LL;
            *m = 256;
            v21 = v46;
            do
            {
              *v19 = *v21;
              v19[1] = v21[1];
              v19[2] = v21[2];
              v19[3] = v21[3];
              v19[4] = v21[4];
              v19[5] = v21[5];
              v19[6] = v21[6];
              v19 += 8;
              v22 = v21[7];
              v21 += 8;
              *(v19 - 1) = v22;
              --v20;
            }
            while ( v20 );
            ++*(_DWORD *)a4;
            return v16;
          }
          return (unsigned int)-1073741675;
        }
        v45 = *(_DWORD *)(a4 + 4);
        if ( v45 + 260 >= v45 )
        {
          *(_DWORD *)(a4 + 4) = v45 + 260;
          ++*(_DWORD *)a4;
          return 0;
        }
LABEL_56:
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      v42 = 0;
      for ( n = *v35; v42 < *(_DWORD *)a4; n += v44 )
      {
        v44 = *(_DWORD *)n + 4;
        if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v44 < n )
          return (unsigned int)-1073741675;
        ++v42;
      }
      if ( n + 4 < n )
        return (unsigned int)-1073741675;
      if ( n + 12 <= *v35 + *(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)n = 8;
        *(_QWORD *)(n + 4) = v8;
        goto LABEL_27;
      }
    }
    return (unsigned int)-1073741789;
  }
  return v16;
}
