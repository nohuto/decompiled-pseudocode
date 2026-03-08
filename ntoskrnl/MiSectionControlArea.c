/*
 * XREFs of MiSectionControlArea @ 0x1403349C0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14064976C (MiReferenceAweHandle.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     PspInitializeFullProcessImageName @ 0x140707B78 (PspInitializeFullProcessImageName.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x14070D5FC (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x14070DBD4 (MmCreateSpecialImageSection.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     MiMapExParametersInitialize @ 0x140727F8C (MiMapExParametersInitialize.c)
 *     MiComputeProcessUserVa @ 0x140729824 (MiComputeProcessUserVa.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x14072CE24 (MiConstructLoaderEntry.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14072EE44 (MiObtainSectionForDriver.c)
 *     PsReferenceProcessFilePointer @ 0x14074C940 (PsReferenceProcessFilePointer.c)
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiCompactServiceTable @ 0x14076F608 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x14076F7A4 (MiResolveImageImports.c)
 *     PsQuerySectionSignatureInformation @ 0x140776E70 (PsQuerySectionSignatureInformation.c)
 *     MmCheckImageMapping @ 0x1407955BC (MmCheckImageMapping.c)
 *     MiSectionDelete @ 0x1407C8780 (MiSectionDelete.c)
 *     MiCreateSectionCommon @ 0x1407D01E0 (MiCreateSectionCommon.c)
 *     MiMapParametersInitialize @ 0x1407D5090 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
 *     MiSectionClose @ 0x1407D6390 (MiSectionClose.c)
 *     MiSectionOpen @ 0x1407D63C0 (MiSectionOpen.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     MmGetFileObjectForSection @ 0x1407F15D8 (MmGetFileObjectForSection.c)
 *     MiMapSystemImage @ 0x1407F5DFC (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x1407F5F44 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 *     MiFindDataTableEntryBySection @ 0x1407F6234 (MiFindDataTableEntryBySection.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x14080A578 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x14085ACF4 (MiFreeRetpolineImportInfo.c)
 *     MiReturnSystemImageCommitment @ 0x14085DA60 (MiReturnSystemImageCommitment.c)
 *     MmSectionToSectionObjectPointers @ 0x1408A770E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2BA04 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x140A2CAAC (MiLogSectionObjectEvent.c)
 *     MiIsImageFullyRetpolined @ 0x140A315C8 (MiIsImageFullyRetpolined.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiApplySingleSessionPatch @ 0x140A333E0 (MiApplySingleSessionPatch.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A336F0 (MiCheckPatchesInSupportedSections.c)
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140A376D4 (MiOpenHotPatchFile.c)
 *     MiMapImageForEnclaveUse @ 0x140A3BAD0 (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140A3EB08 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140A40B7C (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x140AB9ED8 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140B3A5E8 (MiInitializeCfg.c)
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
