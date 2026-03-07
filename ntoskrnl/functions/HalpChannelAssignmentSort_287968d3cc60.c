__int64 __fastcall HalpChannelAssignmentSort(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // dx

  v2 = a1[5];
  if ( v2 >= a2[5] )
  {
    if ( v2 > a2[5] )
      return 1LL;
    v3 = a1[4];
    v4 = a2[4];
    if ( v3 >= v4 )
      return v3 > v4;
  }
  return 0xFFFFFFFFLL;
}
