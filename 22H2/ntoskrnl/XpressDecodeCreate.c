/*
 * XREFs of XpressDecodeCreate @ 0x140679DD8
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A02670 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140A01970 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
