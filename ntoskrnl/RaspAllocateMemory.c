/*
 * XREFs of RaspAllocateMemory @ 0x140383B7C
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403814C4 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x140382254 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x1403827F0 (RaspScanConvert.c)
 *     RaspCreatePointList @ 0x1403831CC (RaspCreatePointList.c)
 *     RaspRectangleCreate @ 0x140383284 (RaspRectangleCreate.c)
 *     RaspInitializeGlyphData @ 0x1403833CC (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403837AC (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140383AF4 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x140670ECC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406711FC (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
