_BOOL8 MiDetermineCoalescedLargePageHeatState()
{
  unsigned int v0; // ecx
  int v1; // r8d
  _DWORD *v2; // r9
  char v3; // r10

  if ( !(unsigned int)MiColdPageSizeSupported() )
  {
    if ( !(unsigned int)MiDetermineNewPfnHeatState(0LL, v0) )
      return 1;
    return (v3 & 1) == 0;
  }
  if ( v1 == 1 )
    return (v3 & 1) == 0;
  if ( (v3 & 2) != 0 )
    *v2 = 1;
  return 0;
}
