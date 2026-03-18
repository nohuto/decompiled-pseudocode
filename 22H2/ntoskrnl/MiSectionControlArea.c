/*
 * XREFs of MiSectionControlArea @ 0x14029F760
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14029F510 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14035F150 (MiCreateSystemSection.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14064BD88 (MiReferenceAweHandle.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiFindDataTableEntryBySection @ 0x1406962B4 (MiFindDataTableEntryBySection.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     MiMapViewInSystemSpace @ 0x1406AD6A4 (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiComputeProcessUserVa @ 0x1406B3118 (MiComputeProcessUserVa.c)
 *     PspInitializeFullProcessImageName @ 0x1406B3468 (PspInitializeFullProcessImageName.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406B908C (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140704868 (MiObtainSectionForDriver.c)
 *     MiConstructLoaderEntry @ 0x140704A3C (MiConstructLoaderEntry.c)
 *     MmExtendSection @ 0x1407065B4 (MmExtendSection.c)
 *     MiSectionClose @ 0x140721560 (MiSectionClose.c)
 *     MiSectionOpen @ 0x140721590 (MiSectionOpen.c)
 *     MiMapParametersInitialize @ 0x1407215BC (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1407216D0 (MiMapViewOfSection.c)
 *     MiSectionDelete @ 0x140721C30 (MiSectionDelete.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 *     MmGetFileObjectForSection @ 0x14076C710 (MmGetFileObjectForSection.c)
 *     DbgkCreateThread @ 0x14077012C (DbgkCreateThread.c)
 *     MiMapExParametersInitialize @ 0x1407A3CB0 (MiMapExParametersInitialize.c)
 *     MiCfgMarkValidEntries @ 0x1407A4C5C (MiCfgMarkValidEntries.c)
 *     MmCheckImageMapping @ 0x1407A5E30 (MmCheckImageMapping.c)
 *     MmGetSectionInformation @ 0x1407BA640 (MmGetSectionInformation.c)
 *     MiCompactServiceTable @ 0x1407BCE34 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x1407BCFD0 (MiResolveImageImports.c)
 *     PsQuerySectionSignatureInformation @ 0x1407C6950 (PsQuerySectionSignatureInformation.c)
 *     MiWriteProtectSystemImages @ 0x14081F1B8 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x14085EBF4 (MiFreeRetpolineImportInfo.c)
 *     MiReturnSystemImageCommitment @ 0x1408618D0 (MiReturnSystemImageCommitment.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC57E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E764 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x140A2F7EC (MiLogSectionObjectEvent.c)
 *     MiIsImageFullyRetpolined @ 0x140A342F8 (MiIsImageFullyRetpolined.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 *     MiApplySingleSessionPatch @ 0x140A36110 (MiApplySingleSessionPatch.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A36420 (MiCheckPatchesInSupportedSections.c)
 *     MiLoadHotPatch @ 0x140A37FD0 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A3A3C0 (MiOpenHotPatchFile.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E7B8 (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140A417E8 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140A4385C (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x140ABDE04 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140B48CF8 (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
