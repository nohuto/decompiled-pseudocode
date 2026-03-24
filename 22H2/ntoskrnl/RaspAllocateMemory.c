/*
 * XREFs of RaspAllocateMemory @ 0x1403AE828
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403AC64C (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x1403ACF24 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x1403AD430 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1403ADC9C (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x1403ADD74 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1403AE050 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403AE450 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x1403AE7A0 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5A1C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C5D54 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14039BE84 (BgpFwAllocateMemory.c)
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
