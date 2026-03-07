__int64 __fastcall sub_140A4A29C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
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
  _WORD *v21; // rsi
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // r15
  void *Pool2; // rax
  void *v26; // rdi
  unsigned int *v27; // rax
  unsigned int v28; // r8d
  void *v29; // rcx
  __int64 v30; // r9
  unsigned int *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // rdx
  int v34; // r15d
  int v35; // edx
  unsigned int v36; // ecx
  _DWORD *v37; // rax
  unsigned __int64 *v38; // rdx
  int v39; // r15d
  unsigned int v40; // eax
  unsigned __int64 v41; // r8
  unsigned int k; // ecx
  unsigned int v43; // eax
  unsigned __int64 v44; // r8
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  unsigned int m; // ecx
  unsigned int v48; // eax
  size_t pcbLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 v51; // [rsp+38h] [rbp-40h] BYREF

  v51 = 0LL;
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
  {
    v7 = -1073741811;
    goto LABEL_75;
  }
  v28 = 0;
  v29 = v26;
  do
  {
    v30 = *v27;
    v31 = v27 + 1;
    v26 = v29;
    if ( v27 + 1 < v27 )
      goto LABEL_74;
    v27 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      goto LABEL_74;
    ++v28;
  }
  while ( v28 < 5 );
  v32 = *v27;
  if ( v27 + 1 >= v27 )
  {
    v33 = 0LL;
    if ( (_DWORD)v32 )
      v33 = v27 + 1;
    v34 = qword_140D53400 ? qword_140D53400(v29, v33, v32, &v51) : -1073700223;
    v35 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0 )
    {
      v36 = *(_DWORD *)(a2 + 16) + 68;
      if ( v36 >= *(_DWORD *)(a2 + 16) + 64 )
      {
        v7 = v36 + v35 < v36 ? 0xC0000095 : 0;
        if ( v36 + v35 < v36 )
          goto LABEL_75;
        *(_DWORD *)(a4 + 4) = 40;
        v37 = (_DWORD *)ExAllocatePool2(256LL, 40LL, 542329939LL);
        if ( !v37 )
        {
          v7 = -1073741801;
          goto LABEL_75;
        }
        v38 = (unsigned __int64 *)(a4 + 8);
        *(_QWORD *)(a4 + 8) = v37;
        *(_DWORD *)a4 = 0;
        v39 = v34 | 0x10000000;
        if ( v37 + 1 < v37 )
          goto LABEL_55;
        if ( v37 + 2 > (_DWORD *)((char *)v37 + *(unsigned int *)(a4 + 4)) )
          goto LABEL_62;
        *v37 = 4;
        v37[1] = v39;
        ++*(_DWORD *)a4;
        if ( *v38 )
        {
          v41 = *v38;
          for ( k = 0; k < *(_DWORD *)a4; v41 += v43 )
          {
            v43 = *(_DWORD *)v41 + 4;
            if ( *(_DWORD *)v41 >= 0xFFFFFFFC || v41 + v43 < v41 )
              goto LABEL_55;
            ++k;
          }
          if ( v41 + 4 < v41 )
            goto LABEL_55;
          if ( v41 + 12 > *v38 + *(unsigned int *)(a4 + 4) )
            goto LABEL_62;
          *(_DWORD *)v41 = 8;
          *(_QWORD *)(v41 + 4) = v15;
        }
        else
        {
          v40 = *(_DWORD *)(a4 + 4);
          if ( v40 + 12 < v40 )
          {
LABEL_54:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_55;
          }
          *(_DWORD *)(a4 + 4) = v40 + 12;
        }
        ++*(_DWORD *)a4;
        v44 = *v38;
        if ( !*v38 )
        {
          v45 = *(_DWORD *)(a4 + 4);
          if ( v45 + 20 >= v45 )
          {
            *(_DWORD *)(a4 + 4) = v45 + 20;
            v7 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_75;
          }
          goto LABEL_54;
        }
        v46 = *v38;
        for ( m = 0; m < *(_DWORD *)a4; v46 += v48 )
        {
          v48 = *(_DWORD *)v46 + 4;
          if ( *(_DWORD *)v46 >= 0xFFFFFFFC || v46 + v48 < v46 )
            goto LABEL_55;
          ++m;
        }
        if ( v46 + 4 >= v46 )
        {
          v7 = 0;
          if ( v46 + 20 <= v44 + *(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v46 = 16;
            *(_OWORD *)(v46 + 4) = v51;
            ++*(_DWORD *)a4;
            goto LABEL_75;
          }
LABEL_62:
          v7 = -1073741789;
          goto LABEL_75;
        }
LABEL_55:
        v7 = -1073741675;
        goto LABEL_75;
      }
    }
  }
LABEL_74:
  v7 = -1073741675;
LABEL_75:
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
  return v7;
}
