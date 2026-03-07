_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 1264);
  if ( !result )
    return 0LL;
  do
  {
    if ( a2 <= result[4] )
    {
      if ( a2 >= result[3] )
        break;
      result = (_QWORD *)*result;
    }
    else
    {
      result = (_QWORD *)result[1];
    }
  }
  while ( result );
  if ( !result || !result[6] )
    return 0LL;
  return result;
}
