/*
 * XREFs of MiMakeSubsectionPte @ 0x140368AAC
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     MiBuildImageControlArea @ 0x1407F3030 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1407F3AF0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1407F3F04 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
