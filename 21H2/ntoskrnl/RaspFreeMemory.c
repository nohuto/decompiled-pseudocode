/*
 * XREFs of RaspFreeMemory @ 0x1403B2508
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403B1B48 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1403B2104 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1403B2324 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x1403B233C (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403B243C (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x1403B2524 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x1403B2610 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1403B3230 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5ADC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C5E14 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C6190 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1409F4708 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1, (__int64)a2, a3, a4);
}
