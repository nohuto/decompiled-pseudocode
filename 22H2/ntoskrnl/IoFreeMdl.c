/*
 * XREFs of IoFreeMdl @ 0x1402ACFB0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1402510F0 (IopBuildDeviceIoControlRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x140262090 (CcCopyBytesToUserBuffer.c)
 *     IopDropIrp @ 0x14028CCA8 (IopDropIrp.c)
 *     IopUnlockAndFreeMdl @ 0x14028CE0C (IopUnlockAndFreeMdl.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x140368B40 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14036B23C (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403715A0 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x1403C1194 (MiZeroPageWrite.c)
 *     HalPutScatterGatherListV2 @ 0x1403CE2D8 (HalPutScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1403D3990 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FF834 (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14050EB80 (HalBuildMdlFromScatterGatherListV3.c)
 *     HalPutScatterGatherListV3 @ 0x14050F348 (HalPutScatterGatherListV3.c)
 *     HalpDmaFreeChildAdapter @ 0x140511230 (HalpDmaFreeChildAdapter.c)
 *     HalFlushAdapterBuffersEx @ 0x1405144A0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140514730 (HalMapTransferEx.c)
 *     CcLockSystemCacheBuffer @ 0x140537810 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x140538AA0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x14053F668 (HvlGetCoverageData.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x140551184 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopMcReleaseMdl @ 0x14055F214 (IopMcReleaseMdl.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     DifIoFreeMdlWrapper @ 0x1405DF480 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140641234 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642938 (MiPrepareImagePagesForHotPatch.c)
 *     MiDeleteImageCreationMdls @ 0x1406A7448 (MiDeleteImageCreationMdls.c)
 *     CcMdlRead @ 0x14073EEB0 (CcMdlRead.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1407653A4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     CcMdlReadComplete2 @ 0x1407C3DFC (CcMdlReadComplete2.c)
 *     sub_1407D94A8 @ 0x1407D94A8 (sub_1407D94A8.c)
 *     FsRtlpFreeMdlChain @ 0x14093EFB8 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940520 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409405C0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941648 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140944790 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanupEx @ 0x140944A28 (IopExceptionCleanupEx.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094E410 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140965E9C (PnprFreeMappingReserve.c)
 *     AlpcpFreeCompletionList @ 0x140979774 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x1409797D0 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988BDC (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A052C0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A34338 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140A345B0 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A353F8 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A3A174 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140A3BD10 (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 *     sub_140A4DB30 @ 0x140A4DB30 (sub_140A4DB30.c)
 *     ViAllocateMapRegisterFile @ 0x140AC8C84 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140AC9A90 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
