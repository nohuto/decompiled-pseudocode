/*
 * XREFs of SPCallServerHandleClepKdf @ 0x140615F30
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int i; // r8d
  __int64 v10; // r11
  unsigned int *v11; // r10
  unsigned int v12; // r8d
  unsigned int *v13; // rax
  unsigned int v14; // r10d
  unsigned int *v15; // rax
  unsigned int j; // r8d
  __int64 v17; // r11
  unsigned int *v18; // r9
  unsigned int v19; // r14d
  unsigned int *v20; // rsi
  _DWORD *v21; // rax
  unsigned int k; // r8d
  __int64 v23; // r11
  _DWORD *v24; // r9
  _DWORD *v25; // rdi
  unsigned int m; // ecx
  __int64 v27; // rax
  unsigned int *v28; // r8
  int v29; // edi
  int v30; // edx
  unsigned int v31; // ecx
  unsigned __int64 n; // rdx
  __int64 v34; // r10
  unsigned int v35; // eax
  unsigned int v36; // ecx
  _DWORD *PoolWithTag; // rax
  int v38; // edi
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // r9d
  __int64 v43; // r10
  int v44; // r11d
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // r10d
  unsigned int *v49; // r8
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int128 v52; // [rsp+50h] [rbp-58h]
  __int128 v53; // [rsp+60h] [rbp-48h]

  v4 = 0LL;
  if ( a1 && a2 && a4 )
  {
    v7 = *(unsigned int **)(a1 + 8);
    if ( v7 && *(_DWORD *)a1 > 3u )
    {
      v8 = *(unsigned int **)(a1 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v10 = *v8;
        v11 = v8 + 1;
        if ( v8 + 1 < v8 )
          goto LABEL_9;
        v8 = (unsigned int *)((char *)v11 + v10);
        if ( (unsigned int *)((char *)v11 + v10) < v11 )
          goto LABEL_9;
      }
      v48 = *v8;
      v49 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
LABEL_9:
        v12 = -1073741675;
      }
      else
      {
        v13 = 0LL;
        if ( v48 )
          v13 = v49;
        v12 = 0;
        if ( v48 != 8 )
          return (unsigned int)-1073741789;
        v4 = *(_QWORD *)v13;
      }
    }
    else
    {
      v12 = -1073741811;
    }
    if ( (v12 & 0x80000000) == 0 )
    {
      if ( !v7 )
        return (unsigned int)-1073741811;
      v14 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 <= 4u )
        return (unsigned int)-1073741811;
      v15 = *(unsigned int **)(a1 + 8);
      for ( j = 0; j < 4; ++j )
      {
        v17 = *v15;
        v18 = v15 + 1;
        if ( v15 + 1 < v15 )
          return (unsigned int)-1073741675;
        v15 = (unsigned int *)((char *)v18 + v17);
        if ( (unsigned int *)((char *)v18 + v17) < v18 )
          return (unsigned int)-1073741675;
      }
      v19 = *v15;
      if ( v15 + 1 >= v15 )
      {
        v20 = 0LL;
        if ( v19 )
          v20 = v15 + 1;
        if ( v14 <= 5 )
          return (unsigned int)-1073741811;
        v21 = *(_DWORD **)(a1 + 8);
        for ( k = 0; k < 5; ++k )
        {
          v23 = (unsigned int)*v21;
          v24 = v21 + 1;
          if ( v21 + 1 < v21 )
            return (unsigned int)-1073741675;
          v21 = (_DWORD *)((char *)v24 + v23);
          if ( (_DWORD *)((char *)v24 + v23) < v24 )
            return (unsigned int)-1073741675;
        }
        if ( v21 + 1 >= v21 )
        {
          v25 = 0LL;
          if ( *v21 )
            v25 = v21 + 1;
          if ( v14 > 6 )
          {
            for ( m = 0; m < 6; ++m )
            {
              v27 = *v7;
              v28 = v7 + 1;
              if ( v7 + 1 < v7 )
                return (unsigned int)-1073741675;
              v7 = (unsigned int *)((char *)v28 + v27);
              if ( (unsigned int *)((char *)v28 + v27) < v28 )
                return (unsigned int)-1073741675;
            }
            if ( v7 + 1 < v7 )
              return (unsigned int)-1073741675;
            if ( qword_140D2D410 )
              v29 = qword_140D2D410(v20, v19, v25);
            else
              v29 = -1073741637;
            v12 = v29;
            if ( v29 < 0 )
              return v12;
            v30 = *(_DWORD *)(a2 + 32);
            if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 )
              return (unsigned int)-1073741675;
            v36 = *(_DWORD *)(a2 + 16) + 84;
            if ( v36 < *(_DWORD *)(a2 + 16) + 80 )
              return (unsigned int)-1073741675;
            v12 = v36 + v30 < v36 ? 0xC0000095 : 0;
            if ( v36 + v30 < v36 )
              return v12;
            *(_DWORD *)(a4 + 4) = 56;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741801;
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
            v38 = v29 | 0x10000000;
            if ( PoolWithTag + 1 < PoolWithTag )
              return (unsigned int)-1073741675;
            if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            {
              *PoolWithTag = 4;
              PoolWithTag[1] = v38;
              v42 = ++*(_DWORD *)a4;
              v43 = *(_QWORD *)(a4 + 8);
              v44 = -1;
              if ( v43 )
              {
                v39 = 0;
                v40 = *(_QWORD *)(a4 + 8);
                if ( v42 )
                {
                  while ( 1 )
                  {
                    v41 = *(_DWORD *)v40 + 4;
                    if ( *(_DWORD *)v40 >= 0xFFFFFFFC )
                      break;
                    if ( v40 + v41 < v40 )
                      return (unsigned int)-1073741675;
                    ++v39;
                    v40 += v41;
                    if ( v39 >= v42 )
                      goto LABEL_64;
                  }
                  v12 = -1073741675;
                }
                else
                {
LABEL_64:
                  if ( v40 + 4 < v40 )
                    return (unsigned int)-1073741675;
                  v12 = 0;
                  if ( v40 + 12 > v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    return (unsigned int)-1073741789;
                  *(_DWORD *)v40 = 8;
                  *(_QWORD *)(v40 + 4) = v4;
                  ++*(_DWORD *)a4;
                }
              }
              else
              {
                v45 = *(_DWORD *)(a4 + 4);
                v46 = -1;
                v47 = v45 + 12;
                if ( v45 + 12 >= v45 )
                  v46 = v45 + 12;
                v12 = v47 < v45 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v46;
                if ( v47 >= v45 )
                {
                  *(_DWORD *)a4 = v42 + 1;
LABEL_53:
                  v34 = *(_QWORD *)(a4 + 8);
                  if ( !v34 )
                  {
                    v50 = *(_DWORD *)(a4 + 4);
                    v51 = v50 + 36;
                    if ( v50 + 36 >= v50 )
                      v44 = v50 + 36;
                    v12 = v51 < v50 ? 0xC0000095 : 0;
                    *(_DWORD *)(a4 + 4) = v44;
                    if ( v51 >= v50 )
                    {
                      ++*(_DWORD *)a4;
                      return 0;
                    }
                    return v12;
                  }
                  v31 = 0;
                  for ( n = *(_QWORD *)(a4 + 8); v31 < *(_DWORD *)a4; n += v35 )
                  {
                    v35 = *(_DWORD *)n + 4;
                    if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v35 < n )
                      return (unsigned int)-1073741675;
                    ++v31;
                  }
                  if ( n + 4 < n )
                    return (unsigned int)-1073741675;
                  v12 = 0;
                  if ( n + 36 <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)n = 32;
                    *(_OWORD *)(n + 4) = v52;
                    *(_OWORD *)(n + 20) = v53;
                    ++*(_DWORD *)a4;
                    return v12;
                  }
                  return (unsigned int)-1073741789;
                }
              }
              if ( (v12 & 0x80000000) != 0 )
                return v12;
              goto LABEL_53;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741811;
        }
      }
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v12;
}
