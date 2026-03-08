/*
 * XREFs of FreeAllSpbs @ 0x1C0020240
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C0217A18 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C000B520 (FreeSpb.c)
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
