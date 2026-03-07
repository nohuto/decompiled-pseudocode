__int64 __fastcall PnpRegMultiSzToUnicodeStrings(_DWORD *a1, __int64 *a2, unsigned int *a3)
{
  __int64 *v3; // r13
  _WORD *v5; // rcx
  _WORD *v6; // rdi
  unsigned int v7; // edx
  _WORD *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 Pool2; // rax
  unsigned int v12; // ebp
  _WORD *v13; // rbx
  const void *v14; // r15
  _WORD *v15; // rsi
  unsigned int v17; // r14d
  void *v18; // rax
  PVOID *v19; // r12
  __int64 v20; // r13
  PVOID *v21; // rcx
  unsigned int v22; // ebx
  void *v23; // rax
  PVOID *v24; // rdi
  unsigned int v25; // [rsp+60h] [rbp+8h]

  v3 = a2;
  if ( a1[1] != 7 )
    return 3221225485LL;
  v5 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v6 = (_WORD *)((char *)v5 + (unsigned int)a1[3]);
  v7 = 0;
  if ( v5 != v6 )
  {
    v8 = v5 + 1;
    do
    {
      if ( !*v5 )
      {
        ++v7;
        if ( v8 == v6 || !*v8 )
          break;
      }
      ++v5;
      ++v8;
    }
    while ( v5 != v6 );
  }
  v9 = v7 + 1;
  if ( v5 != v6 )
    v9 = v7;
  v10 = v9;
  v25 = v9;
  Pool2 = ExAllocatePool2(256LL, 16LL * v9, 0x75737050u);
  *v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v12 = 0;
  v13 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v14 = v13;
  if ( v13 == v6 )
  {
LABEL_26:
    v22 = (_DWORD)v13 - (_DWORD)v14;
    v23 = (void *)ExAllocatePool2(256LL, v22 + 2LL, 0x75737050u);
    v24 = (PVOID *)*a2;
    *(_QWORD *)(*a2 + 16LL * v12 + 8) = v23;
    if ( v23 )
    {
      if ( v22 )
        memmove(v23, v14, v22);
      *((_WORD *)v24[2 * v12 + 1] + ((unsigned __int64)v22 >> 1)) = 0;
      LOWORD(v24[2 * v12]) = v22;
      WORD1(v24[2 * v12]) = v22 + 2;
      goto LABEL_17;
    }
    v21 = v24;
LABEL_24:
    PnpFreeUnicodeStringList(v21, v12);
    return 3221225626LL;
  }
  v15 = v13 + 1;
  while ( *v13 )
  {
LABEL_15:
    ++v13;
    ++v15;
    if ( v13 == v6 )
      goto LABEL_16;
  }
  v17 = (_DWORD)v13 - (_DWORD)v14 + 2;
  v18 = (void *)ExAllocatePool2(256LL, v17, 0x75737050u);
  v19 = (PVOID *)*v3;
  v20 = 2LL * v12;
  v19[2 * v12 + 1] = v18;
  if ( !v18 )
  {
    v21 = v19;
    goto LABEL_24;
  }
  memmove(v18, v14, v17);
  WORD1(v19[2 * v12++]) = v17;
  LOWORD(v19[v20]) = (_WORD)v13 - (_WORD)v14;
  if ( v15 != v6 && *v15 )
  {
    v3 = a2;
    v14 = v15;
    goto LABEL_15;
  }
LABEL_16:
  v10 = v25;
  if ( v13 == v6 )
    goto LABEL_26;
LABEL_17:
  *a3 = v10;
  return 0LL;
}
