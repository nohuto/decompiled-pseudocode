/*
 * XREFs of SpbCheck @ 0x1C00DC1F8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 * Callees:
 *     SpbCheckDce @ 0x1C00DC6F0 (SpbCheckDce.c)
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
