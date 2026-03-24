/*
 * XREFs of XpressDecodeCreate @ 0x1405CA3D0
 * Callers:
 *     CMFReadCompressedSegment @ 0x140958F40 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1409582A0 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
