/*
 * XREFs of IoFreeMdl @ 0x14035AB60
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1402A3B50 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     HalPutScatterGatherList @ 0x1402F6340 (HalPutScatterGatherList.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140303890 (HalBuildMdlFromScatterGatherListV2.c)
 *     MiZeroPageWrite @ 0x1403193E8 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x1403259D0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140329A88 (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140358DF0 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x140359C58 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x14035A9A4 (IopDropIrp.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB10 (HalpDmaFreeChildAdapter.c)
 *     HalMapTransferEx @ 0x14039EFE0 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039F2B8 (HalpDmaCheckMdlAccessibility.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2520 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2630 (HalFlushAdapterBuffersEx.c)
 *     IopUnlockAndFreeMdl @ 0x1403F0844 (IopUnlockAndFreeMdl.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404C5AB0 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA3E8 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1404EBAB0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1404F14D8 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EB0C (MiPrepareImagePagesForHotPatch.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     AlpcpInitializeCompletionList @ 0x14065C270 (AlpcpInitializeCompletionList.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406666C8 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     sub_140667CC8 @ 0x140667CC8 (sub_140667CC8.c)
 *     AlpcpFreeCompletionList @ 0x1406A6214 (AlpcpFreeCompletionList.c)
 *     CcMdlRead @ 0x140701480 (CcMdlRead.c)
 *     MiDeleteImageCreationMdls @ 0x1407027A4 (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x1407028C8 (CcMdlReadComplete2.c)
 *     FsRtlpFreeMdlChain @ 0x14088C4B0 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D990 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DA30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9FC (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408913E8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089814C (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x1408AD720 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CC8DC (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x1408CE49C (MiReleaseHotPatchResources.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0B44 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1408D0DC4 (MiUnlockEntireDriver.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6F3C (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5D4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x1409CE3D4 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // ax
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  MdlFlags = Mdl->MdlFlags;
  if ( (MdlFlags & 0x20) != 0 )
  {
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    MdlFlags = Mdl->MdlFlags;
  }
  if ( (MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
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
