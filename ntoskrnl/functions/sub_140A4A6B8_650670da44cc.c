__int64 __fastcall sub_140A4A6B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
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
  _WORD *v21; // r12
  __int64 v22; // r11
  size_t v23; // r15
  unsigned int v24; // eax
  size_t v25; // r13
  void *Pool2; // rax
  void *v27; // rdi
  unsigned int *v28; // rax
  unsigned int v29; // r8d
  void *v30; // rcx
  __int64 v31; // r9
  unsigned int *v32; // rdx
  int v33; // r13d
  unsigned int v34; // ecx
  const wchar_t *v35; // rbx
  __int64 v36; // r11
  size_t v37; // r15
  unsigned int v38; // eax
  size_t v39; // r12
  void *v40; // rax
  int v41; // ebx
  _DWORD *v42; // rax
  int v43; // ebx
  __int64 v44; // r9
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
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
  if ( v21[((unsigned __int64)(unsigned int)v20 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v8 + 2, v20, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v22 )
    return (unsigned int)-1073741762;
  v23 = pcbLength >> 1;
  v24 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v25 = v24;
  Pool2 = (void *)ExAllocatePool2(256LL, v24, 542329939LL);
  v27 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v25);
  v28 = *(unsigned int **)(a1 + 8);
  pcbLength = 0LL;
  if ( v28 && *(_DWORD *)a1 > 5u )
  {
    v29 = 0;
    v30 = v27;
    do
    {
      v31 = *v28;
      v32 = v28 + 1;
      v27 = v30;
      if ( v28 + 1 < v28 )
        goto LABEL_56;
      v28 = (unsigned int *)((char *)v32 + v31);
      if ( (unsigned int *)((char *)v32 + v31) < v32 )
        goto LABEL_56;
      ++v29;
      v33 = v23;
    }
    while ( v29 < 5 );
    v34 = *v28;
    if ( v28 + 1 >= v28 )
    {
      if ( !v34
        || (v35 = (const wchar_t *)(v28 + 1), (v34 & 1) != 0)
        || *((_WORD *)v28 + ((unsigned __int64)v34 >> 1) + 1)
        || StringCbLengthW(v35, v34, &pcbLength) < 0
        || pcbLength + 2 != v36
        || (v37 = pcbLength >> 1, v38 = 2 * (pcbLength >> 1) + 2, 2 * (unsigned int)(pcbLength >> 1) == -2) )
      {
        v7 = -1073741762;
        goto LABEL_57;
      }
      v39 = v38;
      v40 = (void *)ExAllocatePool2(256LL, v38, 542329939LL);
      if ( !v40 )
        goto LABEL_47;
      v6 = v40;
      memmove(v40, v35, v39);
      v41 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, void *))qword_140D534B0)(
              (unsigned int)(2 * v33 + 2),
              v27,
              (unsigned int)(2 * v37 + 2),
              v6);
      if ( v41 >= 0 )
      {
        if ( qword_140D53450 )
        {
          v41 = qword_140D53450(v27);
          if ( v41 == -1073741198 )
            v41 = 0;
        }
        else
        {
          v41 = -1073741637;
        }
      }
      *(_DWORD *)(a4 + 4) = 20;
      v42 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
      if ( !v42 )
      {
LABEL_47:
        v7 = -1073741801;
        goto LABEL_57;
      }
      *(_QWORD *)(a4 + 8) = v42;
      *(_DWORD *)a4 = 0;
      v43 = v41 | 0x10000000;
      if ( v42 + 1 >= v42 )
      {
        if ( v42 + 2 > (_DWORD *)((char *)v42 + *(unsigned int *)(a4 + 4)) )
        {
LABEL_63:
          v7 = -1073741789;
          goto LABEL_57;
        }
        *v42 = 4;
        v42[1] = v43;
        ++*(_DWORD *)a4;
        v44 = *(_QWORD *)(a4 + 8);
        if ( v44 )
        {
          v46 = *(_QWORD *)(a4 + 8);
          v47 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v48 = *(_DWORD *)v46 + 4;
              if ( *(_DWORD *)v46 >= 0xFFFFFFFC || v46 + v48 < v46 )
                break;
              ++v47;
              v46 += v48;
              if ( v47 >= *(_DWORD *)a4 )
                goto LABEL_71;
            }
          }
          else
          {
LABEL_71:
            if ( v46 + 4 >= v46 )
            {
              v7 = 0;
              if ( v46 + 12 <= v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v46 = 8;
                *(_QWORD *)(v46 + 4) = v15;
                ++*(_DWORD *)a4;
                goto LABEL_57;
              }
              goto LABEL_63;
            }
          }
        }
        else
        {
          v45 = *(_DWORD *)(a4 + 4);
          if ( v45 + 12 >= v45 )
          {
            *(_DWORD *)(a4 + 4) = v45 + 12;
            v7 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_57;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
      }
    }
LABEL_56:
    v7 = -1073741675;
    goto LABEL_57;
  }
  v7 = -1073741811;
LABEL_57:
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
