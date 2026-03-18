/*
 * XREFs of MiMakeDemandZeroPte @ 0x140284858
 * Callers:
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiAddMappedPtes @ 0x1406AD7A0 (MiAddMappedPtes.c)
 *     MiParseImageSectionHeaders @ 0x1406B0AD0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1406B0EE4 (MiInitializePrototypePtes.c)
 *     MiPrefetchDriverPages @ 0x1406FA230 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x140748518 (MiChargeSegmentCommit.c)
 *     MmFreeNonCachedMemory @ 0x140A2DB70 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
