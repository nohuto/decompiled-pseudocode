/*
 * XREFs of SpbCheck @ 0x1C0015968
 * Callers:
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SpbCheckDce @ 0x1C008F1F0 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 *i; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  return result;
}
