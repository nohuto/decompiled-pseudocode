unsigned __int8 *__fastcall ViLookupThunkArray(unsigned __int8 **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v5; // r8d
  int v6; // edx
  unsigned __int8 *result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( !*a1 )
      break;
    v4 = a3 - (_QWORD)result;
    do
    {
      v5 = result[v4];
      v6 = *result - v5;
      if ( v6 )
        break;
      ++result;
    }
    while ( v5 );
    if ( !v6 )
      return a1[1];
    a1 += 7;
  }
  return result;
}
