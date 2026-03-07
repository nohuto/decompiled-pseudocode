__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int v8; // edx
  _DWORD *v10; // rbx
  unsigned int m; // r8d
  __int64 v12; // rax
  unsigned int *v13; // rdx
  unsigned int v14; // r11d
  unsigned int *v15; // r10
  unsigned int *v16; // rax
  unsigned int k; // r9d
  __int64 v18; // rbx
  _DWORD *v19; // rdx
  __int64 *v20; // rsi
  __int64 v21; // rsi
  unsigned int *v22; // rax
  unsigned int j; // r9d
  __int64 v24; // r10
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  unsigned __int64 jj; // r8
  unsigned __int64 v28; // r10
  unsigned int v29; // eax
  __int64 Pool2; // rax
  unsigned int v31; // ecx
  _DWORD *n; // r8
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned __int64 ii; // r8
  unsigned int v36; // eax
  __int64 v37; // r10
  unsigned int *v38; // r9
  unsigned int *v39; // rax
  unsigned int i; // edx
  unsigned int v41; // r9d
  int v42; // r8d
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ebp
  unsigned __int64 *v46; // rdx
  int v47; // ebp
  __int64 v48; // r11
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int128 v51; // [rsp+50h] [rbp-38h]
  __int128 v52; // [rsp+60h] [rbp-28h]

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v39 = v7;
  for ( i = 0; i < 3; ++i )
  {
    v37 = *v39;
    v38 = v39 + 1;
    if ( v39 + 1 < v39 )
      return (unsigned int)-1073741675;
    v39 = (unsigned int *)((char *)v38 + v37);
    if ( (unsigned int *)((char *)v38 + v37) < v38 )
      return (unsigned int)-1073741675;
  }
  v41 = *v39;
  if ( v39 + 1 < v39 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( v41 )
    v20 = (__int64 *)(v39 + 1);
  if ( v41 != 8 )
    return (unsigned int)-1073741789;
  v21 = *v20;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v22 = v7;
  for ( j = 0; j < 4; ++j )
  {
    v24 = *v22;
    v25 = v22 + 1;
    if ( v22 + 1 < v22 )
      return (unsigned int)-1073741675;
    v22 = (unsigned int *)((char *)v25 + v24);
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      return (unsigned int)-1073741675;
  }
  v14 = *v22;
  if ( v22 + 1 < v22 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v14 )
    v15 = v22 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v16 = v7;
  for ( k = 0; k < 5; ++k )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( v16 + 1 < v16 )
      return (unsigned int)-1073741675;
    v16 = (_DWORD *)((char *)v19 + v18);
    if ( (_DWORD *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  if ( v16 + 1 < v16 )
    return (unsigned int)-1073741675;
  v10 = 0LL;
  if ( *v16 )
    v10 = v16 + 1;
  if ( *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v12 = *v7;
      v13 = v7 + 1;
      if ( v7 + 1 < v7 )
        return (unsigned int)-1073741675;
      v7 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        return (unsigned int)-1073741675;
    }
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    if ( !qword_140D53420 )
      return (unsigned int)-1073741637;
    v8 = qword_140D53420(v15, v14, v10);
    if ( (v8 & 0x80000000) == 0 )
    {
      v42 = *(_DWORD *)(a2 + 32);
      v43 = *(_DWORD *)(a2 + 16) + 80;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
      {
        v44 = *(_DWORD *)(a2 + 16) + 84;
        v45 = v8;
        if ( v43 + 4 >= v43 )
        {
          v8 = v44 + v42 < v44 ? 0xC0000095 : 0;
          if ( v44 + v42 < v44 )
            return v8;
          *(_DWORD *)(a4 + 4) = 56;
          Pool2 = ExAllocatePool2(256LL, 56LL, 542329939LL);
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          v46 = (unsigned __int64 *)(a4 + 8);
          *(_QWORD *)(a4 + 8) = Pool2;
          *(_DWORD *)a4 = 0;
          v47 = v45 | 0x10000000;
          v48 = Pool2;
          v31 = 0;
          for ( n = (_DWORD *)Pool2; v31 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v33) )
          {
            v33 = *n + 4;
            if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v33) < n )
              return (unsigned int)-1073741675;
            ++v31;
          }
          if ( n + 1 < n )
            return (unsigned int)-1073741675;
          if ( (unsigned __int64)(n + 2) > v48 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *n = 4;
          n[1] = v47;
          ++*(_DWORD *)a4;
          if ( *v46 )
          {
            v34 = 0;
            for ( ii = *v46; v34 < *(_DWORD *)a4; ii += v36 )
            {
              v36 = *(_DWORD *)ii + 4;
              if ( *(_DWORD *)ii >= 0xFFFFFFFC || ii + v36 < ii )
                return (unsigned int)-1073741675;
              ++v34;
            }
            if ( ii + 4 < ii )
              return (unsigned int)-1073741675;
            if ( ii + 12 > *v46 + *(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *(_DWORD *)ii = 8;
            *(_QWORD *)(ii + 4) = v21;
          }
          else
          {
            v49 = *(_DWORD *)(a4 + 4);
            if ( v49 + 12 < v49 )
              goto LABEL_76;
            *(_DWORD *)(a4 + 4) = v49 + 12;
          }
          ++*(_DWORD *)a4;
          v28 = *v46;
          if ( *v46 )
          {
            v26 = 0;
            for ( jj = *v46; v26 < *(_DWORD *)a4; jj += v29 )
            {
              v29 = *(_DWORD *)jj + 4;
              if ( *(_DWORD *)jj >= 0xFFFFFFFC || jj + v29 < jj )
                return (unsigned int)-1073741675;
              ++v26;
            }
            if ( jj + 4 >= jj )
            {
              v8 = 0;
              if ( jj + 36 <= v28 + *(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)jj = 32;
                *(_OWORD *)(jj + 4) = v51;
                *(_OWORD *)(jj + 20) = v52;
                ++*(_DWORD *)a4;
                return v8;
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741675;
          }
          v50 = *(_DWORD *)(a4 + 4);
          if ( v50 + 36 >= v50 )
          {
            *(_DWORD *)(a4 + 4) = v50 + 36;
            ++*(_DWORD *)a4;
            return 0;
          }
LABEL_76:
          *(_DWORD *)(a4 + 4) = -1;
          return (unsigned int)-1073741675;
        }
      }
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
