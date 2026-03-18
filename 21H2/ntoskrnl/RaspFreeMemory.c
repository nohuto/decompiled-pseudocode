/*
 * XREFs of RaspFreeMemory @ 0x1403A8C98
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403A8390 (BgpRasPrintGlyph.c)
 *     RaspRasterize @ 0x1403A8ACC (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403A8BCC (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403A8D68 (RaspGetUnscaledGlyphData.c)
 *     RaspInitializeGlyphData @ 0x1403A9A80 (RaspInitializeGlyphData.c)
 *     RaspGetXExtent @ 0x1403CA20C (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403CA3B4 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14064ED90 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14064F0C0 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14064F438 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140AAE514 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
