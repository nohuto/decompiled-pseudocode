/*
 * XREFs of MiMakeSubsectionPte @ 0x140278A5C
 * Callers:
 *     MiInitializePrototypePtes @ 0x140635A1C (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x140635B30 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x14069F848 (MiAllocatePerSessionProtos.c)
 *     MiBuildImageControlArea @ 0x140702908 (MiBuildImageControlArea.c)
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
