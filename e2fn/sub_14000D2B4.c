__int64 __fastcall sub_14000D2B4(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v4; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 Pool2; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx

  v2 = a2;
  if ( !a2 )
  {
    v4 = (void *)a1[1];
    if ( v4 )
    {
      ExFreePool(v4);
      a1[1] = 0LL;
    }
    a1[3] = 0LL;
    a1[2] = 0LL;
    return 0LL;
  }
  v6 = 2 * a2;
  if ( 2 * a2 )
  {
    v7 = 48 * a2;
    if ( !is_mul_ok(v6, 0x18uLL) )
      v7 = -1LL;
    Pool2 = ExAllocatePool2(64LL, v7, 1802921315LL);
    if ( Pool2 )
    {
      v9 = v6;
      v10 = Pool2;
      do
      {
        *(_OWORD *)v10 = 0LL;
        *(_BYTE *)(v10 + 16) = 0;
        v10 += 24LL;
        --v9;
      }
      while ( v9 );
      v11 = Pool2;
      if ( a1[1] )
      {
        if ( a1[2] < v2 )
          v2 = a1[2];
        v12 = 0;
        if ( v2 )
        {
          v13 = 0LL;
          do
          {
            v14 = a1[1];
            ++v12;
            *(_OWORD *)(v13 + Pool2) = *(_OWORD *)(v13 + v14);
            *(_QWORD *)(v13 + Pool2 + 16) = *(_QWORD *)(v13 + v14 + 16);
            v13 += 24LL;
          }
          while ( v12 < v2 );
        }
        v15 = (void *)a1[1];
        if ( v15 )
          ExFreePool(v15);
      }
      a1[3] = v6;
      a1[1] = v11;
      return 0LL;
    }
  }
  return 3221225495LL;
}
