__int64 __fastcall sub_14008BBA4(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v4; // rcx
  __int64 v6; // rsi
  __int64 Pool2; // rbp
  int v8; // r8d
  __int64 v9; // rdx
  void *v10; // rcx

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
    Pool2 = ExAllocatePool2(64LL, 2 * a2, 1802921315LL);
    if ( Pool2 )
    {
      if ( a1[1] )
      {
        if ( a1[2] < v2 )
          v2 = a1[2];
        v8 = 0;
        if ( v2 )
        {
          v9 = 0LL;
          do
          {
            ++v8;
            *(_BYTE *)(v9 + Pool2) = *(_BYTE *)(a1[1] + v9);
            ++v9;
          }
          while ( v8 < v2 );
        }
        v10 = (void *)a1[1];
        if ( v10 )
          ExFreePool(v10);
      }
      a1[3] = v6;
      a1[1] = Pool2;
      return 0LL;
    }
  }
  return 3221225495LL;
}
