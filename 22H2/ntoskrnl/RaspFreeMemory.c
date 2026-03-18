/*
 * XREFs of RaspFreeMemory @ 0x140385284
 * Callers:
 *     BgpRasPrintGlyph @ 0x140384924 (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x140384E8C (RaspRectangleDestroy.c)
 *     RaspGetXExtent @ 0x140384EA4 (RaspGetXExtent.c)
 *     RaspRasterize @ 0x1403850C0 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403851C0 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x140385358 (RaspGetUnscaledGlyphData.c)
 *     RaspInitializeGlyphData @ 0x14038601C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14067351C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14067384C (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140673BB0 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140AEEAE0 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory(a1);
  return result;
}
