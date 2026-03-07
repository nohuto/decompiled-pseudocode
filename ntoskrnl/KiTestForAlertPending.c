__int64 __fastcall KiTestForAlertPending(__int64 a1, char a2, char a3, int a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( !a2 )
  {
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 && a3 )
      return 192;
    return v4;
  }
  if ( *(_BYTE *)(a3 + a1 + 114) )
  {
    if ( a4 )
      *(_BYTE *)(a3 + a1 + 114) = 0;
    return 257;
  }
  if ( a3 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    if ( a4 )
      *(_BYTE *)(a1 + 194) |= 2u;
    return 192;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    if ( a4 )
      *(_BYTE *)(a1 + 114) = 0;
    return 257;
  }
  return v4;
}
