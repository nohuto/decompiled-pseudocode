/*
 * XREFs of FindSpb @ 0x1C021A2B4
 * Callers:
 *     OffsetWindow @ 0x1C004CB10 (OffsetWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E030 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxDrawDragRectEx @ 0x1C0211504 (xxxDrawDragRectEx.c)
 *     RestoreSpb @ 0x1C021A4F0 (RestoreSpb.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall FindSpb(__int64 *a1)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(gpDispInfo + 32LL);
        result && (result[1] != a1 || ((_DWORD)result[6] & 2) != 0);
        result = (__int64 **)*result )
  {
    ;
  }
  return result;
}
