/*
 * XREFs of PWND_FROM_INPUTDEST_OPT @ 0x1C01D4358
 * Callers:
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C014C470 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PWND_FROM_INPUTDEST_OPT(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 92) == 2 )
    return *(_QWORD *)(a1 + 80);
  else
    return 0LL;
}
