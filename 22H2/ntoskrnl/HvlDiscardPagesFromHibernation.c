/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1404F78CC
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F7934 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140387960 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(
      MemoryMap,
      0x8000u,
      HvlpHibernateScratchPage,
      (unsigned int)(HvlpHibernateScratchPageCount << 12),
      0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
