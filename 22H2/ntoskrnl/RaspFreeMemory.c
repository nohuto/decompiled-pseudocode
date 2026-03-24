/*
 * XREFs of RaspFreeMemory @ 0x1403AD328
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403AC968 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1403ACF24 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403AD144 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x1403AD15C (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403AD25C (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403AD344 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x1403AD430 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1403AE050 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5A1C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C5D54 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C60D0 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1409F4708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
