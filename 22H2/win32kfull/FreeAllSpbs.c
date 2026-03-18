/*
 * XREFs of FreeAllSpbs @ 0x1C006CEE0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C003B554 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     xxxRealizePalette @ 0x1C0214E58 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax

  while ( 1 )
  {
    result = gpDispInfo;
    if ( !*(_QWORD *)(gpDispInfo + 32LL) )
      break;
    FreeSpb(*(char **)(gpDispInfo + 32LL));
  }
  *(_QWORD *)(gpDispInfo + 32LL) = 0LL;
  return result;
}
