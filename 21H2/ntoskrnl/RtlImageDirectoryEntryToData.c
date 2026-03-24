/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1402532D0
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x1403725AC (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140397BE8 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B6F70 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403CD258 (KiIsPgiKernel.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058FBE0 (RtlpGetRetpolineStubsFunctionTable.c)
 *     AslpFileQueryExportName_Vb @ 0x1405D226C (AslpFileQueryExportName_Vb.c)
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x140612560 (RtlFindExportedRoutineByName.c)
 *     MiInitializeWowPeb @ 0x14068BBB4 (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x14068D9BC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14068DA98 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14068DCE4 (LdrpSearchResourceSection_U.c)
 *     EtwpFindDebugId @ 0x1406AB300 (EtwpFindDebugId.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140712C50 (MiCaptureRetpolineRelocationTables.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CB78 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075CEDC (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075CF74 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075CFC4 (MiResolveImageImports.c)
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075D660 (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x14075DBC0 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x1407731A4 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x1408C0458 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1408D11FC (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D7810 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x140910730 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x140919364 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x14091AF50 (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C234C (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1409C8E2C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409D8AA4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D8E2C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D8EBC (ViThunkApplyThunksCurrentSession.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     ViThunkFindExportAddress @ 0x140A4F010 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140A4F5D8 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A50464 (MiDoesDriverProvideImportsForDriver.c)
 *     MiBuildImportsForBootDrivers @ 0x140A56038 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140A92C6C (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140253308 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, a4, (__int64)v7);
  v5 = v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
