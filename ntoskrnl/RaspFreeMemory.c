/*
 * XREFs of RaspFreeMemory @ 0x140382634
 * Callers:
 *     BgpRasPrintGlyph @ 0x140381CD4 (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x14038223C (RaspRectangleDestroy.c)
 *     RaspGetXExtent @ 0x140382254 (RaspGetXExtent.c)
 *     RaspRasterize @ 0x140382470 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140382570 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x140382708 (RaspGetUnscaledGlyphData.c)
 *     RaspInitializeGlyphData @ 0x1403833CC (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140670ECC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406711FC (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140671560 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140AEAB20 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory(a1);
  return result;
}
