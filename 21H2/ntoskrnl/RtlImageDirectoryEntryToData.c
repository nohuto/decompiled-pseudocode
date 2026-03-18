/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1402D6CB0
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1402D7FF8 (RtlCaptureRetpolineImportRvas.c)
 *     RtlCaptureImageExceptionValues @ 0x1402D8EEC (RtlCaptureImageExceptionValues.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403C3840 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403DC578 (KiIsPgiKernel.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x1405A3DC0 (MiReplacePatchImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1405EEF88 (RtlpGetRetpolineStubsFunctionTable.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406ACDDC (MiCaptureRetpolineRelocationTables.c)
 *     MiInitializeWowPeb @ 0x1406D8E14 (MiInitializeWowPeb.c)
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     LdrpSearchResourceSection_U @ 0x14075717C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140757C9C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407584B4 (MiSnapThunk.c)
 *     LdrpAccessResourceData @ 0x14075883C (LdrpAccessResourceData.c)
 *     EtwpFindDebugId @ 0x1407589DC (EtwpFindDebugId.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C330 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407614BC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiResolveImageImports @ 0x140761604 (MiResolveImageImports.c)
 *     MiCacheImageSymbols @ 0x1407619F4 (MiCacheImageSymbols.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     KsepPatchDriverImportsTable @ 0x1409644D8 (KsepPatchDriverImportsTable.c)
 *     MmReplaceImportEntriesForVerifier @ 0x14096A1D0 (MmReplaceImportEntriesForVerifier.c)
 *     MiSnapUnresolvedImport @ 0x14097838C (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x14097F800 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x1409B64E0 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1409BE864 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x1409C0580 (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x140A19B28 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x140A7BE54 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140A8A0C8 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140A934D8 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140A93724 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140A9391C (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140A93CE4 (ViThunkFindAllThunkedImports.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140B0593C (MiDoesDriverProvideImportsForDriver.c)
 *     MiApplyDynamicRelocations @ 0x140B06E60 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140B0A000 (MiBuildImportsForBootDrivers.c)
 *     ViThunkFindExportAddress @ 0x140B0DEB0 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x140B52AFC (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1402D6CE8 (RtlpImageDirectoryEntryToDataEx.c)
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
