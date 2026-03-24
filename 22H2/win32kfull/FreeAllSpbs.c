/*
 * XREFs of FreeAllSpbs @ 0x1C002AA90
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     xxxRealizePalette @ 0x1C011B890 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C0219D24 (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax

  while ( 1 )
  {
    result = gpDispInfo;
    if ( !*(_QWORD *)(gpDispInfo + 32LL) )
      break;
    FreeSpb();
  }
  *(_QWORD *)(gpDispInfo + 32LL) = 0LL;
  return result;
}
