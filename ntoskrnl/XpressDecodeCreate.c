/*
 * XREFs of XpressDecodeCreate @ 0x140677788
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1409FEC80 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
