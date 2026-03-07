_BYTE *__fastcall ViHasBufferBeenTouched(_BYTE *a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned int i; // r9d
  __int64 v5; // rax

  v2 = 15LL;
  for ( i = 1; i < 8; i *= 2 )
  {
    v5 = v2 << (8 * (unsigned __int8)i);
    v2 |= v5;
  }
  while ( ((unsigned __int8)a1 & 7) != 0 && a2 )
  {
    if ( *a1 != 15 )
      return a1;
    ++a1;
    --a2;
  }
  while ( a2 >= 8 )
  {
    if ( *(_QWORD *)a1 != v2 )
      return a1;
    a1 += 8;
    a2 -= 8LL;
  }
  if ( a2 )
  {
    while ( *a1 == 15 )
    {
      ++a1;
      if ( !--a2 )
        return 0LL;
    }
    return a1;
  }
  return 0LL;
}
