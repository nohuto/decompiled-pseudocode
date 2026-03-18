/*
 * XREFs of sub_140A0AD40 @ 0x140A0AD40
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0AD40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // r9
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // r12
  unsigned int v17; // r9d
  unsigned int *v18; // rax
  unsigned int j; // edx
  __int64 v20; // r10
  unsigned int *v21; // r8
  unsigned int v22; // r15d
  unsigned int *v23; // r14
  unsigned int *v24; // rax
  unsigned int k; // edx
  __int64 v26; // r10
  unsigned int *v27; // r8
  unsigned int v28; // ebp
  unsigned int *v29; // rbx
  unsigned int m; // edx
  __int64 v31; // rax
  unsigned int *v32; // r8
  unsigned int v33; // r11d
  unsigned int *v34; // r10
  _DWORD *Pool2; // rax
  int v36; // ebx
  unsigned int v37; // r8d
  __int64 v38; // r9
  unsigned int v39; // eax
  unsigned int v41; // ecx
  unsigned __int64 n; // rdx
  unsigned int v43; // eax
  __int64 v44; // r9
  unsigned int v45; // eax
  unsigned int v46; // ecx
  unsigned __int64 v47; // rdx
  unsigned int v48; // eax
  _OWORD v49[2]; // [rsp+50h] [rbp-58h] BYREF

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
            v14 = v9 + 1;
            if ( v9 + 1 < v9 )
              return (unsigned int)-1073741675;
            v15 = 0LL;
            if ( v13 )
              v15 = v14;
            if ( v13 != 8 )
              return (unsigned int)-1073741789;
            v16 = *(_QWORD *)v15;
            v17 = *(_DWORD *)a1;
            if ( *(_DWORD *)a1 > 4u )
            {
              v18 = v8;
              for ( j = 0; j < 4; ++j )
              {
                v20 = *v18;
                v21 = v18 + 1;
                if ( v18 + 1 < v18 )
                  return (unsigned int)-1073741675;
                v18 = (unsigned int *)((char *)v21 + v20);
                if ( (unsigned int *)((char *)v21 + v20) < v21 )
                  return (unsigned int)-1073741675;
              }
              v22 = *v18;
              if ( v18 + 1 < v18 )
                return (unsigned int)-1073741675;
              v23 = 0LL;
              if ( v22 )
                v23 = v18 + 1;
              if ( v17 > 5 )
              {
                v24 = v8;
                for ( k = 0; k < 5; ++k )
                {
                  v26 = *v24;
                  v27 = v24 + 1;
                  if ( v24 + 1 < v24 )
                    return (unsigned int)-1073741675;
                  v24 = (unsigned int *)((char *)v27 + v26);
                  if ( (unsigned int *)((char *)v27 + v26) < v27 )
                    return (unsigned int)-1073741675;
                }
                v28 = *v24;
                if ( v24 + 1 < v24 )
                  return (unsigned int)-1073741675;
                v29 = 0LL;
                if ( v28 )
                  v29 = v24 + 1;
                if ( v17 > 6 )
                {
                  for ( m = 0; m < 6; ++m )
                  {
                    v31 = *v8;
                    v32 = v8 + 1;
                    if ( v8 + 1 < v8 )
                      return (unsigned int)-1073741675;
                    v8 = (unsigned int *)((char *)v32 + v31);
                    if ( (unsigned int *)((char *)v32 + v31) < v32 )
                      return (unsigned int)-1073741675;
                  }
                  v33 = *v8;
                  if ( v8 + 1 < v8 )
                    return (unsigned int)-1073741675;
                  v34 = 0LL;
                  if ( v33 )
                    v34 = v8 + 1;
                  if ( !qword_140D3B3E0 )
                    return (unsigned int)-1073741637;
                  v7 = ((__int64 (__fastcall *)(unsigned int *, _QWORD, unsigned int *, _QWORD, unsigned int *, unsigned int, _OWORD *, int))qword_140D3B458)(
                         v23,
                         v22,
                         v29,
                         v28,
                         v34,
                         v33,
                         v49,
                         32);
                  if ( (v7 & 0x80000000) != 0 )
                    return v7;
                  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0
                    || *(_DWORD *)(a2 + 16) + 84 < (unsigned int)(*(_DWORD *)(a2 + 16) + 80)
                    || *(_DWORD *)(a2 + 16) + 84 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 84) )
                  {
                    return (unsigned int)-1073741675;
                  }
                  *(_DWORD *)(a4 + 4) = 56;
                  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 56LL, 542329939LL);
                  if ( !Pool2 )
                    return (unsigned int)-1073741801;
                  *(_QWORD *)(a4 + 8) = Pool2;
                  *(_DWORD *)a4 = 0;
                  v36 = v7 | 0x10000000;
                  if ( Pool2 + 1 < Pool2 )
                    return (unsigned int)-1073741675;
                  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
                    return (unsigned int)-1073741789;
                  *Pool2 = 4;
                  Pool2[1] = v36;
                  v37 = ++*(_DWORD *)a4;
                  v38 = *(_QWORD *)(a4 + 8);
                  if ( v38 )
                  {
                    v41 = 0;
                    for ( n = *(_QWORD *)(a4 + 8); v41 < v37; n += v43 )
                    {
                      v43 = *(_DWORD *)n + 4;
                      if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v43 < n )
                        return (unsigned int)-1073741675;
                      ++v41;
                    }
                    if ( n + 4 < n )
                      return (unsigned int)-1073741675;
                    if ( n + 12 > v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      return (unsigned int)-1073741789;
                    *(_DWORD *)n = 8;
                    *(_QWORD *)(n + 4) = v16;
                    ++*(_DWORD *)a4;
                  }
                  else
                  {
                    v39 = *(_DWORD *)(a4 + 4);
                    if ( v39 + 12 < v39 )
                      goto LABEL_52;
                    *(_DWORD *)(a4 + 4) = v39 + 12;
                    *(_DWORD *)a4 = v37 + 1;
                  }
                  v44 = *(_QWORD *)(a4 + 8);
                  if ( !v44 )
                  {
                    v45 = *(_DWORD *)(a4 + 4);
                    if ( v45 + 36 >= v45 )
                    {
                      ++*(_DWORD *)a4;
                      v7 = 0;
                      *(_DWORD *)(a4 + 4) = v45 + 36;
                      return v7;
                    }
LABEL_52:
                    *(_DWORD *)(a4 + 4) = -1;
                    return (unsigned int)-1073741675;
                  }
                  v46 = 0;
                  v47 = *(_QWORD *)(a4 + 8);
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v48 = *(_DWORD *)v47 + 4;
                      if ( *(_DWORD *)v47 >= 0xFFFFFFFC || v47 + v48 < v47 )
                        break;
                      ++v46;
                      v47 += v48;
                      if ( v46 >= *(_DWORD *)a4 )
                        goto LABEL_69;
                    }
                  }
                  else
                  {
LABEL_69:
                    if ( v47 + 4 >= v47 )
                    {
                      v7 = 0;
                      if ( v47 + 36 <= v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *(_DWORD *)v47 = 32;
                        *(_OWORD *)(v47 + 4) = v49[0];
                        *(_OWORD *)(v47 + 20) = v49[1];
                        ++*(_DWORD *)a4;
                        return v7;
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
