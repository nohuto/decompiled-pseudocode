_QWORD *__fastcall sub_14002248C(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi
  void *v7; // rcx
  __int64 Pool2; // r14
  unsigned __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdx
  void *v12; // rcx

  v3 = 0LL;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( a2 < a3 )
  {
    _mm_lfence();
    v6 = a3 - a2;
    if ( a3 - a2 != a1[2] )
    {
      if ( v6 )
      {
        if ( !(2 * v6) )
          goto LABEL_18;
        Pool2 = ExAllocatePool2(64LL, 2 * v6, 1802921315LL);
        if ( !Pool2 )
          goto LABEL_18;
        if ( a1[1] )
        {
          v9 = a1[2];
          v10 = 0;
          if ( v9 >= v6 )
            v9 = v6;
          if ( v9 )
          {
            v11 = 0LL;
            do
            {
              ++v10;
              *(_BYTE *)(v11 + Pool2) = *(_BYTE *)(a1[1] + v11);
              ++v11;
            }
            while ( v10 < v9 );
          }
          v12 = (void *)a1[1];
          if ( v12 )
            ExFreePool(v12);
        }
        a1[1] = Pool2;
        v3 = 2 * v6;
      }
      else
      {
        v7 = (void *)a1[1];
        if ( v7 )
        {
          ExFreePool(v7);
          a1[1] = 0LL;
        }
      }
      a1[3] = v3;
      a1[2] = v6;
    }
LABEL_18:
    sub_1400B6980(a1[1], a2, v6);
  }
  return a1;
}
