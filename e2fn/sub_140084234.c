__int64 __fastcall sub_140084234(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v4; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 Pool2; // rax
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rbp
  int i; // r9d
  void *v13; // rcx

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
    v7 = 16 * a2;
    if ( !is_mul_ok(v6, 8uLL) )
      v7 = -1LL;
    Pool2 = ExAllocatePool2(64LL, v7, 1802921315LL);
    if ( Pool2 )
    {
      v9 = v6;
      v10 = (_DWORD *)Pool2;
      do
      {
        *v10 = 0;
        v10[1] = 0;
        v10 += 2;
        --v9;
      }
      while ( v9 );
      v11 = Pool2;
      if ( a1[1] )
      {
        if ( a1[2] < v2 )
          v2 = a1[2];
        for ( i = 0; i < v2; v9 += 8LL )
        {
          ++i;
          *(_QWORD *)(v9 + Pool2) = *(_QWORD *)(v9 + a1[1]);
        }
        v13 = (void *)a1[1];
        if ( v13 )
          ExFreePool(v13);
      }
      a1[3] = v6;
      a1[1] = v11;
      return 0LL;
    }
  }
  return 3221225495LL;
}
