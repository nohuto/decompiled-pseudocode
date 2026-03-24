/*
 * XREFs of RaspAllocateMemory @ 0x1403B3A08
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403B182C (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x1403B2104 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x1403B2610 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1403B2E7C (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x1403B2F54 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1403B3230 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403B3630 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x1403B3980 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5ADC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C5E14 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
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
