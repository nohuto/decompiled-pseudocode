__int64 __fastcall SPCallServerHandleUpdateLicense(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rsi
  unsigned int j; // r8d
  __int64 v10; // rax
  unsigned int *v11; // rdx
  unsigned int *v12; // rcx
  unsigned int v13; // edx
  unsigned int *v14; // rax
  unsigned int *v15; // rcx
  int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int *v19; // rax
  unsigned int i; // edx
  __int64 v21; // r10
  unsigned int *v22; // r9
  unsigned int v23; // r9d
  int v24; // edx
  unsigned int v25; // ecx
  __int64 Pool2; // rax
  unsigned __int64 *v27; // r8
  int v28; // ebp
  __int64 v29; // r11
  unsigned __int64 v30; // r10
  unsigned int v31; // eax
  unsigned int v32; // r9d
  _DWORD *k; // rdx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned __int64 m; // r8
  unsigned int v37; // eax

  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v12 = *(unsigned int **)(a1 + 8);
  if ( !v12 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v19 = v12;
  for ( i = 0; i < 3; ++i )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( v19 + 1 < v19 )
      return (unsigned int)-1073741675;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  v23 = *v19;
  if ( v19 + 1 >= v19 )
  {
    v7 = 0LL;
    if ( v23 )
      v7 = (__int64 *)(v19 + 1);
    if ( v23 != 8 )
      return (unsigned int)-1073741789;
    v8 = *v7;
    if ( *(_DWORD *)a1 > 4u )
    {
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
      if ( v12 + 1 >= v12 )
      {
        v15 = 0LL;
        if ( v13 )
          v15 = v14;
        v16 = qword_140D533A8 ? qword_140D533A8(v15) : -1073741637;
        v24 = *(_DWORD *)(a2 + 32);
        if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        {
          v25 = *(_DWORD *)(a2 + 16) + 52;
          if ( v25 >= *(_DWORD *)(a2 + 16) + 48 )
          {
            v17 = v25 + v24;
            v18 = v25 + v24 < v25 ? 0xC0000095 : 0;
            if ( v17 < v25 )
              return v18;
            *(_DWORD *)(a4 + 4) = 20;
            Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
            if ( !Pool2 )
              return (unsigned int)-1073741801;
            v27 = (unsigned __int64 *)(a4 + 8);
            *(_QWORD *)(a4 + 8) = Pool2;
            *(_DWORD *)a4 = 0;
            v28 = v16 | 0x10000000;
            v29 = Pool2;
            v32 = 0;
            for ( k = (_DWORD *)Pool2; v32 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v34) )
            {
              v34 = *k + 4;
              if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v34) < k )
                return (unsigned int)-1073741675;
              ++v32;
            }
            if ( k + 1 < k )
              return (unsigned int)-1073741675;
            if ( (unsigned __int64)(k + 2) <= v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *k = 4;
              k[1] = v28;
              ++*(_DWORD *)a4;
              v30 = *v27;
              if ( !*v27 )
              {
                v31 = *(_DWORD *)(a4 + 4);
                if ( v31 + 12 >= v31 )
                {
                  *(_DWORD *)(a4 + 4) = v31 + 12;
                  ++*(_DWORD *)a4;
                  return 0;
                }
                *(_DWORD *)(a4 + 4) = -1;
                return (unsigned int)-1073741675;
              }
              v35 = 0;
              for ( m = *v27; v35 < *(_DWORD *)a4; m += v37 )
              {
                v37 = *(_DWORD *)m + 4;
                if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v37 < m )
                  return (unsigned int)-1073741675;
                ++v35;
              }
              if ( m + 4 >= m )
              {
                v18 = 0;
                if ( m + 12 <= v30 + *(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)m = 8;
                  *(_QWORD *)(m + 4) = v8;
                  ++*(_DWORD *)a4;
                  return v18;
                }
                return (unsigned int)-1073741789;
              }
              return (unsigned int)-1073741675;
            }
            return (unsigned int)-1073741789;
          }
        }
      }
      return (unsigned int)-1073741675;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741675;
}
