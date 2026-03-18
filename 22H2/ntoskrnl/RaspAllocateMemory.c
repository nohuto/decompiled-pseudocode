/*
 * XREFs of RaspAllocateMemory @ 0x1403867CC
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140384114 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x140384EA4 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x140385440 (RaspScanConvert.c)
 *     RaspCreatePointList @ 0x140385E1C (RaspCreatePointList.c)
 *     RaspRectangleCreate @ 0x140385ED4 (RaspRectangleCreate.c)
 *     RaspInitializeGlyphData @ 0x14038601C (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403863FC (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140386744 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x14067351C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14067384C (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14038682C (BgpFwAllocateMemory.c)
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
