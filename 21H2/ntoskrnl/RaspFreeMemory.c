/*
 * XREFs of RaspFreeMemory @ 0x1403B2678
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403B1CB8 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1403B2274 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403B2494 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x1403B24AC (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403B25AC (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403B2694 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x1403B2780 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1403B33A0 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5D0C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C6044 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C63C0 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1409F5708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
