__int64 __fastcall ArrangementStyleFromOverlap(int a1)
{
  BOOL v2; // edx
  char v3; // al
  int v4; // ecx
  unsigned int v5; // edx

  v2 = (a1 & 3) == 3;
  v3 = a1;
  if ( (a1 & 9) == 9 )
    v2 = 1;
  v4 = v2 | 2;
  if ( (v3 & 6) != 6 )
    v4 = v2;
  v5 = v4 | 2;
  if ( (a1 & 0xC) != 0xC )
    v5 = v4;
  if ( !v5 )
  {
    if ( a1 == 5 )
    {
      return 3;
    }
    else
    {
      v5 = 0;
      if ( a1 == 10 )
        return 3;
    }
  }
  return v5;
}
