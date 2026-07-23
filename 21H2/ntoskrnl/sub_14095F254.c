/*
 * XREFs of sub_14095F254 @ 0x14095F254
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14095F254(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r11
  unsigned int *v12; // r10
  unsigned int v13; // r10d
  unsigned int *v14; // r8
  unsigned int *v15; // rax
  unsigned int v16; // r10d
  unsigned int *v17; // rax
  unsigned int j; // r8d
  __int64 v19; // r11
  unsigned int *v20; // r9
  unsigned int v21; // ebp
  unsigned int *v22; // rsi
  _DWORD *v23; // rax
  unsigned int k; // r8d
  __int64 v25; // r11
  _DWORD *v26; // r9
  _DWORD *v27; // rdi
  unsigned int m; // ecx
  __int64 v29; // rax
  unsigned int *v30; // r8
  int v31; // edi
  int v32; // edx
  unsigned int v33; // ecx
  _DWORD *PoolWithTag; // rax
  int v35; // edi
  unsigned int v36; // r9d
  __int64 v37; // r10
  int v38; // r11d
  unsigned int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // r10
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 n; // rdx
  unsigned int v50; // eax
  __int128 v52; // [rsp+50h] [rbp-58h]
  __int128 v53; // [rsp+60h] [rbp-48h]

  v4 = 0LL;
  if ( a1 && a2 && a4 )
  {
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
    if ( v8 )
    {
      v16 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 > 4u )
      {
        v17 = *(unsigned int **)(a1 + 8);
        for ( j = 0; j < 4; ++j )
        {
          v19 = *v17;
          v20 = v17 + 1;
          if ( v17 + 1 < v17 )
            return (unsigned int)-1073741675;
          v17 = (unsigned int *)((char *)v20 + v19);
          if ( (unsigned int *)((char *)v20 + v19) < v20 )
            return (unsigned int)-1073741675;
        }
        v21 = *v17;
        if ( v17 + 1 < v17 )
          return (unsigned int)-1073741675;
        v22 = 0LL;
        if ( v21 )
          v22 = v17 + 1;
        if ( v16 > 5 )
        {
          v23 = *(_DWORD **)(a1 + 8);
          for ( k = 0; k < 5; ++k )
          {
            v25 = (unsigned int)*v23;
            v26 = v23 + 1;
            if ( v23 + 1 < v23 )
              return (unsigned int)-1073741675;
            v23 = (_DWORD *)((char *)v26 + v25);
            if ( (_DWORD *)((char *)v26 + v25) < v26 )
              return (unsigned int)-1073741675;
          }
          if ( v23 + 1 < v23 )
            return (unsigned int)-1073741675;
          v27 = 0LL;
          if ( *v23 )
            v27 = v23 + 1;
          if ( v16 > 6 )
          {
            for ( m = 0; m < 6; ++m )
            {
              v29 = *v8;
              v30 = v8 + 1;
              if ( v8 + 1 < v8 )
                return (unsigned int)-1073741675;
              v8 = (unsigned int *)((char *)v30 + v29);
              if ( (unsigned int *)((char *)v30 + v29) < v30 )
                return (unsigned int)-1073741675;
            }
            if ( v8 + 1 < v8 )
              return (unsigned int)-1073741675;
            if ( qword_140D2D410 )
              v31 = ((__int64 (__fastcall *)(unsigned int *, _QWORD, _DWORD *))qword_140D2D488)(v22, v21, v27);
            else
              v31 = -1073741637;
            v7 = v31;
            if ( v31 < 0 )
              return v7;
            v32 = *(_DWORD *)(a2 + 32);
            if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
            {
              v33 = *(_DWORD *)(a2 + 16) + 84;
              if ( v33 >= *(_DWORD *)(a2 + 16) + 80 )
              {
                v7 = v33 + v32 < v33 ? 0xC0000095 : 0;
                if ( v33 + v32 < v33 )
                  return v7;
                *(_DWORD *)(a4 + 4) = 56;
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
                if ( !PoolWithTag )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(a4 + 8) = PoolWithTag;
                *(_DWORD *)a4 = 0;
                v35 = v31 | 0x10000000;
                if ( PoolWithTag + 1 >= PoolWithTag )
                {
                  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
                    return (unsigned int)-1073741789;
                  *PoolWithTag = 4;
                  PoolWithTag[1] = v35;
                  v36 = ++*(_DWORD *)a4;
                  v37 = *(_QWORD *)(a4 + 8);
                  v38 = -1;
                  if ( v37 )
                  {
                    v42 = 0;
                    v43 = *(_QWORD *)(a4 + 8);
                    if ( v36 )
                    {
                      while ( 1 )
                      {
                        v44 = *(_DWORD *)v43 + 4;
                        if ( *(_DWORD *)v43 >= 0xFFFFFFFC )
                          break;
                        if ( v43 + v44 < v43 )
                          return (unsigned int)-1073741675;
                        ++v42;
                        v43 += v44;
                        if ( v42 >= v36 )
                          goto LABEL_64;
                      }
                      v7 = -1073741675;
                    }
                    else
                    {
LABEL_64:
                      if ( v43 + 4 < v43 )
                        return (unsigned int)-1073741675;
                      v7 = 0;
                      if ( v43 + 12 > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        return (unsigned int)-1073741789;
                      *(_DWORD *)v43 = 8;
                      *(_QWORD *)(v43 + 4) = v4;
                      ++*(_DWORD *)a4;
                    }
                  }
                  else
                  {
                    v39 = *(_DWORD *)(a4 + 4);
                    v40 = -1;
                    v41 = v39 + 12;
                    if ( v39 + 12 >= v39 )
                      v40 = v39 + 12;
                    v7 = v41 < v39 ? 0xC0000095 : 0;
                    *(_DWORD *)(a4 + 4) = v40;
                    if ( v41 >= v39 )
                    {
                      *(_DWORD *)a4 = v36 + 1;
LABEL_68:
                      v45 = *(_QWORD *)(a4 + 8);
                      if ( !v45 )
                      {
                        v46 = *(_DWORD *)(a4 + 4);
                        v47 = v46 + 36;
                        if ( v46 + 36 >= v46 )
                          v38 = v46 + 36;
                        v7 = v47 < v46 ? 0xC0000095 : 0;
                        *(_DWORD *)(a4 + 4) = v38;
                        if ( v47 >= v46 )
                        {
                          ++*(_DWORD *)a4;
                          return 0;
                        }
                        return v7;
                      }
                      v48 = 0;
                      for ( n = *(_QWORD *)(a4 + 8); v48 < *(_DWORD *)a4; n += v50 )
                      {
                        v50 = *(_DWORD *)n + 4;
                        if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v50 < n )
                          return (unsigned int)-1073741675;
                        ++v48;
                      }
                      if ( n + 4 < n )
                        return (unsigned int)-1073741675;
                      v7 = 0;
                      if ( n + 36 <= v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *(_DWORD *)n = 32;
                        *(_OWORD *)(n + 4) = v52;
                        *(_OWORD *)(n + 20) = v53;
                        ++*(_DWORD *)a4;
                        return v7;
                      }
                      return (unsigned int)-1073741789;
                    }
                  }
                  if ( (v7 & 0x80000000) != 0 )
                    return v7;
                  goto LABEL_68;
                }
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741811;
}
