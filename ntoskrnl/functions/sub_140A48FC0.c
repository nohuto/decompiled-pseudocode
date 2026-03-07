__int64 __fastcall sub_140A48FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  __int64 *v14; // rbp
  __int64 v15; // rbp
  bool v16; // cc
  unsigned int j; // r8d
  __int64 v18; // rax
  unsigned int *v19; // rdx
  size_t v20; // rdx
  _WORD *v21; // r14
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // r15
  void *Pool2; // rax
  void *v26; // rdi
  unsigned int *v27; // rcx
  unsigned int *v28; // rax
  unsigned int v29; // r9d
  void *v30; // rdx
  __int64 v31; // r10
  unsigned int *v32; // r8
  __int64 v33; // r8
  unsigned int *v34; // r10
  unsigned int v35; // r9d
  void *v36; // rax
  __int64 v37; // r11
  unsigned int *v38; // rdx
  unsigned int v39; // edx
  unsigned int *v40; // r9
  int v41; // edx
  unsigned int v42; // ecx
  signed int v43; // r15d
  _DWORD *v44; // rax
  int v45; // r15d
  __int64 v46; // r9
  unsigned int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned int k; // ecx
  unsigned int v50; // eax
  size_t pcbLength; // [rsp+68h] [rbp+10h] BYREF

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
  v13 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v13 )
    v14 = (__int64 *)(v9 + 1);
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v15 = *v14;
  v16 = *(_DWORD *)a1 <= 4u;
  pcbLength = 0LL;
  if ( v16 )
    return (unsigned int)-1073741811;
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
  if ( v8 + 2 < v8 )
    return (unsigned int)-1073741675;
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
    goto LABEL_41;
  v28 = *(unsigned int **)(a1 + 8);
  v29 = 0;
  v30 = v26;
  do
  {
    v31 = *v28;
    v32 = v28 + 1;
    v26 = v30;
    if ( v28 + 1 < v28 )
      goto LABEL_58;
    v28 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      goto LABEL_58;
    ++v29;
  }
  while ( v29 < 5 );
  v33 = *v28;
  if ( v28 + 1 < v28 )
    goto LABEL_58;
  v34 = 0LL;
  if ( (_DWORD)v33 )
    v34 = v28 + 1;
  if ( *(_DWORD *)a1 <= 6u )
  {
LABEL_41:
    v7 = -1073741811;
    goto LABEL_59;
  }
  v35 = 0;
  v36 = v30;
  do
  {
    v37 = *v27;
    v38 = v27 + 1;
    v26 = v36;
    if ( v27 + 1 < v27 )
      goto LABEL_58;
    v27 = (unsigned int *)((char *)v38 + v37);
    if ( (unsigned int *)((char *)v38 + v37) < v38 )
      goto LABEL_58;
    ++v35;
  }
  while ( v35 < 6 );
  v39 = *v27;
  if ( v27 + 1 < v27 )
    goto LABEL_58;
  v40 = 0LL;
  if ( v39 )
    v40 = v27 + 1;
  if ( qword_140D53410 )
  {
    v7 = qword_140D53410(v36, v34, v33, v40, v39);
    if ( v7 < 0 )
      goto LABEL_59;
    v41 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
      goto LABEL_58;
    v42 = *(_DWORD *)(a2 + 16) + 52;
    v43 = v7;
    if ( v42 < *(_DWORD *)(a2 + 16) + 48 )
      goto LABEL_58;
    v7 = v42 + v41 < v42 ? 0xC0000095 : 0;
    if ( v42 + v41 < v42 )
      goto LABEL_59;
    *(_DWORD *)(a4 + 4) = 20;
    v44 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
    if ( !v44 )
    {
      v7 = -1073741801;
      goto LABEL_59;
    }
    *(_QWORD *)(a4 + 8) = v44;
    *(_DWORD *)a4 = 0;
    v45 = v43 | 0x10000000;
    if ( v44 + 1 < v44 )
      goto LABEL_58;
    if ( v44 + 2 > (_DWORD *)((char *)v44 + *(unsigned int *)(a4 + 4)) )
    {
LABEL_63:
      v7 = -1073741789;
      goto LABEL_59;
    }
    *v44 = 4;
    v44[1] = v45;
    ++*(_DWORD *)a4;
    v46 = *(_QWORD *)(a4 + 8);
    if ( !v46 )
    {
      v47 = *(_DWORD *)(a4 + 4);
      if ( v47 + 12 < v47 )
      {
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_58;
      }
      *(_DWORD *)(a4 + 4) = v47 + 12;
      v7 = 0;
      ++*(_DWORD *)a4;
      goto LABEL_59;
    }
    v48 = *(_QWORD *)(a4 + 8);
    for ( k = 0; k < *(_DWORD *)a4; v48 += v50 )
    {
      v50 = *(_DWORD *)v48 + 4;
      if ( *(_DWORD *)v48 >= 0xFFFFFFFC || v48 + v50 < v48 )
        goto LABEL_58;
      ++k;
    }
    if ( v48 + 4 < v48 )
    {
LABEL_58:
      v7 = -1073741675;
      goto LABEL_59;
    }
    v7 = 0;
    if ( v48 + 12 > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_63;
    *(_DWORD *)v48 = 8;
    *(_QWORD *)(v48 + 4) = v15;
    ++*(_DWORD *)a4;
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_59:
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
  return (unsigned int)v7;
}
