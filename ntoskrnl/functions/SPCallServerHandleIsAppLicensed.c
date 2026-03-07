__int64 __fastcall SPCallServerHandleIsAppLicensed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  const wchar_t *v7; // rcx
  unsigned int v8; // ebx
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // r8
  _DWORD *v14; // rcx
  unsigned int *v15; // rax
  unsigned int v16; // r10d
  void *v17; // rdx
  void *v18; // r8
  __int64 v19; // r11
  unsigned int *v20; // r9
  void *v21; // rdi
  unsigned int v22; // r11d
  void *v23; // rax
  void *v24; // rdx
  __int64 v25; // rbx
  _DWORD *v26; // r8
  unsigned int m; // ecx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // eax
  __int64 *v31; // rbp
  __int64 v32; // rbp
  unsigned int *v33; // rax
  unsigned int j; // r8d
  __int64 v35; // r9
  unsigned int *v36; // rdx
  unsigned int *v37; // rax
  unsigned int v38; // eax
  size_t v39; // r12
  void *Pool2; // rax
  unsigned int v41; // eax
  size_t v42; // r12
  void *v43; // rax
  int v44; // r12d
  int v45; // edx
  _DWORD *v46; // rax
  unsigned __int64 *v47; // rdx
  int v48; // r12d
  unsigned int v49; // ecx
  unsigned __int64 v50; // r8
  unsigned int v51; // eax
  _WORD *v52; // rbx
  const wchar_t *v53; // rbx
  unsigned int k; // r8d
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  unsigned int *v58; // rdx
  unsigned int v59; // r13d
  bool v60; // cc
  __int64 v61; // rax
  unsigned int *v62; // rdx
  size_t v63; // rdx
  __int64 v64; // r11
  unsigned int *v65; // rax
  void *v66; // rcx
  __int64 v67; // r9
  unsigned int *v68; // rdx
  size_t v69; // rcx
  __int64 v70; // r11
  unsigned int v71; // ecx
  unsigned int v72; // eax
  unsigned int v73; // eax
  size_t pcbLength; // [rsp+40h] [rbp-58h] BYREF
  __int64 v75; // [rsp+48h] [rbp-50h]
  __int128 v76; // [rsp+50h] [rbp-48h]

  v75 = a2;
  v6 = 0LL;
  v76 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(const wchar_t **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v10 = (unsigned int *)v7;
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
  v56 = *v10;
  if ( v10 + 1 < v10 )
    return (unsigned int)-1073741675;
  v31 = 0LL;
  if ( v56 )
    v31 = (__int64 *)(v10 + 1);
  if ( v56 != 8 )
    return (unsigned int)-1073741789;
  v32 = *v31;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v33 = (unsigned int *)v7;
  for ( j = 0; j < 4; ++j )
  {
    v35 = *v33;
    v36 = v33 + 1;
    if ( v33 + 1 < v33 )
      return (unsigned int)-1073741675;
    v33 = (unsigned int *)((char *)v36 + v35);
    if ( (unsigned int *)((char *)v36 + v35) < v36 )
      return (unsigned int)-1073741675;
  }
  v57 = *v33;
  v58 = v33 + 1;
  if ( v33 + 1 < v33 )
    return (unsigned int)-1073741675;
  v37 = 0LL;
  if ( v57 )
    v37 = v58;
  if ( v57 != 4 )
    return (unsigned int)-1073741789;
  v59 = *v37;
  v60 = *(_DWORD *)a1 <= 5u;
  pcbLength = 0LL;
  if ( v60 )
    return (unsigned int)-1073741811;
  for ( k = 0; k < 5; ++k )
  {
    v61 = *(unsigned int *)v7;
    v62 = (unsigned int *)(v7 + 2);
    if ( v7 + 2 < v7 )
      return (unsigned int)-1073741675;
    v7 = (const wchar_t *)((char *)v62 + v61);
    if ( (unsigned int *)((char *)v62 + v61) < v62 )
      return (unsigned int)-1073741675;
  }
  v63 = *(unsigned int *)v7;
  if ( v7 + 2 < v7 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v63 )
    return (unsigned int)-1073741762;
  v52 = v7 + 2;
  if ( (v63 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v52[(v63 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v7 + 2, v63, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v64 )
    return (unsigned int)-1073741762;
  v38 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v39 = v38;
  Pool2 = (void *)ExAllocatePool2(256LL, v38, 542329939LL);
  v21 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v52, v39);
  v65 = *(unsigned int **)(a1 + 8);
  pcbLength = 0LL;
  if ( !v65 || *(_DWORD *)a1 <= 6u )
    goto LABEL_31;
  v55 = 0;
  v66 = v21;
  do
  {
    v67 = *v65;
    v68 = v65 + 1;
    v21 = v66;
    if ( v65 + 1 < v65 )
      goto LABEL_5;
    v65 = (unsigned int *)((char *)v68 + v67);
    if ( (unsigned int *)((char *)v68 + v67) < v68 )
      goto LABEL_5;
    ++v55;
  }
  while ( v55 < 6 );
  v69 = *v65;
  if ( v65 + 1 < v65 )
    goto LABEL_5;
  if ( !(_DWORD)v69
    || (v53 = (const wchar_t *)(v65 + 1),
        (v69 & 1) != 0
     || *((_WORD *)v65 + (v69 >> 1) + 1)
     || StringCbLengthW(v53, v69, &pcbLength) < 0
     || pcbLength + 2 != v70
     || (v41 = 2 * (pcbLength >> 1) + 2, 2 * (unsigned int)(pcbLength >> 1) == -2)) )
  {
    v8 = -1073741762;
    goto LABEL_6;
  }
  v42 = v41;
  v43 = (void *)ExAllocatePool2(256LL, v41, 542329939LL);
  if ( !v43 )
  {
LABEL_62:
    v8 = -1073741801;
    goto LABEL_6;
  }
  v6 = v43;
  memmove(v43, v53, v42);
  v14 = *(_DWORD **)(a1 + 8);
  if ( !v14 || *(_DWORD *)a1 <= 7u )
    goto LABEL_31;
  v15 = *(unsigned int **)(a1 + 8);
  v16 = 0;
  v17 = v6;
  v18 = v21;
  do
  {
    v19 = *v15;
    v20 = v15 + 1;
    v21 = v18;
    v6 = v17;
    if ( v15 + 1 < v15 )
      goto LABEL_5;
    v15 = (unsigned int *)((char *)v20 + v19);
    if ( (unsigned int *)((char *)v20 + v19) < v20 )
      goto LABEL_5;
    ++v16;
  }
  while ( v16 < 7 );
  if ( v15 + 1 < v15 )
    goto LABEL_5;
  if ( *(_DWORD *)a1 <= 8u )
  {
LABEL_31:
    v8 = -1073741811;
    goto LABEL_6;
  }
  v22 = 0;
  v23 = v17;
  v24 = v18;
  do
  {
    v25 = (unsigned int)*v14;
    v26 = v14 + 1;
    v21 = v24;
    v6 = v23;
    if ( v14 + 1 < v14 )
      goto LABEL_5;
    v14 = (_DWORD *)((char *)v26 + v25);
    if ( (_DWORD *)((char *)v26 + v25) < v26 )
      goto LABEL_5;
    ++v22;
  }
  while ( v22 < 8 );
  if ( v14 + 1 >= v14 )
  {
    if ( *v14 != 4 )
      goto LABEL_132;
    if ( qword_140D533E8 )
      v44 = qword_140D533E8(v59, v24, v23);
    else
      v44 = -1073700223;
    v45 = *(_DWORD *)(v75 + 32);
    if ( *(_DWORD *)(v75 + 16) >= 0xFFFFFFC0 )
      goto LABEL_5;
    v71 = *(_DWORD *)(v75 + 16) + 68;
    if ( v71 < *(_DWORD *)(v75 + 16) + 64 )
      goto LABEL_5;
    v8 = v71 + v45 < v71 ? 0xC0000095 : 0;
    if ( v71 + v45 < v71 )
      goto LABEL_6;
    *(_DWORD *)(a4 + 4) = 40;
    v46 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 542329939LL);
    v8 = 0;
    if ( !v46 )
      goto LABEL_62;
    v47 = (unsigned __int64 *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v46;
    *(_DWORD *)a4 = 0;
    v48 = v44 | 0x10000000;
    if ( v46 + 1 < v46 )
      goto LABEL_5;
    if ( v46 + 2 > (_DWORD *)((char *)v46 + *(unsigned int *)(a4 + 4)) )
      goto LABEL_132;
    *v46 = 4;
    v46[1] = v48;
    ++*(_DWORD *)a4;
    if ( !*v47 )
    {
      v72 = *(_DWORD *)(a4 + 4);
      if ( v72 + 12 < v72 )
      {
LABEL_122:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_5;
      }
      *(_DWORD *)(a4 + 4) = v72 + 12;
LABEL_38:
      ++*(_DWORD *)a4;
      v29 = *v47;
      if ( *v47 )
      {
        v28 = *v47;
        for ( m = 0; m < *(_DWORD *)a4; v28 += v30 )
        {
          v30 = *(_DWORD *)v28 + 4;
          if ( *(_DWORD *)v28 >= 0xFFFFFFFC || v28 + v30 < v28 )
            goto LABEL_5;
          ++m;
        }
        if ( v28 + 4 < v28 )
          goto LABEL_5;
        if ( v28 + 20 <= v29 + *(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v28 = 16;
          *(_OWORD *)(v28 + 4) = v76;
LABEL_37:
          ++*(_DWORD *)a4;
          goto LABEL_6;
        }
LABEL_132:
        v8 = -1073741789;
        goto LABEL_6;
      }
      v73 = *(_DWORD *)(a4 + 4);
      if ( v73 + 20 >= v73 )
      {
        *(_DWORD *)(a4 + 4) = v73 + 20;
        goto LABEL_37;
      }
      goto LABEL_122;
    }
    v50 = *v47;
    v49 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v51 = *(_DWORD *)v50 + 4;
        if ( *(_DWORD *)v50 >= 0xFFFFFFFC || v50 + v51 < v50 )
          goto LABEL_5;
        ++v49;
        v50 += v51;
        if ( v49 >= *(_DWORD *)a4 )
        {
          v8 = 0;
          break;
        }
      }
    }
    if ( v50 + 4 >= v50 )
    {
      if ( v50 + 12 > *v47 + *(unsigned int *)(a4 + 4) )
        goto LABEL_132;
      *(_DWORD *)v50 = 8;
      *(_QWORD *)(v50 + 4) = v32;
      goto LABEL_38;
    }
  }
LABEL_5:
  v8 = -1073741675;
LABEL_6:
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v8;
}
