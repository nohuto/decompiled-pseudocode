/*
 * XREFs of MiSectionControlArea @ 0x1402958E0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x140291460 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MiCreateSystemSection @ 0x1403728BC (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14039E594 (MiCountSystemImageCommitment.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054446C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14054DB8C (MiReferenceAweHandle.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140607508 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x140608BE4 (MmCreateSpecialImageSection.c)
 *     MmGetSectionInformation @ 0x140621350 (MmGetSectionInformation.c)
 *     MiMapViewInSystemSpace @ 0x140635F9C (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140637780 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSectionDelete @ 0x140638220 (MiSectionDelete.c)
 *     MiSectionClose @ 0x140638910 (MiSectionClose.c)
 *     MiSectionOpen @ 0x140638940 (MiSectionOpen.c)
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406396D0 (MiMapParametersInitialize.c)
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 *     MmExtendSection @ 0x14066933C (MmExtendSection.c)
 *     MmCheckImageMapping @ 0x140670B98 (MmCheckImageMapping.c)
 *     PsQuerySectionSignatureInformation @ 0x140683970 (PsQuerySectionSignatureInformation.c)
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     MiCfgMarkValidEntries @ 0x1406FAA44 (MiCfgMarkValidEntries.c)
 *     MiComputeProcessUserVa @ 0x1406FC2F0 (MiComputeProcessUserVa.c)
 *     MiMapExParametersInitialize @ 0x1406FCE88 (MiMapExParametersInitialize.c)
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MmGetFileObjectForSection @ 0x140701AC0 (MmGetFileObjectForSection.c)
 *     PspInitializeFullProcessImageName @ 0x14070F8F4 (PspInitializeFullProcessImageName.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075BB48 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x14075BE34 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x14075C7B4 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x14075C8B4 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075D5C0 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x14075E09C (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x14075E354 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14075E45C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140772F00 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x140789F28 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x1407A1A34 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1407CDE74 (MiFreeRetpolineImportInfo.c)
 *     MmGetFileNameForSection @ 0x1408C41AC (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C45A0 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x1408C79E0 (MiLogSectionObjectEvent.c)
 *     MiApplyDriverHotPatch @ 0x1408C8E04 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CA898 (MiIdentifyPatchImageWritablePages.c)
 *     MiLoadHotPatch @ 0x1408CAC20 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CCB58 (MiOpenHotPatchFile.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0B04 (MiIsImageFullyRetpolined.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D1200 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3A0C (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BF8 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x1408D7F78 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x1409C20A0 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A54F90 (MiInitializeCfg.c)
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
