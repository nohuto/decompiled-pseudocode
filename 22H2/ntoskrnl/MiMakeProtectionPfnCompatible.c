/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x140217E84
 * Callers:
 *     MiMapSinglePage @ 0x140217D78 (MiMapSinglePage.c)
 *     MiFillSystemPtes @ 0x14027E7A0 (MiFillSystemPtes.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     MiMapArbitraryPage @ 0x14035999C (MiMapArbitraryPage.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5488 (MiInitializeNewUltraHugeContext.c)
 *     MiReplacePageOfProtoPool @ 0x14061DA50 (MiReplacePageOfProtoPool.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MiMapMemoryDumpMdl @ 0x14062FDB8 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x1406326E8 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140643F68 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x14065E9DC (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065F160 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB98 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1407447D0 (MiRelocateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140B703E4 (MiProtectSharedUserPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al

  v2 = a1 & 7;
  v3 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v3 )
  {
    if ( v3 == 2 )
      v2 |= 0x18u;
  }
  else
  {
    v2 |= 8u;
  }
  return v2;
}
