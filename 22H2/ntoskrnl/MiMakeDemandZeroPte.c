/*
 * XREFs of MiMakeDemandZeroPte @ 0x1402AA600
 * Callers:
 *     MiMakeLargePageTable @ 0x14053D954 (MiMakeLargePageTable.c)
 *     MiChargeSegmentCommit @ 0x1406202F0 (MiChargeSegmentCommit.c)
 *     MiInitializePrototypePtes @ 0x140635A1C (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x140635B30 (MiParseImageSectionHeaders.c)
 *     MiAddMappedPtes @ 0x140636970 (MiAddMappedPtes.c)
 *     MiPrefetchDriverPages @ 0x140668420 (MiPrefetchDriverPages.c)
 *     MiBuildImageControlArea @ 0x140702908 (MiBuildImageControlArea.c)
 *     MiSessionCreate @ 0x14078610C (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408C6930 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
