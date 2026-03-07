_QWORD *__fastcall sub_14009196C(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *a1 = off_1400D6A08;
  if ( a2 )
  {
    v4 = 2 * a2;
    v5 = sub_140032AA8((__int64)a1, 2 * a2);
    if ( v5 )
    {
      if ( a1[1] )
      {
        v6 = a2;
        if ( a1[2] < a2 )
          v6 = a1[2];
        v7 = 0;
        if ( v6 )
        {
          _mm_lfence();
          v8 = 0LL;
          do
          {
            sub_140088BF0((__int64)&v5[2 * v8], 16 * v8 + a1[1]);
            v8 = ++v7;
          }
          while ( v7 < v6 );
        }
        v9 = (void (__fastcall ***)(_QWORD, __int64))a1[1];
        if ( v9 )
        {
          if ( *(v9 - 1) )
          {
            (**v9)(v9, 3LL);
          }
          else if ( v9 != (void (__fastcall ***)(_QWORD, __int64))8 )
          {
            ExFreePool(v9 - 1);
          }
        }
      }
      a1[3] = v4;
      a1[1] = v5;
      a1[2] = a2;
    }
  }
  return a1;
}
