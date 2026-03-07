__int64 __fastcall sub_140A476D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // r9
  unsigned int v13; // r9d
  __int64 *v14; // rsi
  __int64 v15; // rsi
  unsigned int *v16; // rax
  unsigned int j; // r9d
  __int64 v18; // r10
  unsigned int *v19; // rdx
  unsigned int v20; // r11d
  unsigned int *v21; // r10
  unsigned int *v22; // rax
  unsigned int k; // r9d
  __int64 v24; // rbx
  _DWORD *v25; // rdx
  _DWORD *v26; // rbx
  unsigned int m; // r8d
  __int64 v28; // rax
  unsigned int *v29; // rdx
  int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ebp
  __int64 Pool2; // rax
  unsigned __int64 *v35; // rdx
  int v36; // ebp
  __int64 v37; // r11
  unsigned int v38; // ecx
  _DWORD *n; // r8
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned __int64 jj; // r8
  unsigned int v44; // eax
  unsigned __int64 v45; // r10
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 ii; // r8
  unsigned int v49; // eax
  __int128 v51; // [rsp+50h] [rbp-38h]
  __int128 v52; // [rsp+60h] [rbp-28h]

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v8 = *(unsigned int **)(a1 + 8);
        if ( v8 )
        {
          if ( *(_DWORD *)a1 > 3u )
          {
            v9 = v8;
            for ( i = 0; i < 3; ++i )
            {
              v11 = *v9;
              v12 = v9 + 1;
              if ( v9 + 1 < v9 )
                return (unsigned int)-1073741675;
              v9 = (unsigned int *)((char *)v12 + v11);
              if ( (unsigned int *)((char *)v12 + v11) < v12 )
                return (unsigned int)-1073741675;
            }
            v13 = *v9;
            if ( v9 + 1 < v9 )
              return (unsigned int)-1073741675;
            v14 = 0LL;
            if ( v13 )
              v14 = (__int64 *)(v9 + 1);
            if ( v13 != 8 )
              return (unsigned int)-1073741789;
            v15 = *v14;
            if ( *(_DWORD *)a1 > 4u )
            {
              v16 = v8;
              for ( j = 0; j < 4; ++j )
              {
                v18 = *v16;
                v19 = v16 + 1;
                if ( v16 + 1 < v16 )
                  return (unsigned int)-1073741675;
                v16 = (unsigned int *)((char *)v19 + v18);
                if ( (unsigned int *)((char *)v19 + v18) < v19 )
                  return (unsigned int)-1073741675;
              }
              v20 = *v16;
              if ( v16 + 1 < v16 )
                return (unsigned int)-1073741675;
              v21 = 0LL;
              if ( v20 )
                v21 = v16 + 1;
              if ( *(_DWORD *)a1 > 5u )
              {
                v22 = v8;
                for ( k = 0; k < 5; ++k )
                {
                  v24 = *v22;
                  v25 = v22 + 1;
                  if ( v22 + 1 < v22 )
                    return (unsigned int)-1073741675;
                  v22 = (_DWORD *)((char *)v25 + v24);
                  if ( (_DWORD *)((char *)v25 + v24) < v25 )
                    return (unsigned int)-1073741675;
                }
                if ( v22 + 1 < v22 )
                  return (unsigned int)-1073741675;
                v26 = 0LL;
                if ( *v22 )
                  v26 = v22 + 1;
                if ( *(_DWORD *)a1 > 6u )
                {
                  for ( m = 0; m < 6; ++m )
                  {
                    v28 = *v8;
                    v29 = v8 + 1;
                    if ( v8 + 1 < v8 )
                      return (unsigned int)-1073741675;
                    v8 = (unsigned int *)((char *)v29 + v28);
                    if ( (unsigned int *)((char *)v29 + v28) < v29 )
                      return (unsigned int)-1073741675;
                  }
                  if ( v8 + 1 < v8 )
                    return (unsigned int)-1073741675;
                  if ( !qword_140D53420 )
                    return (unsigned int)-1073741637;
                  v7 = ((__int64 (__fastcall *)(unsigned int *, _QWORD, _DWORD *))qword_140D53498)(v21, v20, v26);
                  if ( (v7 & 0x80000000) != 0 )
                    return v7;
                  v30 = *(_DWORD *)(a2 + 32);
                  v31 = *(_DWORD *)(a2 + 16) + 80;
                  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
                  {
                    v32 = *(_DWORD *)(a2 + 16) + 84;
                    v33 = v7;
                    if ( v31 + 4 >= v31 )
                    {
                      v7 = v32 + v30 < v32 ? 0xC0000095 : 0;
                      if ( v32 + v30 < v32 )
                        return v7;
                      *(_DWORD *)(a4 + 4) = 56;
                      Pool2 = ExAllocatePool2(256LL, 56LL, 542329939LL);
                      if ( !Pool2 )
                        return (unsigned int)-1073741801;
                      v35 = (unsigned __int64 *)(a4 + 8);
                      *(_QWORD *)(a4 + 8) = Pool2;
                      *(_DWORD *)a4 = 0;
                      v36 = v33 | 0x10000000;
                      v37 = Pool2;
                      v38 = 0;
                      for ( n = (_DWORD *)Pool2; v38 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v40) )
                      {
                        v40 = *n + 4;
                        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v40) < n )
                          return (unsigned int)-1073741675;
                        ++v38;
                      }
                      if ( n + 1 < n )
                        return (unsigned int)-1073741675;
                      if ( (unsigned __int64)(n + 2) > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        return (unsigned int)-1073741789;
                      *n = 4;
                      n[1] = v36;
                      ++*(_DWORD *)a4;
                      if ( !*v35 )
                      {
                        v41 = *(_DWORD *)(a4 + 4);
                        if ( v41 + 12 < v41 )
                        {
LABEL_53:
                          *(_DWORD *)(a4 + 4) = -1;
                          return (unsigned int)-1073741675;
                        }
                        *(_DWORD *)(a4 + 4) = v41 + 12;
LABEL_63:
                        ++*(_DWORD *)a4;
                        v45 = *v35;
                        if ( !*v35 )
                        {
                          v46 = *(_DWORD *)(a4 + 4);
                          if ( v46 + 36 >= v46 )
                          {
                            *(_DWORD *)(a4 + 4) = v46 + 36;
                            ++*(_DWORD *)a4;
                            return 0;
                          }
                          goto LABEL_53;
                        }
                        v47 = 0;
                        for ( ii = *v35; v47 < *(_DWORD *)a4; ii += v49 )
                        {
                          v49 = *(_DWORD *)ii + 4;
                          if ( *(_DWORD *)ii >= 0xFFFFFFFC || ii + v49 < ii )
                            return (unsigned int)-1073741675;
                          ++v47;
                        }
                        if ( ii + 4 >= ii )
                        {
                          v7 = 0;
                          if ( ii + 36 <= v45 + *(unsigned int *)(a4 + 4) )
                          {
                            *(_DWORD *)ii = 32;
                            *(_OWORD *)(ii + 4) = v51;
                            *(_OWORD *)(ii + 20) = v52;
                            ++*(_DWORD *)a4;
                            return v7;
                          }
                          return (unsigned int)-1073741789;
                        }
                        return (unsigned int)-1073741675;
                      }
                      v42 = 0;
                      for ( jj = *v35; v42 < *(_DWORD *)a4; jj += v44 )
                      {
                        v44 = *(_DWORD *)jj + 4;
                        if ( *(_DWORD *)jj >= 0xFFFFFFFC || jj + v44 < jj )
                          return (unsigned int)-1073741675;
                        ++v42;
                      }
                      if ( jj + 4 < jj )
                        return (unsigned int)-1073741675;
                      if ( jj + 12 <= *v35 + *(unsigned int *)(a4 + 4) )
                      {
                        *(_DWORD *)jj = 8;
                        *(_QWORD *)(jj + 4) = v15;
                        goto LABEL_63;
                      }
                      return (unsigned int)-1073741789;
                    }
                  }
                  return (unsigned int)-1073741675;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
