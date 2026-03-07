_QWORD *__fastcall sub_14008F8B0(_QWORD *a1, _QWORD *a2)
{
  int v2; // edi
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = 0;
  *a1 = off_1400D4BE0;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = sub_14000C7EC((__int64)a1, a2[3]);
  a1[1] = v5;
  if ( v5 )
  {
    a1[3] = a2[3];
    v6 = a2[2];
    a1[2] = v6;
    if ( v6 )
    {
      v7 = 0LL;
      do
      {
        sub_1400A5B28(a1[1] + 16 * v7, 16 * v7 + a2[1]);
        v7 = ++v2;
      }
      while ( (unsigned __int64)v2 < a1[2] );
    }
  }
  else
  {
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return a1;
}
