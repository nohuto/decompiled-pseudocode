/*
 * XREFs of sub_140A0DD98 @ 0x140A0DD98
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     StringCbLengthW @ 0x140354748 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0DD98(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // r12
  unsigned int j; // edx
  __int64 v18; // rax
  unsigned int *v19; // r8
  size_t v20; // rdx
  _WORD *v21; // rbp
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // r14
  void *Pool2; // rax
  void *v26; // r13
  unsigned int *v27; // rax
  unsigned int k; // ecx
  __int64 v29; // r8
  unsigned int *v30; // rdx
  __int64 v31; // r8
  unsigned int *v32; // rdx
  int v33; // esi
  _DWORD *v34; // rax
  int v35; // esi
  unsigned int v36; // r8d
  __int64 v37; // r9
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  unsigned int m; // ecx
  unsigned int v41; // eax
  __int64 v42; // r8
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  size_t pcbLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 v49; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v49 = 0LL;
  if ( a2 )
  {
    if ( a4 )
    {
      v8 = *(const wchar_t **)(a1 + 8);
      if ( v8 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
          v9 = (unsigned int *)v8;
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
          pcbLength = 0LL;
          if ( *(_DWORD *)a1 > 4u )
          {
            for ( j = 0; j < 4; ++j )
            {
              v18 = *(unsigned int *)v8;
              v19 = (unsigned int *)(v8 + 2);
              if ( v8 + 2 < v8 )
                return (unsigned int)-1073741675;
              v8 = (const wchar_t *)((char *)v19 + v18);
              if ( (unsigned int *)((char *)v19 + v18) < v19 )
                return (unsigned int)-1073741675;
            }
            v20 = *(unsigned int *)v8;
            if ( v8 + 2 >= v8 )
            {
              if ( !(_DWORD)v20 )
                return (unsigned int)-1073741762;
              v21 = v8 + 2;
              if ( (v20 & 1) != 0 )
                return (unsigned int)-1073741762;
              if ( v21[(v20 >> 1) - 1] )
                return (unsigned int)-1073741762;
              if ( StringCbLengthW(v8 + 2, v20, &pcbLength) < 0 )
                return (unsigned int)-1073741762;
              if ( pcbLength + 2 != v22 )
                return (unsigned int)-1073741762;
              v23 = 2 * (pcbLength >> 1) + 2;
              if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
                return (unsigned int)-1073741762;
              v24 = v23;
              Pool2 = (void *)ExAllocatePool2(256LL, v23, 542329939LL);
              v26 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              memmove(Pool2, v21, v24);
              v27 = *(unsigned int **)(a1 + 8);
              if ( !v27 || *(_DWORD *)a1 <= 5u )
              {
                v4 = -1073741811;
LABEL_57:
                ExFreePoolWithTag(v26, 0);
                return v4;
              }
              for ( k = 0; k < 5; ++k )
              {
                v29 = *v27;
                v30 = v27 + 1;
                if ( v27 + 1 < v27 )
                  goto LABEL_56;
                v27 = (unsigned int *)((char *)v30 + v29);
                if ( (unsigned int *)((char *)v30 + v29) < v30 )
                  goto LABEL_56;
              }
              v31 = *v27;
              if ( v27 + 1 >= v27 )
              {
                v32 = 0LL;
                if ( (_DWORD)v31 )
                  v32 = v27 + 1;
                v33 = qword_140D3B3C0 ? qword_140D3B3C0(v26, v32, v31, &v49) : -1073700223;
                if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0
                  && *(_DWORD *)(a2 + 16) + 68 >= (unsigned int)(*(_DWORD *)(a2 + 16) + 64)
                  && *(_DWORD *)(a2 + 16) + 68 + *(_DWORD *)(a2 + 32) >= (unsigned int)(*(_DWORD *)(a2 + 16) + 68) )
                {
                  *(_DWORD *)(a4 + 4) = 40;
                  v34 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 542329939LL);
                  if ( !v34 )
                  {
                    v4 = -1073741801;
                    goto LABEL_57;
                  }
                  *(_QWORD *)(a4 + 8) = v34;
                  *(_DWORD *)a4 = 0;
                  v35 = v33 | 0x10000000;
                  if ( v34 + 1 >= v34 )
                  {
                    if ( v34 + 2 > (_DWORD *)((char *)v34 + *(unsigned int *)(a4 + 4)) )
                    {
LABEL_51:
                      v4 = -1073741789;
                      goto LABEL_57;
                    }
                    *v34 = 4;
                    v34[1] = v35;
                    v36 = ++*(_DWORD *)a4;
                    v37 = *(_QWORD *)(a4 + 8);
                    if ( !v37 )
                    {
                      v38 = *(_DWORD *)(a4 + 4);
                      if ( v38 + 12 < v38 )
                      {
LABEL_55:
                        *(_DWORD *)(a4 + 4) = -1;
                        goto LABEL_56;
                      }
                      *(_DWORD *)(a4 + 4) = v38 + 12;
                      *(_DWORD *)a4 = v36 + 1;
LABEL_65:
                      v42 = *(_QWORD *)(a4 + 8);
                      if ( v42 )
                      {
                        v44 = *(_QWORD *)(a4 + 8);
                        v45 = 0;
                        if ( *(_DWORD *)a4 )
                        {
                          while ( 1 )
                          {
                            v46 = *(_DWORD *)v44 + 4;
                            if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
                              break;
                            ++v45;
                            v44 += v46;
                            if ( v45 >= *(_DWORD *)a4 )
                              goto LABEL_73;
                          }
                        }
                        else
                        {
LABEL_73:
                          if ( v44 + 4 >= v44 )
                          {
                            if ( v44 + 20 > v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                              goto LABEL_51;
                            *(_DWORD *)v44 = 16;
                            *(_OWORD *)(v44 + 4) = v49;
                            goto LABEL_68;
                          }
                        }
                        goto LABEL_56;
                      }
                      v43 = *(_DWORD *)(a4 + 4);
                      if ( v43 + 20 >= v43 )
                      {
                        *(_DWORD *)(a4 + 4) = v43 + 20;
LABEL_68:
                        ++*(_DWORD *)a4;
                        goto LABEL_57;
                      }
                      goto LABEL_55;
                    }
                    v39 = *(_QWORD *)(a4 + 8);
                    for ( m = 0; m < v36; v39 += v41 )
                    {
                      v41 = *(_DWORD *)v39 + 4;
                      if ( *(_DWORD *)v39 >= 0xFFFFFFFC || v39 + v41 < v39 )
                        goto LABEL_56;
                      ++m;
                    }
                    if ( v39 + 4 >= v39 )
                    {
                      if ( v39 + 12 > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_51;
                      *(_DWORD *)v39 = 8;
                      *(_QWORD *)(v39 + 4) = v16;
                      ++*(_DWORD *)a4;
                      goto LABEL_65;
                    }
                  }
                }
              }
LABEL_56:
              v4 = -1073741675;
              goto LABEL_57;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
