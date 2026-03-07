__int64 __fastcall SPCallServerHandleCheckLicense(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 Pool2; // rax
  unsigned int v21; // r9d
  _DWORD *k; // rdx
  unsigned int v23; // ecx
  unsigned __int64 m; // r8
  unsigned int i; // edx
  unsigned int *v26; // rax
  __int64 v27; // r10
  unsigned int *v28; // r9
  unsigned int v29; // r9d
  int v30; // edx
  unsigned int v31; // ecx
  unsigned __int64 *v32; // r8
  int v33; // ebp
  __int64 v34; // r11
  unsigned __int64 v35; // r10
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax

  if ( a2 )
  {
    if ( a4 )
    {
      v12 = *(unsigned int **)(a1 + 8);
      if ( v12 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
          v26 = v12;
          for ( i = 0; i < 3; ++i )
          {
            v27 = *v26;
            v28 = v26 + 1;
            if ( v26 + 1 < v26 )
              return (unsigned int)-1073741675;
            v26 = (unsigned int *)((char *)v28 + v27);
            if ( (unsigned int *)((char *)v28 + v27) < v28 )
              return (unsigned int)-1073741675;
          }
          v29 = *v26;
          if ( v26 + 1 < v26 )
            return (unsigned int)-1073741675;
          v7 = 0LL;
          if ( v29 )
            v7 = (__int64 *)(v26 + 1);
          if ( v29 != 8 )
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
              v16 = qword_140D53458 ? qword_140D53458(v15) : -1073741637;
              v30 = *(_DWORD *)(a2 + 32);
              if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
              {
                v31 = *(_DWORD *)(a2 + 16) + 52;
                if ( v31 >= *(_DWORD *)(a2 + 16) + 48 )
                {
                  v17 = v31 + v30;
                  v18 = v31 + v30 < v31 ? 0xC0000095 : 0;
                  if ( v17 < v31 )
                    return v18;
                  *(_DWORD *)(a4 + 4) = 20;
                  Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
                  if ( !Pool2 )
                    return (unsigned int)-1073741801;
                  v32 = (unsigned __int64 *)(a4 + 8);
                  *(_QWORD *)(a4 + 8) = Pool2;
                  *(_DWORD *)a4 = 0;
                  v33 = v16 | 0x10000000;
                  v34 = Pool2;
                  v21 = 0;
                  for ( k = (_DWORD *)Pool2; v21 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v37) )
                  {
                    v37 = *k + 4;
                    if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v37) < k )
                      return (unsigned int)-1073741675;
                    ++v21;
                  }
                  if ( k + 1 < k )
                    return (unsigned int)-1073741675;
                  if ( (unsigned __int64)(k + 2) <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *k = 4;
                    k[1] = v33;
                    ++*(_DWORD *)a4;
                    v35 = *v32;
                    if ( !*v32 )
                    {
                      v36 = *(_DWORD *)(a4 + 4);
                      if ( v36 + 12 >= v36 )
                      {
                        *(_DWORD *)(a4 + 4) = v36 + 12;
                        ++*(_DWORD *)a4;
                        return 0;
                      }
                      *(_DWORD *)(a4 + 4) = -1;
                      return (unsigned int)-1073741675;
                    }
                    v23 = 0;
                    for ( m = *v32; v23 < *(_DWORD *)a4; m += v38 )
                    {
                      v38 = *(_DWORD *)m + 4;
                      if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v38 < m )
                        return (unsigned int)-1073741675;
                      ++v23;
                    }
                    if ( m + 4 < m )
                      return (unsigned int)-1073741675;
                    v18 = 0;
                    if ( m + 12 <= v35 + *(unsigned int *)(a4 + 4) )
                    {
                      *(_DWORD *)m = 8;
                      *(_QWORD *)(m + 4) = v8;
                      ++*(_DWORD *)a4;
                      return v18;
                    }
                  }
                  return (unsigned int)-1073741789;
                }
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
