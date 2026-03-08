/*
 * XREFs of SpbCheck @ 0x1C0014BB8
 * Callers:
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 * Callees:
 *     SpbCheckDce @ 0x1C0097430 (SpbCheckDce.c)
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
