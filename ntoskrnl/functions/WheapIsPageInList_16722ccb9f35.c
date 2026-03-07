char __fastcall WheapIsPageInList(_QWORD *a1, unsigned int a2, __int64 a3)
{
  char result; // al
  unsigned int v4; // r9d

  result = 0;
  v4 = 0;
  if ( a2 )
  {
    while ( *a1 != a3 )
    {
      ++v4;
      ++a1;
      if ( v4 >= a2 )
        return result;
    }
    return 1;
  }
  return result;
}
