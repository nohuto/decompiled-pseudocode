__int64 __fastcall sub_14000CDB4(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v4; // rcx
  __int64 v5; // rbp
  _QWORD *v6; // rsi
  int v8; // r14d
  __int64 v9; // rcx
  void *v10; // rcx

  v2 = a2;
  if ( a2 )
  {
    v5 = 2 * a2;
    v6 = sub_14000C7EC((__int64)a1, 2 * a2);
    if ( !v6 )
      return 3221225495LL;
    if ( a1[1] )
    {
      if ( a1[2] < v2 )
        v2 = a1[2];
      v8 = 0;
      if ( v2 )
      {
        _mm_lfence();
        v9 = 0LL;
        do
        {
          sub_1400A5B28(&v6[2 * v9], 16 * v9 + a1[1]);
          v9 = ++v8;
        }
        while ( v8 < v2 );
      }
      v10 = (void *)a1[1];
      if ( v10 )
        sub_1400A5BB4(v10);
    }
    a1[3] = v5;
    a1[1] = v6;
  }
  else
  {
    v4 = (void *)a1[1];
    if ( v4 )
    {
      sub_1400A5BB4(v4);
      a1[1] = 0LL;
    }
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return 0LL;
}
