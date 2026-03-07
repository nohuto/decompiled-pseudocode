bool __fastcall KiIsFlushEntire(int a1)
{
  int v1; // ecx

  if ( KiFlushPcid )
    return 0;
  if ( !KiKvaShadow )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( !v1 )
        return 0;
      return v1 != 1;
    }
    return 1;
  }
  if ( !a1 )
    return 0;
  v1 = a1 - 1;
  if ( !v1 )
    return 1;
  return v1 != 1;
}
