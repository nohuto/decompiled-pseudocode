__int64 *__fastcall WdipSemQueryEnabledInstanceTable(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 *i; // rdx
  __int64 v4; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    for ( i = (__int64 *)WdipSemEnabledInstanceTable; &WdipSemEnabledInstanceTable != i; i = (__int64 *)*i )
    {
      v4 = *a1 - i[2];
      if ( *a1 == i[2] )
        v4 = a1[1] - i[3];
      if ( !v4 )
        return i;
    }
  }
  return (__int64 *)v1;
}
