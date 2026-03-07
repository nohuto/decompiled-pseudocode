char __fastcall RtlIsZeroMemory(_BYTE *a1, unsigned __int64 a2)
{
  char result; // al

  result = 0;
  while ( ((unsigned __int8)a1 & 7) != 0 && a2 )
  {
    if ( *a1 )
      return result;
    ++a1;
    --a2;
  }
  while ( a2 >= 8 )
  {
    if ( *(_QWORD *)a1 )
      return result;
    a1 += 8;
    a2 -= 8LL;
  }
  if ( !a2 )
    return 1;
  while ( !*a1 )
  {
    ++a1;
    if ( !--a2 )
      return 1;
  }
  return result;
}
