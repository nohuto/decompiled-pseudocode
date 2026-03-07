_QWORD *__fastcall sub_1400329E0(_QWORD *a1, _QWORD *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 != a2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))a1[1];
    v5 = 0;
    if ( v4 )
    {
      if ( *(v4 - 1) )
      {
        (**v4)(v4, 3LL);
      }
      else if ( v4 != (void (__fastcall ***)(_QWORD, __int64))8 )
      {
        ExFreePool(v4 - 1);
      }
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
    a1[3] = 0LL;
    v6 = sub_140032AA8(a1, a2[3]);
    a1[1] = v6;
    if ( v6 )
    {
      a1[3] = a2[3];
      v7 = a2[2];
      a1[2] = v7;
      if ( v7 )
      {
        v8 = 0LL;
        do
        {
          sub_140088BF0(a1[1] + 16 * v8, 16 * v8 + a2[1]);
          v8 = ++v5;
        }
        while ( (unsigned __int64)v5 < a1[2] );
      }
    }
    else
    {
      a1[3] = 0LL;
      a1[2] = 0LL;
    }
  }
  return a1;
}
