/*
 * XREFs of MiMakeSubsectionPte @ 0x14021BF1C
 * Callers:
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1406B0AD0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1406B0EE4 (MiInitializePrototypePtes.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
