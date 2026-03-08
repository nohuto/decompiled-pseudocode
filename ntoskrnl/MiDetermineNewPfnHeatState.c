/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x1402DD0B8
 * Callers:
 *     MiDetermineCoalescedLargePageHeatState @ 0x1402DD078 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiCreatePfnTemplate @ 0x1403708F4 (MiCreatePfnTemplate.c)
 *     MiInitializeNewPfns @ 0x140370B10 (MiInitializeNewPfns.c)
 *     MiEnableNewPfns @ 0x140618520 (MiEnableNewPfns.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x1402DD100 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiDetermineNewPfnHeatState(int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // ecx

  v2 = 0;
  if ( !a1 )
  {
    if ( (unsigned int)MiColdPageSizeSupported(a2) )
    {
      return 1;
    }
    else
    {
      v4 = v3;
      if ( (HvlEnlightenments & 0x200000) != 0 )
        return 1;
      return v4;
    }
  }
  return v2;
}
