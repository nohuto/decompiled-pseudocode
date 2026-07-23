/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140286140
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x1403720FC (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140397D38 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B70E0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403CD3C8 (KiIsPgiKernel.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058FE10 (RtlpGetRetpolineStubsFunctionTable.c)
 *     AslpFileQueryExportName_Vb @ 0x1405D226C (AslpFileQueryExportName_Vb.c)
 *     MiInitializeWowPeb @ 0x1405EBA24 (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x1405ED82C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1405ED908 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x1405EDB54 (LdrpSearchResourceSection_U.c)
 *     EtwpFindDebugId @ 0x1406099F0 (EtwpFindDebugId.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x1406A2010 (RtlFindExportedRoutineByName.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406C12A0 (MiCaptureRetpolineRelocationTables.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075D134 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075D184 (MiResolveImageImports.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075D820 (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x14075DD80 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x140773364 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x1408C05B8 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1408D135C (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D7970 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x140910890 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409194C4 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x14091B0B0 (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C334C (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1409C9E2C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409D9AA4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D9E2C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D9EBC (ViThunkApplyThunksCurrentSession.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     ViThunkFindExportAddress @ 0x140A50010 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140A505D8 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A51464 (MiDoesDriverProvideImportsForDriver.c)
 *     MiBuildImportsForBootDrivers @ 0x140A57038 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140A93C6C (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140286178 (RtlpImageDirectoryEntryToDataEx.c)
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
