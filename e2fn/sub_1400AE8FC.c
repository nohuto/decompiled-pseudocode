__int64 *__fastcall sub_1400AE8FC(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rdx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 40) )
  {
    while ( v4 != a2 )
    {
      if ( a1[5] )
        v5 = a1;
      else
        v5 = (__int64 *)a1[1];
      sub_1400A440C(a1, v5, (__int64 *)(v4 + 16));
      v4 = *(_QWORD *)(v4 + 8);
    }
  }
  return a1;
}
