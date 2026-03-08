/*
 * XREFs of IoFreeMdl @ 0x1403147E0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14021E4C0 (CcCopyBytesToUserBuffer.c)
 *     CcZeroDataInCache @ 0x140241DBC (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     IopUnlockAndFreeMdl @ 0x1402F9CA8 (IopUnlockAndFreeMdl.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1403002DC (CcMdlWriteComplete2.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x1403BB864 (MiZeroPageWrite.c)
 *     HalPutScatterGatherListV2 @ 0x1403C8D28 (HalPutScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1403CE3F0 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FD754 (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14050C650 (HalBuildMdlFromScatterGatherListV3.c)
 *     HalPutScatterGatherListV3 @ 0x14050CE18 (HalPutScatterGatherListV3.c)
 *     HalpDmaFreeChildAdapter @ 0x14050ED00 (HalpDmaFreeChildAdapter.c)
 *     HalFlushAdapterBuffersEx @ 0x140511F70 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140512200 (HalMapTransferEx.c)
 *     CcLockSystemCacheBuffer @ 0x140535340 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1405365D0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x14053D1C8 (HvlGetCoverageData.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14054ECE4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopMcReleaseMdl @ 0x14055CD74 (IopMcReleaseMdl.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     DifIoFreeMdlWrapper @ 0x1405DCFD0 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14063EDD4 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406B69F0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     sub_140754E6C @ 0x140754E6C (sub_140754E6C.c)
 *     CcMdlReadComplete2 @ 0x140774164 (CcMdlReadComplete2.c)
 *     MiDeleteImageCreationMdls @ 0x14077E610 (MiDeleteImageCreationMdls.c)
 *     FsRtlpFreeMdlChain @ 0x14093BF98 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D5A0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140941770 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094B3F0 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140962E7C (PnprFreeMappingReserve.c)
 *     AlpcpFreeCompletionList @ 0x1409766D0 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140985B2C (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A025D0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A31608 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140A31880 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A37488 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140A39030 (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     sub_140A4AE60 @ 0x140A4AE60 (sub_140A4AE60.c)
 *     ViAllocateMapRegisterFile @ 0x140AC4C84 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v2 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0
      || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v2]) == 0LL) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PMDL))P->FreeEx)(Mdl);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
