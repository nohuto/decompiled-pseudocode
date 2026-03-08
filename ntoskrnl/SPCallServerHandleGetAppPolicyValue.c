/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x1407883F0
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     StringCbLengthW @ 0x14035ACC4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID v7; // r15
  signed int v8; // ebx
  unsigned int *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r9
  unsigned int *v13; // rdx
  unsigned int *v14; // rax
  __int64 v15; // r9
  unsigned int *v16; // rax
  unsigned int v17; // r10d
  void *v18; // rdx
  __int64 v19; // r11
  unsigned int *v20; // r8
  void *v21; // rdi
  unsigned int v22; // r8d
  unsigned int *v23; // rdx
  unsigned int v24; // r11d
  void *v25; // rax
  __int64 v26; // rsi
  unsigned int *v27; // r10
  unsigned int *v28; // rcx
  unsigned int *v29; // rax
  unsigned int v30; // r9d
  void *v31; // rdx
  __int64 v32; // r10
  unsigned int *v33; // r8
  unsigned int v34; // r14d
  unsigned int *v35; // rbx
  unsigned int *v36; // rax
  unsigned int k; // r9d
  __int64 v38; // r10
  unsigned int *v39; // r8
  unsigned int v40; // ecx
  _DWORD *v41; // rdx
  int v42; // r8d
  unsigned int v43; // ecx
  _DWORD *v44; // rdx
  PVOID v45; // r11
  __int64 *v46; // r13
  unsigned int v47; // eax
  size_t v48; // r14
  void *Pool2; // rax
  unsigned int *v50; // rcx
  size_t v51; // r15
  void *v52; // rax
  int v53; // r10d
  PVOID v54; // rcx
  unsigned int v55; // ecx
  unsigned int v56; // edx
  unsigned int v57; // eax
  int v58; // r8d
  unsigned int *v59; // r14
  unsigned __int64 *v60; // rbx
  __int64 v61; // r8
  unsigned int v62; // ecx
  _DWORD *m; // rdx
  unsigned int v64; // eax
  __int64 v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // ecx
  unsigned __int64 n; // rdx
  unsigned int v70; // eax
  unsigned int v71; // ecx
  _DWORD *v72; // rdx
  unsigned int v73; // ecx
  _DWORD *v74; // rdx
  int v75; // r8d
  int v76; // r8d
  unsigned __int64 v77; // r9
  const wchar_t *v78; // rbx
  unsigned int j; // edx
  unsigned int v80; // edx
  __int64 v81; // r13
  bool v82; // cc
  __int64 v83; // rax
  unsigned int *v84; // rcx
  unsigned __int64 v85; // rcx
  __int64 v86; // r11
  unsigned int v87; // r8d
  unsigned int *v88; // rdx
  unsigned int v89; // r10d
  unsigned int *v90; // rax
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // ecx
  int v97; // [rsp+68h] [rbp-9h] BYREF
  int v98; // [rsp+6Ch] [rbp-5h] BYREF
  int v99; // [rsp+70h] [rbp-1h] BYREF
  size_t pcbLength; // [rsp+78h] [rbp+7h] BYREF
  PVOID P; // [rsp+80h] [rbp+Fh]
  unsigned int *v102; // [rsp+88h] [rbp+17h]
  unsigned int v104; // [rsp+E8h] [rbp+77h]
  int v105; // [rsp+E8h] [rbp+77h]

  v4 = *(unsigned int **)(a1 + 8);
  P = 0LL;
  v97 = 0;
  v98 = 0;
  v7 = 0LL;
  v99 = 0;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v10 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v12 = *v10;
    v13 = v10 + 1;
    if ( v10 + 1 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v13 + v12);
    if ( (unsigned int *)((char *)v13 + v12) < v13 )
      return (unsigned int)-1073741675;
  }
  v80 = *v10;
  if ( v10 + 1 < v10 )
    return (unsigned int)-1073741675;
  v46 = 0LL;
  if ( v80 )
    v46 = (__int64 *)(v10 + 1);
  if ( v80 != 8 )
    return (unsigned int)-1073741789;
  v81 = *v46;
  v82 = *(_DWORD *)a1 <= 4u;
  pcbLength = 0LL;
  if ( v82 )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v83 = *v4;
    v84 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v84 + v83);
    if ( (unsigned int *)((char *)v84 + v83) < v84 )
      return (unsigned int)-1073741675;
  }
  v85 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v85 )
    return (unsigned int)-1073741762;
  v78 = (const wchar_t *)(v4 + 1);
  if ( (v85 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v78[(v85 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v78, *v4, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v86 )
    return (unsigned int)-1073741762;
  v47 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v48 = v47;
  Pool2 = (void *)ExAllocatePool2(256LL, v47, 542329939LL);
  v21 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v78, v48);
  v28 = *(unsigned int **)(a1 + 8);
  if ( !v28 || *(_DWORD *)a1 <= 5u )
    goto LABEL_35;
  v29 = *(unsigned int **)(a1 + 8);
  v30 = 0;
  v31 = v21;
  do
  {
    v32 = *v29;
    v33 = v29 + 1;
    v21 = v31;
    if ( v29 + 1 < v29 )
      goto LABEL_31;
    v29 = (unsigned int *)((char *)v33 + v32);
    if ( (unsigned int *)((char *)v33 + v32) < v33 )
      goto LABEL_31;
    ++v30;
  }
  while ( v30 < 5 );
  v34 = *v29;
  if ( v29 + 1 >= v29 )
  {
    v35 = 0LL;
    if ( v34 )
      v35 = v29 + 1;
    if ( *(_DWORD *)a1 <= 6u )
      goto LABEL_35;
    v36 = *(unsigned int **)(a1 + 8);
    for ( k = 0; k < 6; ++k )
    {
      v38 = *v36;
      v39 = v36 + 1;
      v21 = v31;
      if ( v36 + 1 < v36 )
        goto LABEL_31;
      v36 = (unsigned int *)((char *)v39 + v38);
      if ( (unsigned int *)((char *)v39 + v38) < v39 )
        goto LABEL_31;
    }
    v87 = *v36;
    v88 = v36 + 1;
    if ( v36 + 1 >= v36 )
    {
      v14 = 0LL;
      if ( v87 )
        v14 = v88;
      if ( v87 != 4 )
        goto LABEL_163;
      v15 = *v14;
      if ( *(_DWORD *)a1 <= 7u )
        goto LABEL_35;
      v16 = *(unsigned int **)(a1 + 8);
      v17 = 0;
      v18 = v21;
      do
      {
        v19 = *v16;
        v20 = v16 + 1;
        v21 = v18;
        if ( v16 + 1 < v16 )
          goto LABEL_31;
        v16 = (unsigned int *)((char *)v20 + v19);
        if ( (unsigned int *)((char *)v20 + v19) < v20 )
          goto LABEL_31;
        ++v17;
      }
      while ( v17 < 7 );
      v22 = *v16;
      if ( v16 + 1 >= v16 )
      {
        v23 = 0LL;
        if ( v22 )
          v23 = v16 + 1;
        if ( *(_DWORD *)a1 > 8u )
        {
          v24 = 0;
          v25 = v21;
          do
          {
            v26 = *v28;
            v27 = v28 + 1;
            LODWORD(pcbLength) = v15;
            v21 = v25;
            v104 = v22;
            v102 = v23;
            if ( v28 + 1 < v28 )
              goto LABEL_31;
            v28 = (unsigned int *)((char *)v27 + v26);
            if ( (unsigned int *)((char *)v27 + v26) < v27 )
              goto LABEL_31;
            ++v24;
          }
          while ( v24 < 8 );
          v89 = *v28;
          v90 = v28 + 1;
          if ( v28 + 1 >= v28 )
          {
            v50 = 0LL;
            if ( v89 )
              v50 = v90;
            if ( v89 == 4 )
            {
              v51 = *v50;
              if ( (_DWORD)v51 )
              {
                v52 = (void *)ExAllocatePool2(256LL, (unsigned int)v51, 542329939LL);
                P = v52;
                if ( !v52 )
                {
                  v8 = -1073741801;
                  v7 = 0LL;
                  goto LABEL_5;
                }
                memset(v52, 0, (unsigned int)v51);
                v23 = v102;
                v53 = 0;
                v22 = v104;
                v15 = (unsigned int)pcbLength;
              }
              else
              {
                v53 = 1;
              }
              if ( qword_140D533F8 )
              {
                v54 = 0LL;
                if ( !v53 )
                  v54 = P;
                v105 = qword_140D533F8(v21, v35, v34, v15, v23, v22, v54, v51, &v97, &v98, &v99);
              }
              else
              {
                v105 = -1073741637;
              }
              LODWORD(pcbLength) = v51 + 4;
              if ( (unsigned int)v51 >= 0xFFFFFFFC
                || (unsigned int)(v51 + 4) >= 0xFFFFFFEC
                || (int)v51 + 32 < (unsigned int)(v51 + 24)
                || (int)v51 + 40 < (unsigned int)(v51 + 32)
                || (v55 = v51 + 48, (int)v51 + 48 < (unsigned int)(v51 + 40))
                || v55 >= 0xFFFFFFF8
                || (v56 = (v51 + 63) & 0xFFFFFFF8, v56 < (int)v51 + 56)
                || v56 + 8 < v56 )
              {
                v8 = -1073741675;
                goto LABEL_4;
              }
              v57 = v56 + 12;
              v58 = *(_DWORD *)(a2 + 16);
              if ( v56 + 12 < 4
                || (v66 = v56 + 16, v57 + 4 < v57)
                || (v67 = v58 + v66, v58 + v66 < v66)
                || v67 + 4 < v67 )
              {
                v8 = -1073741675;
              }
              else
              {
                v8 = *(_DWORD *)(a2 + 32) + v67 + 4 < v67 + 4 ? 0xC0000095 : 0;
              }
              if ( v8 < 0 )
                goto LABEL_4;
              if ( !a4 )
              {
                v8 = -1073741811;
                goto LABEL_4;
              }
              v8 = 0;
              v59 = (unsigned int *)(a4 + 4);
              *(_DWORD *)(a4 + 4) = v55;
              if ( (_DWORD)v51 == -48 )
              {
                v8 = -1073741762;
              }
              else
              {
                v65 = ExAllocatePool2(256LL, v55, 542329939LL);
                if ( v65 )
                {
                  *(_QWORD *)(a4 + 8) = v65;
                  *(_DWORD *)a4 = 0;
                }
                else
                {
                  v8 = -1073741801;
                }
              }
              if ( v8 < 0 )
                goto LABEL_4;
              v60 = (unsigned __int64 *)(a4 + 8);
              v61 = *(_QWORD *)(a4 + 8);
              if ( v61 )
              {
                v62 = 0;
                for ( m = *(_DWORD **)(a4 + 8); v62 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v64) )
                {
                  v64 = *m + 4;
                  if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v64) < m )
                    goto LABEL_3;
                  ++v62;
                }
                if ( m + 1 < m )
                  goto LABEL_3;
                if ( (unsigned __int64)(m + 2) > v61 + (unsigned __int64)*v59 )
                  goto LABEL_176;
                *m = 4;
                m[1] = v105 | 0x10000000;
              }
              else
              {
                v91 = *v59 + 8;
                if ( v91 < *v59 )
                  goto LABEL_172;
                *v59 = v91;
              }
              ++*(_DWORD *)a4;
              if ( *v60 )
              {
                v68 = 0;
                for ( n = *v60; v68 < *(_DWORD *)a4; n += v70 )
                {
                  v70 = *(_DWORD *)n + 4;
                  if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v70 < n )
                    goto LABEL_3;
                  ++v68;
                }
                if ( n + 4 < n )
                  goto LABEL_3;
                if ( n + 12 > *v60 + *v59 )
                  goto LABEL_176;
                *(_DWORD *)n = 8;
                *(_QWORD *)(n + 4) = v81;
              }
              else
              {
                v92 = *v59 + 12;
                if ( v92 < *v59 )
                  goto LABEL_172;
                *v59 = v92;
              }
              ++*(_DWORD *)a4;
              v45 = P;
              if ( P )
              {
                if ( (_DWORD)v51 )
                  goto LABEL_65;
              }
              else if ( !(_DWORD)v51 )
              {
LABEL_65:
                if ( *v60 )
                {
                  v40 = 0;
                  v41 = (_DWORD *)*v60;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( *v41 < 0xFFFFFFFC && (_DWORD *)((char *)v41 + (unsigned int)(*v41 + 4)) >= v41 )
                    {
                      ++v40;
                      v41 = (_DWORD *)((char *)v41 + (unsigned int)(*v41 + 4));
                      if ( v40 >= *(_DWORD *)a4 )
                        goto LABEL_53;
                    }
                    goto LABEL_68;
                  }
LABEL_53:
                  if ( v41 + 1 < v41 )
                    goto LABEL_3;
                  if ( (unsigned __int64)v41 + v51 + 4 > *v60 + *v59 )
                    goto LABEL_176;
                  *v41 = v51;
                  if ( v45 )
                    memmove(v41 + 1, v45, v51);
                }
                else
                {
                  v93 = *v59 + pcbLength;
                  if ( v93 < *v59 )
                  {
                    *v59 = -1;
LABEL_68:
                    v8 = -1073741675;
LABEL_69:
                    v7 = v45;
                    goto LABEL_5;
                  }
                  *v59 = v93;
                }
                v42 = v97;
                ++*(_DWORD *)a4;
                if ( *v60 )
                {
                  v43 = 0;
                  v44 = (_DWORD *)*v60;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( *v44 < 0xFFFFFFFC && (_DWORD *)((char *)v44 + (unsigned int)(*v44 + 4)) >= v44 )
                    {
                      ++v43;
                      v44 = (_DWORD *)((char *)v44 + (unsigned int)(*v44 + 4));
                      if ( v43 >= *(_DWORD *)a4 )
                        goto LABEL_189;
                    }
                    goto LABEL_3;
                  }
LABEL_189:
                  if ( v44 + 1 < v44 )
                    goto LABEL_3;
                  if ( (unsigned __int64)(v44 + 2) > *v60 + *v59 )
                    goto LABEL_176;
                  *v44 = 4;
                  v44[1] = v42;
                }
                else
                {
                  v94 = *v59 + 8;
                  if ( v94 < *v59 )
                    goto LABEL_172;
                  *v59 = v94;
                }
                v75 = v98;
                ++*(_DWORD *)a4;
                if ( !*v60 )
                {
                  v95 = *v59 + 8;
                  if ( v95 >= *v59 )
                  {
                    *v59 = v95;
                    goto LABEL_138;
                  }
LABEL_172:
                  *v59 = -1;
                  goto LABEL_3;
                }
                v71 = 0;
                v72 = (_DWORD *)*v60;
                if ( *(_DWORD *)a4 )
                {
                  while ( *v72 < 0xFFFFFFFC && (_DWORD *)((char *)v72 + (unsigned int)(*v72 + 4)) >= v72 )
                  {
                    ++v71;
                    v72 = (_DWORD *)((char *)v72 + (unsigned int)(*v72 + 4));
                    if ( v71 >= *(_DWORD *)a4 )
                      goto LABEL_194;
                  }
                  goto LABEL_3;
                }
LABEL_194:
                if ( v72 + 1 < v72 )
                  goto LABEL_3;
                if ( (unsigned __int64)(v72 + 2) <= *v60 + *v59 )
                {
                  *v72 = 4;
                  v72[1] = v75;
LABEL_138:
                  v76 = v99;
                  ++*(_DWORD *)a4;
                  v77 = *v60;
                  if ( !*v60 )
                  {
                    v96 = *v59 + 8;
                    if ( v96 >= *v59 )
                    {
                      *v59 = v96;
                      ++*(_DWORD *)a4;
                      v8 = 0;
                      goto LABEL_4;
                    }
                    goto LABEL_172;
                  }
                  v73 = 0;
                  v74 = (_DWORD *)*v60;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( *v74 < 0xFFFFFFFC && (_DWORD *)((char *)v74 + (unsigned int)(*v74 + 4)) >= v74 )
                    {
                      ++v73;
                      v74 = (_DWORD *)((char *)v74 + (unsigned int)(*v74 + 4));
                      if ( v73 >= *(_DWORD *)a4 )
                        goto LABEL_199;
                    }
                    goto LABEL_3;
                  }
LABEL_199:
                  if ( v74 + 1 >= v74 )
                  {
                    v8 = 0;
                    if ( (unsigned __int64)(v74 + 2) <= v77 + *v59 )
                    {
                      *v74 = 4;
                      v74[1] = v76;
                      ++*(_DWORD *)a4;
                      goto LABEL_4;
                    }
                    goto LABEL_176;
                  }
LABEL_3:
                  v8 = -1073741675;
LABEL_4:
                  v7 = P;
                  goto LABEL_5;
                }
LABEL_176:
                v8 = -1073741789;
                goto LABEL_4;
              }
              v8 = -1073741811;
              goto LABEL_69;
            }
LABEL_163:
            v8 = -1073741789;
            goto LABEL_5;
          }
          goto LABEL_31;
        }
LABEL_35:
        v8 = -1073741811;
        goto LABEL_5;
      }
    }
  }
LABEL_31:
  v8 = -1073741675;
LABEL_5:
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
