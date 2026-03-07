__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v8; // r14
  __int64 v9; // r10
  __int64 v10; // r8
  unsigned __int8 v11; // r9
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v17; // rdi
  SIZE_T v18; // rbx
  char *PoolWithTag; // rax
  char *v20; // rsi
  char *v21; // r12
  unsigned __int8 v22; // r15
  unsigned int v23; // ecx
  size_t v24; // r8
  void *v25; // rax
  char *v26; // rdi
  __int128 v27; // xmm0
  unsigned __int8 v28; // bp
  const void **v29; // r15
  __int64 v30; // r14
  size_t v31; // r8
  void *v32; // rbp
  char *v33; // rdx
  int v34; // eax
  void *v35; // [rsp+20h] [rbp-48h]

  v8 = a3;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  *a7 = 0LL;
  if ( (_BYTE)v8 )
  {
    v13 = (unsigned int *)(a4 + 8);
    do
    {
      v14 = *v13;
      v13 += 4;
      if ( v11 >= 2u )
        v9 += v14;
      v15 = v14 + v10;
      if ( v11 >= 2u )
        v15 = v10;
      ++v11;
      v10 = v15;
    }
    while ( v11 < (unsigned __int8)v8 );
    if ( (unsigned __int64)(v9 + v15) > 0xFFFF )
      return 3221225621LL;
  }
  v17 = 16 * v8;
  v18 = v9 + 16 * v8 + 46;
  if ( !v18 )
    return 3221225495LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), v18, 0x47417254u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v18);
  if ( v17 && v18 >= v17 )
  {
    v21 = v20;
    v20 += v17;
    v18 -= v17;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = 0;
  if ( a5 != -2 )
  {
    v23 = a5 + 2;
    do
    {
      if ( v22 >= 2u )
      {
        v24 = *(unsigned int *)(a4 + 16LL * v22 + 8);
        if ( *(_DWORD *)(a4 + 16LL * v22 + 8) && v18 >= v24 )
        {
          v25 = v20;
          v20 += v24;
          v18 -= v24;
        }
        else
        {
          v25 = 0LL;
        }
        v35 = v25;
        memmove(v25, *(const void **)(a4 + 16LL * v22), v24);
        v23 = a5 + 2;
        *(_QWORD *)&v21[16 * v22] = v35;
        *(_DWORD *)&v21[16 * v22 + 12] = *(_DWORD *)(a4 + 16LL * v22 + 12);
        *(_DWORD *)&v21[16 * v22 + 8] = *(_DWORD *)(a4 + 16LL * v22 + 8);
      }
      else
      {
        *(_OWORD *)&v21[16 * v22] = *(_OWORD *)(a4 + 16LL * v22);
      }
      ++v22;
    }
    while ( v22 < v23 );
  }
  if ( v18 < 0x2E )
  {
    v26 = 0LL;
  }
  else
  {
    v26 = v20;
    v20 += 46;
    v18 -= 46LL;
  }
  *((_QWORD *)v26 + 2) = v21;
  v27 = *a2;
  v26[45] = a5;
  v28 = a5 + 2;
  v26[44] = v8;
  *((_DWORD *)v26 + 10) = a6;
  *(_OWORD *)v26 = v27;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v29 = (const void **)(16LL * v28 + a4 + 8);
    v30 = (unsigned __int8)(v8 - v28);
    do
    {
      v31 = *(unsigned int *)v29;
      if ( *(_DWORD *)v29 && v18 >= v31 )
      {
        v32 = v20;
        v20 += v31;
        v18 -= v31;
      }
      else
      {
        v32 = 0LL;
      }
      memmove(v32, *(v29 - 1), v31);
      v33 = (char *)v29 - 8 - a4;
      *(_QWORD *)&v33[*((_QWORD *)v26 + 2)] = v32;
      *(_DWORD *)&v33[*((_QWORD *)v26 + 2) + 12] = *((_DWORD *)v29 + 1);
      v34 = *(_DWORD *)v29;
      v29 += 2;
      *(_DWORD *)&v33[*((_QWORD *)v26 + 2) + 8] = v34;
      --v30;
    }
    while ( v30 );
  }
  *a7 = v26;
  return 0LL;
}
