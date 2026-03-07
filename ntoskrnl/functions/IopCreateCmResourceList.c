char *__fastcall IopCreateCmResourceList(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int *v4; // r15
  int v7; // r9d
  __int64 v8; // rbp
  __int64 v9; // rdi
  _DWORD *v10; // rsi
  _DWORD *v11; // rcx
  __int64 v12; // r10
  unsigned int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // rdi
  char *Pool2; // rbx
  _DWORD *v21; // rax
  _DWORD *v22; // rbp
  char *v23; // r13
  unsigned int v24; // r14d
  char *i; // r12
  unsigned int v26; // eax
  _DWORD *v27; // rcx
  size_t v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax

  v4 = (unsigned int *)IopInitHalResources;
  v7 = a3;
  v8 = 4LL;
  v9 = 0LL;
  v10 = (char *)IopInitHalResources + 4;
  v11 = (char *)IopInitHalResources + 4;
  if ( !*(_DWORD *)IopInitHalResources )
    goto LABEL_12;
  v12 = *(unsigned int *)IopInitHalResources;
  do
  {
    v13 = v11[3];
    v14 = v11 + 4;
    v15 = 16LL;
    if ( v13 )
    {
      v16 = v13;
      do
      {
        v17 = 20LL;
        if ( *(_BYTE *)v14 == 5 )
          v17 = (unsigned int)v14[1] + 20LL;
        v15 += v17;
        v14 = (_DWORD *)((char *)v14 + v17);
        --v16;
      }
      while ( v16 );
      v7 = a3;
    }
    if ( *v11 == a2 && v11[1] == v7 )
      v9 += v15;
    v8 += v15;
    v11 = (_DWORD *)((char *)v11 + v15);
    --v12;
  }
  while ( v12 );
  if ( !v9 )
  {
LABEL_12:
    *a4 = IopInitHalResources;
    return 0LL;
  }
  v19 = v9 + 4;
  if ( v19 == v8 )
  {
    *a4 = 0LL;
    return (char *)v4;
  }
  else
  {
    Pool2 = (char *)ExAllocatePool2(256LL, v19, 538996816LL);
    if ( !Pool2 )
    {
      *a4 = 0LL;
      return 0LL;
    }
    v21 = (_DWORD *)ExAllocatePool2(256LL, v8 - v19 + 4, 538996816LL);
    *a4 = v21;
    v22 = v21;
    if ( !v21 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
    *(_DWORD *)Pool2 = 0;
    v23 = (char *)(v21 + 1);
    *v21 = 0;
    v24 = 0;
    for ( i = Pool2 + 4; v24 < *v4; ++v24 )
    {
      v26 = v10[3];
      v27 = v10 + 4;
      v28 = 16LL;
      if ( v26 )
      {
        v29 = v26;
        do
        {
          v30 = 20LL;
          if ( *(_BYTE *)v27 == 5 )
            v30 = (unsigned int)v27[1] + 20LL;
          v28 += v30;
          v27 = (_DWORD *)((char *)v27 + v30);
          --v29;
        }
        while ( v29 );
      }
      if ( *v10 == a2 && v10[1] == a3 )
      {
        ++*(_DWORD *)Pool2;
        memmove(i, v10, v28);
        i += v28;
      }
      else
      {
        ++*v22;
        memmove(v23, v10, v28);
        v23 += v28;
      }
      v10 = (_DWORD *)((char *)v10 + v28);
    }
    return Pool2;
  }
}
