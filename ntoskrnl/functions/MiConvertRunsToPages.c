_QWORD *__fastcall MiConvertRunsToPages(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  __int64 v5; // r11
  unsigned int v6; // r10d
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned int v13; // r8d
  __int64 *v14; // r9
  unsigned __int64 v15; // rdi
  unsigned int v16; // edx
  unsigned int v17; // eax
  _QWORD *result; // rax
  _QWORD *v19; // r9
  __int64 v20; // r10
  unsigned int i; // ecx
  __int64 v22; // r8
  unsigned __int64 j; // rdx
  unsigned __int64 v24; // rax

  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v10 = (_QWORD *)(a1 + 8);
    v11 = v4;
    do
    {
      v12 = v10[1];
      v5 += v12;
      if ( v6 <= 1 )
      {
        if ( *v10 == 0x8000000000000000uLL )
        {
          v6 = -1;
        }
        else
        {
          v13 = 0;
          v14 = MiLargePageSizes;
          do
          {
            v15 = *v14;
            if ( !(*v10 % (unsigned __int64)*v14) && !(v12 % v15) )
              break;
            v16 = v13 + 1;
            v17 = v13 + 1;
            if ( v6 > v13 )
              v17 = v6;
            v6 = v17;
            if ( v15 == 512 )
              break;
            ++v14;
            ++v13;
          }
          while ( v16 < 3 );
        }
      }
      v10 += 2;
      --v11;
    }
    while ( v11 );
    if ( v6 > 1 )
      v6 = -1;
  }
  *a4 = v6;
  *a3 = v5;
  result = MiAllocatePool(64, 8 * v5, 0x3146694Du);
  v19 = result;
  if ( result )
  {
    v20 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v22 = *(_QWORD *)(a1 + 16LL * i + 16);
      for ( j = *(_QWORD *)(a1 + 16LL * i + 8); v22; --v22 )
      {
        v19[v20] = j;
        v24 = j + 1;
        ++v20;
        if ( j == 0x8000000000000000uLL )
          v24 = 0x8000000000000000uLL;
        j = v24;
      }
    }
    return v19;
  }
  return result;
}
