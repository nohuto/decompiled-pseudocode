/*
 * XREFs of MiMakeDemandZeroPte @ 0x14032E7D8
 * Callers:
 *     MiAddMappedPtes @ 0x1406A56B0 (MiAddMappedPtes.c)
 *     MiPrefetchDriverPages @ 0x1407C81C0 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 *     MiBuildImageControlArea @ 0x1407F3030 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1407F3AF0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1407F3F04 (MiInitializePrototypePtes.c)
 *     MmFreeNonCachedMemory @ 0x140A2AE10 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
