__int64 __fastcall GetStringLength(_BYTE *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return a2;
  do
  {
    if ( !*a1 )
      break;
    result = (unsigned int)(result + 1);
    ++a1;
  }
  while ( (unsigned int)result < a2 );
  if ( (unsigned int)result >= a2 )
    return a2;
  return result;
}
