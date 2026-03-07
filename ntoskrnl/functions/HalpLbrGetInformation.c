char __fastcall HalpLbrGetInformation(_DWORD *a1, int *a2)
{
  int v2; // eax

  if ( !HalpLbrStackSize )
    return 0;
  if ( a1 )
    *a1 = HalpLbrStackSize;
  if ( a2 )
  {
    v2 = 1023;
    if ( HalpArchLbrSupported )
    {
      if ( !HalpArchLbrCplFilteringCap )
        v2 = 1020;
      if ( !HalpArchLbrBranchFilteringCap )
        v2 &= 0xFFFFFE03;
      if ( !HalpArchLbrCallstackModeCap )
        v2 &= ~0x200u;
    }
    *a2 = v2;
  }
  return 1;
}
