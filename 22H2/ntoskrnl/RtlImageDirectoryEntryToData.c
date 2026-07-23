/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140252B30
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140372D8C (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1403974E8 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B6910 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403CCB58 (KiIsPgiKernel.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058FB20 (RtlpGetRetpolineStubsFunctionTable.c)
 *     AslpFileQueryExportName_Vb @ 0x1405D226C (AslpFileQueryExportName_Vb.c)
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x1406129C0 (RtlFindExportedRoutineByName.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140662620 (MiCaptureRetpolineRelocationTables.c)
 *     MiInitializeWowPeb @ 0x140670754 (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x14067255C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140672638 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x140672884 (LdrpSearchResourceSection_U.c)
 *     EtwpFindDebugId @ 0x14068E2B0 (EtwpFindDebugId.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075C368 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C764 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075C7B4 (MiResolveImageImports.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075CE50 (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x14075D3B0 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x140772E64 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x1408C04A8 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1408D124C (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D7860 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x140910780 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409193B4 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x14091AFA0 (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C235C (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1409C8E3C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409D8AB4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D8E3C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D8ECC (ViThunkApplyThunksCurrentSession.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     ViThunkFindExportAddress @ 0x140A4F010 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140A4F5D8 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A50464 (MiDoesDriverProvideImportsForDriver.c)
 *     MiBuildImportsForBootDrivers @ 0x140A56038 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140A92C6C (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140252B68 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
