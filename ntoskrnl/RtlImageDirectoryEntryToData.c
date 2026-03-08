/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14035E710
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x1402B274C (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1402E1A7C (RtlCaptureRetpolineImportRvas.c)
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140371248 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403ACD5C (KiIsPgiKernel.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1405AFE24 (RtlpGetRetpolineStubsFunctionTable.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x140640AF0 (MiReplacePatchImportEntry.c)
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14076CCAC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiResolveImageImports @ 0x14076F7A4 (MiResolveImageImports.c)
 *     EtwpFindDebugId @ 0x140775478 (EtwpFindDebugId.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407849F8 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140784BDC (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiInitializeWowPeb @ 0x140795138 (MiInitializeWowPeb.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     LdrpAccessResourceData @ 0x1407E987C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1407E9958 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1407EA480 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFindExportedRoutineByName @ 0x1407EBE40 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407ECC30 (MiSnapThunk.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1407F5944 (MiCaptureRetpolineRelocationTables.c)
 *     MiCacheImageSymbols @ 0x1407F7234 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x1407F72E0 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x140800258 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x1409B66B0 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409BF024 (LdrRelocateImageWithBias.c)
 *     MiSnapUnresolvedImport @ 0x140A283DC (MiSnapUnresolvedImport.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2A95C (MmReplaceImportEntriesForVerifier.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A41358 (MiMarkKernelCfgAddressTakenImports.c)
 *     AslpFileQueryExportName @ 0x140A565BC (AslpFileQueryExportName.c)
 *     RtlFindHotPatchInformation @ 0x140A7383C (RtlFindHotPatchInformation.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABA164 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140AC7A1C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140AD8160 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140AD83AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140AD858C (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140AD8940 (ViThunkFindAllThunkedImports.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     MiApplyDynamicRelocations @ 0x140B39134 (MiApplyDynamicRelocations.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140B3C3A0 (MiDoesDriverProvideImportsForDriver.c)
 *     ViThunkFindExportAddress @ 0x140B4F0CC (ViThunkFindExportAddress.c)
 *     MiBuildImportsForBootDrivers @ 0x140B5DAD4 (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140B97620 (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14035E748 (RtlpImageDirectoryEntryToDataEx.c)
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
