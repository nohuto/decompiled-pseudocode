/*
 * XREFs of XpressDecodeCreate @ 0x1405CA6C0
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409590C0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140958420 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
