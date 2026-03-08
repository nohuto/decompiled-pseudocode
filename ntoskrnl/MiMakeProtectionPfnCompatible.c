/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14034A974
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiMapArbitraryPage @ 0x14029EE40 (MiMapArbitraryPage.c)
 *     MiInsertPhysicalPteMapping @ 0x14029F690 (MiInsertPhysicalPteMapping.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402A2358 (MiCopySinglePage.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MiMapMemoryDumpMdl @ 0x14062D938 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x140630258 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x14065C38C (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140B6C128 (MiProtectSharedUserPage.c)
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
