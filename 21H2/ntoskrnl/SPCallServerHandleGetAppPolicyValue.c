/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x1407D45CC
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     StringCbLengthW @ 0x140354748 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r9
  unsigned int *v10; // rdx
  signed int v11; // ebx
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int *v19; // rax
  unsigned int v20; // ebx
  unsigned int *v21; // rax
  unsigned int n; // r8d
  __int64 v23; // r10
  unsigned int *v24; // rdx
  unsigned int v25; // r12d
  unsigned int *v26; // r15
  unsigned int ii; // edx
  __int64 v28; // rax
  unsigned int *v29; // r8
  PVOID v30; // r12
  unsigned int *v31; // rcx
  unsigned int v32; // r8d
  unsigned int *v33; // rax
  size_t v34; // r14
  int v35; // edi
  void *v36; // rax
  unsigned int v37; // r11d
  PVOID v38; // rcx
  int v39; // r15d
  unsigned int v40; // r13d
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // edx
  int v44; // r8d
  unsigned int v45; // eax
  _DWORD *v46; // rax
  int v47; // r15d
  __int64 v48; // r11
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  unsigned int jj; // ecx
  unsigned int v52; // eax
  PVOID v53; // r11
  __int64 v54; // r8
  _DWORD *v55; // rdx
  unsigned int kk; // ecx
  unsigned int v57; // eax
  __int64 v58; // r8
  int v59; // r11d
  _DWORD *v60; // rdx
  unsigned int mm; // ecx
  unsigned int v62; // eax
  __int64 v63; // r8
  int v64; // r11d
  _DWORD *v65; // rdx
  unsigned int nn; // ecx
  unsigned int v67; // eax
  __int64 v68; // r8
  int v69; // r11d
  _DWORD *v70; // rdx
  unsigned int i1; // ecx
  unsigned int v72; // eax
  unsigned int v73; // edx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // r14d
  void *Pool2; // rax
  unsigned int v81; // r9d
  unsigned int *v82; // rax
  unsigned int k; // edx
  __int64 v84; // r10
  unsigned int *v85; // r8
  unsigned int *v86; // r13
  unsigned int *v87; // rax
  unsigned int m; // edx
  __int64 v89; // r10
  unsigned int *v90; // r8
  unsigned int v91; // r8d
  unsigned int *v92; // rdx
  const wchar_t *v93; // rbx
  size_t v94; // rcx
  char *v95; // r11
  unsigned int v96; // eax
  unsigned int v97; // [rsp+30h] [rbp-41h]
  int v98; // [rsp+68h] [rbp-9h] BYREF
  int v99; // [rsp+6Ch] [rbp-5h] BYREF
  unsigned int v100; // [rsp+70h] [rbp-1h]
  PVOID P; // [rsp+78h] [rbp+7h] BYREF
  PVOID Src; // [rsp+80h] [rbp+Fh]
  __int64 v103; // [rsp+88h] [rbp+17h]
  int v105; // [rsp+E8h] [rbp+77h] BYREF

  v105 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v105 = 0;
  v98 = 0;
  v99 = 0;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  v13 = *v7;
  v14 = v7 + 1;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v13 )
    v15 = v14;
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v103 = *(_QWORD *)v15;
  P = 0LL;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v17 = *v4;
    v18 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v94 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v94 )
    return (unsigned int)-1073741762;
  v93 = (const wchar_t *)(v4 + 1);
  if ( (v94 & 1) != 0
    || v93[(v94 >> 1) - 1]
    || StringCbLengthW(v93, v94, (size_t *)&P) < 0
    || (char *)P + 2 != v95
    || 2 * (unsigned int)((unsigned __int64)P >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v79 = 2 * ((unsigned __int64)P >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(256LL, v79, 542329939LL);
  P = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v93, v79);
  v31 = *(unsigned int **)(a1 + 8);
  if ( !v31 )
    goto LABEL_157;
  v81 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 5u )
    goto LABEL_157;
  v82 = *(unsigned int **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v84 = *v82;
    v85 = v82 + 1;
    if ( v82 + 1 < v82 )
      goto LABEL_37;
    v82 = (unsigned int *)((char *)v85 + v84);
    if ( (unsigned int *)((char *)v85 + v84) < v85 )
    {
      v30 = P;
      goto LABEL_59;
    }
  }
  v37 = *v82;
  v100 = *v82;
  if ( v82 + 1 < v82 )
  {
LABEL_37:
    v11 = -1073741675;
    goto LABEL_38;
  }
  v86 = 0LL;
  if ( v37 )
    v86 = v82 + 1;
  if ( v81 <= 6 )
    goto LABEL_157;
  v87 = v31;
  for ( m = 0; m < 6; ++m )
  {
    v89 = *v87;
    v90 = v87 + 1;
    if ( v87 + 1 < v87 )
      goto LABEL_37;
    v87 = (unsigned int *)((char *)v90 + v89);
    if ( (unsigned int *)((char *)v90 + v89) < v90 )
      goto LABEL_37;
  }
  v91 = *v87;
  v92 = v87 + 1;
  if ( v87 + 1 < v87 )
    goto LABEL_37;
  v19 = 0LL;
  if ( v91 )
    v19 = v92;
  if ( v91 != 4 )
    goto LABEL_158;
  v20 = *v19;
  if ( v81 <= 7 )
    goto LABEL_157;
  v21 = v31;
  for ( n = 0; n < 7; ++n )
  {
    v23 = *v21;
    v24 = v21 + 1;
    if ( v21 + 1 < v21 )
      goto LABEL_37;
    v21 = (unsigned int *)((char *)v24 + v23);
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      goto LABEL_37;
  }
  v25 = *v21;
  if ( v21 + 1 < v21 )
    goto LABEL_37;
  v26 = 0LL;
  if ( v25 )
    v26 = v21 + 1;
  if ( v81 <= 8 )
  {
LABEL_157:
    v11 = -1073741811;
    goto LABEL_38;
  }
  for ( ii = 0; ii < 8; ++ii )
  {
    v28 = *v31;
    v29 = v31 + 1;
    if ( v31 + 1 < v31 )
      goto LABEL_37;
    v31 = (unsigned int *)((char *)v29 + v28);
    if ( (unsigned int *)((char *)v29 + v28) < v29 )
      goto LABEL_37;
  }
  v32 = *v31;
  if ( v31 + 1 < v31 )
    goto LABEL_37;
  v33 = 0LL;
  if ( v32 )
    v33 = v31 + 1;
  if ( v32 != 4 )
  {
LABEL_158:
    v11 = -1073741789;
    goto LABEL_38;
  }
  v34 = *v33;
  if ( !(_DWORD)v34 )
  {
    v35 = 1;
LABEL_48:
    if ( qword_140D3B3B8 )
    {
      v38 = 0LL;
      if ( !v35 )
        v38 = Src;
      v97 = v25;
      v30 = P;
      v39 = qword_140D3B3B8(P, v86, v37, v20, v26, v97, v38, v34, &v105, &v98, &v99);
    }
    else
    {
      v30 = P;
      v39 = -1073741637;
    }
    v40 = v34 + 4;
    if ( (unsigned int)v34 < 0xFFFFFFFC
      && v40 < 0xFFFFFFEC
      && (int)v34 + 32 >= (unsigned int)(v34 + 24)
      && (int)v34 + 40 >= (unsigned int)(v34 + 32) )
    {
      v41 = v34 + 48;
      if ( (int)v34 + 48 >= (unsigned int)(v34 + 40) && v41 < 0xFFFFFFF8 )
      {
        v42 = (v34 + 63) & 0xFFFFFFF8;
        if ( v42 >= (int)v34 + 56 )
        {
          v43 = v42 + 8;
          if ( v42 + 8 >= v42 )
          {
            v44 = *(_DWORD *)(a2 + 16);
            v45 = v42 + 12;
            if ( v43 >= 0xFFFFFFFC
              || (v73 = v43 + 8, v45 + 4 < v45)
              || (v74 = v73 + v44, v73 + v44 < v73)
              || v74 + 4 < v74 )
            {
              v11 = -1073741675;
            }
            else
            {
              v11 = v74 + 4 + *(_DWORD *)(a2 + 32) < v74 + 4 ? 0xC0000095 : 0;
            }
            if ( v11 < 0 )
              goto LABEL_7;
            v11 = 0;
            if ( a4 )
            {
              *(_DWORD *)(a4 + 4) = v41;
              if ( (_DWORD)v34 == -48 )
              {
                v11 = -1073741762;
                goto LABEL_7;
              }
              v46 = (_DWORD *)ExAllocatePool2(256LL, v41, 542329939LL);
              if ( !v46 )
              {
                v11 = -1073741801;
                goto LABEL_7;
              }
              *(_QWORD *)(a4 + 8) = v46;
              *(_DWORD *)a4 = 0;
              v47 = v39 | 0x10000000;
              v48 = v103;
              if ( v46 + 1 < v46 )
                goto LABEL_6;
              if ( v46 + 2 > (_DWORD *)((char *)v46 + *(unsigned int *)(a4 + 4)) )
                goto LABEL_112;
              *v46 = 4;
              v46[1] = v47;
              v49 = *(_QWORD *)(a4 + 8);
              ++*(_DWORD *)a4;
              if ( v49 )
              {
                v50 = v49;
                for ( jj = 0; jj < *(_DWORD *)a4; v50 += v52 )
                {
                  v52 = *(_DWORD *)v50 + 4;
                  if ( *(_DWORD *)v50 >= 0xFFFFFFFC || v50 + v52 < v50 )
                    goto LABEL_6;
                  ++jj;
                }
                if ( v50 + 4 < v50 )
                  goto LABEL_6;
                if ( v50 + 12 > v49 + *(unsigned int *)(a4 + 4) )
                  goto LABEL_112;
                *(_DWORD *)v50 = 8;
                *(_QWORD *)(v50 + 4) = v48;
              }
              else
              {
                v75 = *(_DWORD *)(a4 + 4);
                if ( v75 + 12 < v75 )
                  goto LABEL_117;
                *(_DWORD *)(a4 + 4) = v75 + 12;
              }
              ++*(_DWORD *)a4;
              v53 = Src;
              if ( Src )
              {
                if ( (_DWORD)v34 )
                  goto LABEL_80;
              }
              else if ( !(_DWORD)v34 )
              {
LABEL_80:
                v54 = *(_QWORD *)(a4 + 8);
                if ( v54 )
                {
                  v55 = *(_DWORD **)(a4 + 8);
                  for ( kk = 0; kk < *(_DWORD *)a4; v55 = (_DWORD *)((char *)v55 + v57) )
                  {
                    v57 = *v55 + 4;
                    if ( *v55 >= 0xFFFFFFFC || (_DWORD *)((char *)v55 + v57) < v55 )
                      goto LABEL_6;
                    ++kk;
                  }
                  if ( v55 + 1 < v55 )
                    goto LABEL_6;
                  if ( (unsigned __int64)v55 + v34 + 4 > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_112;
                  *v55 = v34;
                  if ( v53 )
                    memmove(v55 + 1, v53, v34);
                }
                else
                {
                  v96 = *(_DWORD *)(a4 + 4);
                  if ( v96 + v40 < v96 )
                    goto LABEL_117;
                  *(_DWORD *)(a4 + 4) = v96 + v40;
                }
                ++*(_DWORD *)a4;
                v58 = *(_QWORD *)(a4 + 8);
                v59 = v105;
                if ( v58 )
                {
                  v60 = *(_DWORD **)(a4 + 8);
                  for ( mm = 0; mm < *(_DWORD *)a4; v60 = (_DWORD *)((char *)v60 + v62) )
                  {
                    v62 = *v60 + 4;
                    if ( *v60 >= 0xFFFFFFFC || (_DWORD *)((char *)v60 + v62) < v60 )
                      goto LABEL_6;
                    ++mm;
                  }
                  if ( v60 + 1 < v60 )
                    goto LABEL_6;
                  if ( (unsigned __int64)(v60 + 2) > v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_112;
                  *v60 = 4;
                  v60[1] = v59;
                }
                else
                {
                  v76 = *(_DWORD *)(a4 + 4);
                  if ( v76 + 8 < v76 )
                    goto LABEL_117;
                  *(_DWORD *)(a4 + 4) = v76 + 8;
                }
                ++*(_DWORD *)a4;
                v63 = *(_QWORD *)(a4 + 8);
                v64 = v98;
                if ( !v63 )
                {
                  v77 = *(_DWORD *)(a4 + 4);
                  if ( v77 + 8 < v77 )
                    goto LABEL_117;
                  *(_DWORD *)(a4 + 4) = v77 + 8;
                  goto LABEL_105;
                }
                v65 = *(_DWORD **)(a4 + 8);
                for ( nn = 0; nn < *(_DWORD *)a4; v65 = (_DWORD *)((char *)v65 + v67) )
                {
                  v67 = *v65 + 4;
                  if ( *v65 >= 0xFFFFFFFC || (_DWORD *)((char *)v65 + v67) < v65 )
                    goto LABEL_6;
                  ++nn;
                }
                if ( v65 + 1 < v65 )
                  goto LABEL_6;
                if ( (unsigned __int64)(v65 + 2) <= v63 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v65 = 4;
                  v65[1] = v64;
LABEL_105:
                  ++*(_DWORD *)a4;
                  v68 = *(_QWORD *)(a4 + 8);
                  v69 = v99;
                  if ( v68 )
                  {
                    v70 = *(_DWORD **)(a4 + 8);
                    for ( i1 = 0; i1 < *(_DWORD *)a4; v70 = (_DWORD *)((char *)v70 + v72) )
                    {
                      v72 = *v70 + 4;
                      if ( *v70 >= 0xFFFFFFFC || (_DWORD *)((char *)v70 + v72) < v70 )
                        goto LABEL_6;
                      ++i1;
                    }
                    if ( v70 + 1 >= v70 )
                    {
                      if ( (unsigned __int64)(v70 + 2) > v68 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_112;
                      *v70 = 4;
                      v70[1] = v69;
LABEL_126:
                      ++*(_DWORD *)a4;
                      goto LABEL_7;
                    }
LABEL_6:
                    v11 = -1073741675;
                    goto LABEL_7;
                  }
                  v78 = *(_DWORD *)(a4 + 4);
                  if ( v78 + 8 >= v78 )
                  {
                    *(_DWORD *)(a4 + 4) = v78 + 8;
                    goto LABEL_126;
                  }
LABEL_117:
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_6;
                }
LABEL_112:
                v11 = -1073741789;
                goto LABEL_7;
              }
            }
            v11 = -1073741811;
            goto LABEL_7;
          }
        }
      }
    }
LABEL_59:
    v11 = -1073741675;
    goto LABEL_7;
  }
  v35 = 0;
  v36 = (void *)ExAllocatePool2(256LL, (unsigned int)v34, 542329939LL);
  Src = v36;
  if ( v36 )
  {
    memset(v36, 0, (unsigned int)v34);
    v37 = v100;
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_38:
  v30 = P;
LABEL_7:
  ExFreePoolWithTag(v30, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v11;
}
