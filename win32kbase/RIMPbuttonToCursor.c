__int64 __fastcall RIMPbuttonToCursor(__int16 a1)
{
  __int64 result; // rax

  result = 0LL;
  switch ( a1 )
  {
    case '<':
      return 2LL;
    case 'B':
      return 1LL;
    case 'E':
      return 2LL;
  }
  return result;
}
