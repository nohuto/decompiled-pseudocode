/*
 * XREFs of SPCallServerHandleIsAppLicensed @ 0x1406CD46C
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

__int64 __fastcall SPCallServerHandleIsAppLicensed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v7; // rdi
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // ebx
  unsigned int v15; // r8d
  unsigned int *v16; // rdx
  unsigned int *v17; // rax
  unsigned int *v18; // rax
  unsigned int j; // edx
  __int64 v20; // r9
  unsigned int *v21; // r8
  unsigned int v22; // r8d
  unsigned int *v23; // rdx
  unsigned int *v24; // rax
  unsigned int v25; // r12d
  unsigned int k; // edx
  __int64 v27; // rax
  unsigned int *v28; // r8
  unsigned int v29; // r15d
  void *v30; // rax
  void *v31; // rbp
  unsigned int *v32; // rcx
  unsigned int *v33; // rax
  unsigned int n; // r8d
  __int64 v35; // r10
  unsigned int *v36; // rdx
  unsigned int v37; // r11d
  unsigned int *v38; // r10
  unsigned int ii; // edx
  __int64 v40; // rax
  unsigned int *v41; // r8
  PVOID v42; // rbp
  unsigned int v43; // r8d
  _DWORD *v44; // rax
  void *v45; // r8
  int v46; // ebx
  _DWORD *v47; // rax
  int v48; // ebx
  unsigned int v49; // r8d
  __int64 v50; // r9
  __int64 v51; // r11
  unsigned __int64 v52; // rdx
  unsigned int jj; // ecx
  unsigned int v54; // eax
  unsigned int kk; // ecx
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  unsigned int v58; // eax
  unsigned int v59; // ebp
  void *Pool2; // rax
  unsigned int *v61; // rax
  unsigned int m; // ecx
  __int64 v63; // r8
  unsigned int *v64; // rdx
  unsigned int v65; // eax
  _WORD *v66; // rbx
  const wchar_t *v67; // rbx
  size_t v68; // rdx
  HRESULT v69; // eax
  char *v70; // r11
  size_t v71; // rcx
  __int64 v72; // r11
  unsigned int v73; // eax
  PVOID P; // [rsp+40h] [rbp-58h] BYREF
  size_t pcbLength; // [rsp+48h] [rbp-50h] BYREF
  __int64 v76; // [rsp+50h] [rbp-48h]
  __int128 v77; // [rsp+58h] [rbp-40h] BYREF

  v7 = 0LL;
  v77 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(const wchar_t **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
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
  v15 = *v9;
  v16 = v9 + 1;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v17 = 0LL;
  if ( v15 )
    v17 = v16;
  if ( v15 != 8 )
    return (unsigned int)-1073741789;
  v76 = *(_QWORD *)v17;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v18 = (unsigned int *)v8;
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
  v23 = v18 + 1;
  if ( v18 + 1 < v18 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( v22 )
    v24 = v23;
  if ( v22 != 4 )
    return (unsigned int)-1073741789;
  v25 = *v24;
  P = 0LL;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; k < 5; ++k )
  {
    v27 = *(unsigned int *)v8;
    v28 = (unsigned int *)(v8 + 2);
    if ( v8 + 2 < v8 )
      return (unsigned int)-1073741675;
    v8 = (const wchar_t *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  v68 = *(unsigned int *)v8;
  if ( v8 + 2 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v68 )
    return (unsigned int)-1073741762;
  v66 = v8 + 2;
  if ( (v68 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v66[(v68 >> 1) - 1] )
    return (unsigned int)-1073741762;
  v69 = StringCbLengthW(v8 + 2, v68, (size_t *)&P);
  if ( v69 < 0 || (char *)P + 2 != v70 || 2 * (unsigned int)((unsigned __int64)P >> 1) == -2 )
    return (unsigned int)-1073741762;
  v59 = 2 * ((unsigned __int64)P >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(256LL, v59, 542329939LL);
  P = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v66, v59);
  v61 = *(unsigned int **)(a1 + 8);
  pcbLength = 0LL;
  if ( !v61 || *(_DWORD *)a1 <= 6u )
    goto LABEL_85;
  for ( m = 0; m < 6; ++m )
  {
    v63 = *v61;
    v64 = v61 + 1;
    if ( v61 + 1 < v61 )
      goto LABEL_47;
    v61 = (unsigned int *)((char *)v64 + v63);
    if ( (unsigned int *)((char *)v64 + v63) < v64 )
    {
      v42 = P;
      goto LABEL_8;
    }
  }
  v71 = *v61;
  if ( v61 + 1 < v61 )
    goto LABEL_47;
  if ( !(_DWORD)v71
    || (v67 = (const wchar_t *)(v61 + 1), (v71 & 1) != 0)
    || *((_WORD *)v61 + (v71 >> 1) + 1)
    || StringCbLengthW(v67, v71, &pcbLength) < 0
    || pcbLength + 2 != v72
    || 2 * (unsigned int)(pcbLength >> 1) == -2 )
  {
    v13 = -1073741762;
    goto LABEL_48;
  }
  v29 = 2 * (pcbLength >> 1) + 2;
  v30 = (void *)ExAllocatePool2(256LL, v29, 542329939LL);
  v31 = v30;
  if ( !v30 )
  {
    v13 = -1073741801;
    goto LABEL_48;
  }
  memmove(v30, v67, v29);
  v7 = v31;
  v32 = *(unsigned int **)(a1 + 8);
  if ( !v32 || *(_DWORD *)a1 <= 7u )
    goto LABEL_85;
  v33 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v35 = *v33;
    v36 = v33 + 1;
    if ( v33 + 1 < v33 )
      goto LABEL_47;
    v33 = (unsigned int *)((char *)v36 + v35);
    if ( (unsigned int *)((char *)v36 + v35) < v36 )
      goto LABEL_47;
  }
  v37 = *v33;
  if ( v33 + 1 < v33 )
  {
LABEL_47:
    v13 = -1073741675;
LABEL_48:
    v42 = P;
    goto LABEL_9;
  }
  v38 = 0LL;
  if ( v37 )
    v38 = v33 + 1;
  if ( *(_DWORD *)a1 <= 8u )
  {
LABEL_85:
    v13 = -1073741811;
    goto LABEL_48;
  }
  for ( ii = 0; ii < 8; ++ii )
  {
    v40 = *v32;
    v41 = v32 + 1;
    if ( v32 + 1 < v32 )
      goto LABEL_47;
    v32 = (unsigned int *)((char *)v41 + v40);
    if ( (unsigned int *)((char *)v41 + v40) < v41 )
      goto LABEL_47;
  }
  v43 = *v32;
  if ( v32 + 1 < v32 )
    goto LABEL_47;
  v44 = 0LL;
  if ( v43 )
    v44 = v32 + 1;
  if ( v43 != 4 )
  {
    v13 = -1073741789;
    goto LABEL_48;
  }
  if ( qword_140D3B3A8 )
  {
    v45 = v31;
    v42 = P;
    v46 = qword_140D3B3A8(v25, P, v45, v38, v37, *v44, &v77);
  }
  else
  {
    v42 = P;
    v46 = -1073700223;
  }
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0
    || *(_DWORD *)(a2 + 16) + 68 < (unsigned int)(*(_DWORD *)(a2 + 16) + 64)
    || *(_DWORD *)(a2 + 16) + 68 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 68) )
  {
LABEL_8:
    v13 = -1073741675;
    goto LABEL_9;
  }
  *(_DWORD *)(a4 + 4) = 40;
  v47 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 542329939LL);
  if ( !v47 )
  {
    v13 = -1073741801;
    goto LABEL_9;
  }
  *(_QWORD *)(a4 + 8) = v47;
  *(_DWORD *)a4 = 0;
  v48 = v46 | 0x10000000;
  if ( v47 + 1 < v47 )
    goto LABEL_8;
  if ( v47 + 2 > (_DWORD *)((char *)v47 + *(unsigned int *)(a4 + 4)) )
    goto LABEL_120;
  *v47 = 4;
  v47[1] = v48;
  v49 = ++*(_DWORD *)a4;
  v50 = *(_QWORD *)(a4 + 8);
  if ( v50 )
  {
    v51 = v76;
    v52 = *(_QWORD *)(a4 + 8);
    for ( jj = 0; jj < v49; v52 += v54 )
    {
      v54 = *(_DWORD *)v52 + 4;
      if ( *(_DWORD *)v52 >= 0xFFFFFFFC || v52 + v54 < v52 )
        goto LABEL_8;
      ++jj;
    }
    if ( v52 + 4 < v52 )
      goto LABEL_8;
    if ( v52 + 12 > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
LABEL_120:
      v13 = -1073741789;
      goto LABEL_9;
    }
    *(_DWORD *)v52 = 8;
    *(_QWORD *)(v52 + 4) = v51;
    ++*(_DWORD *)a4;
  }
  else
  {
    v65 = *(_DWORD *)(a4 + 4);
    if ( v65 + 12 < v65 )
      goto LABEL_94;
    *(_DWORD *)(a4 + 4) = v65 + 12;
    *(_DWORD *)a4 = v49 + 1;
  }
  v57 = *(_QWORD *)(a4 + 8);
  if ( v57 )
  {
    v56 = *(_QWORD *)(a4 + 8);
    for ( kk = 0; kk < *(_DWORD *)a4; v56 += v58 )
    {
      v58 = *(_DWORD *)v56 + 4;
      if ( *(_DWORD *)v56 >= 0xFFFFFFFC || v56 + v58 < v56 )
        goto LABEL_8;
      ++kk;
    }
    if ( v56 + 4 < v56 )
      goto LABEL_8;
    v13 = 0;
    if ( v56 + 20 <= v57 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v56 = 16;
      *(_OWORD *)(v56 + 4) = v77;
      ++*(_DWORD *)a4;
      goto LABEL_9;
    }
    goto LABEL_120;
  }
  v73 = *(_DWORD *)(a4 + 4);
  if ( v73 + 20 < v73 )
  {
LABEL_94:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_8;
  }
  ++*(_DWORD *)a4;
  v13 = 0;
  *(_DWORD *)(a4 + 4) = v73 + 20;
LABEL_9:
  ExFreePoolWithTag(v42, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v13;
}
