/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14027CE40
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     KeFlushIoBuffers @ 0x140346DC0 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x14035DB70 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfo @ 0x140362BC0 (MiGetWorkingSetInfo.c)
 *     EtwpAllocateTraceBuffer @ 0x140370EEC (EtwpAllocateTraceBuffer.c)
 *     BgpFwAllocateMemory @ 0x14038682C (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14038F344 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x14039ED70 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403ABC14 (PpmHeteroInitializeHgsSupport.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045B704 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffers @ 0x14045C492 (HalpDmaSyncMapBuffers.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140464BBC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14046592E (SmFpAllocate.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FF834 (HalpDmaCheckMdlAccessibility.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F530 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFlushBuffer @ 0x140510CD0 (HalpDmaFlushBuffer.c)
 *     HalCreateCommonBufferFromMdl @ 0x140511F50 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512490 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405130A0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x1405138B0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140513C18 (HalpAllocateCommonBufferDmarThin.c)
 *     CcLockSystemCacheBuffer @ 0x140537810 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14057F490 (KiOpPatchCode.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405A5B90 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405A5CB4 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405A60E0 (PspIumFreePhysicalPages.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1405CCA20 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x1405CD6F8 (SmMapPage.c)
 *     SmPrepareForFatalPageError @ 0x1405CD894 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CF524 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CF708 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x1405E76D0 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x140601354 (EtwpAllocatePartitionMemory.c)
 *     MmMapLockedPages @ 0x14061E950 (MmMapLockedPages.c)
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 *     MiLockPatchIatForDV @ 0x140640510 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiTransferMemoryPagefileData @ 0x140660B18 (MiTransferMemoryPagefileData.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14068AA8C (FsRtlNotifyCompleteIrp.c)
 *     MiCreateMdl @ 0x1406A8F3C (MiCreateMdl.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1407653A4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084C6F0 (FsRtlNotifyFilterReportChange.c)
 *     ExInitializeLeapSecondData @ 0x140854420 (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140934518 (HalpDmaAllocateScatterMemory.c)
 *     IopAllocateAndLockMdl @ 0x14094410C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094D594 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094D8D4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140952A70 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x140953418 (PipGetPersistentMemory.c)
 *     AlpcpInitializeCompletionList @ 0x1409797D0 (AlpcpInitializeCompletionList.c)
 *     NtStartProfile @ 0x140A046D0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A052C0 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x140A353F8 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F9C0 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DB30 @ 0x140A4DB30 (sub_140A4DB30.c)
 *     PopAllocatePages @ 0x140AA1B08 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140AC8C84 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140ACA044 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140ACA78C (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE4250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE49B8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140AF3010 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140B76CB4 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14027E7A0 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402E1560 (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x140335AA0 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x14062F0A8 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1406613F4 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  signed int v6; // esi
  __int64 ByteOffset; // rcx
  char *v10; // rcx
  unsigned __int64 v11; // rbp
  ULONG v12; // ecx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned int v18; // r12d
  void *v19; // rdi
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  unsigned int v23; // esi
  CSHORT v24; // ax
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v6 = Priority;
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v27 = 0;
  v10 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    (_DWORD)v10,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
  if ( (Priority & 0x20000000) == 0 )
  {
    v11 = (((unsigned __int16)v10 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( (Priority & 0x20) == 0 )
    {
      v12 = Priority & 0x3FFFFFFF;
      v13 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v13 = 2048LL;
      v14 = v12 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v12 == 16) + 1);
      if ( ((qword_140C66EB0 << 9) - qword_140C69A70) << 12 < v14
        && (v13 >= qword_140C69A90 || v11 >= qword_140C69A90 - v13)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140C69A60;
        return 0LL;
      }
    }
    v15 = v11;
    if ( MmProtectFreedNonPagedPool )
      v15 = v11 + 1;
    v16 = MiReservePtes(&qword_140C69A40, v15);
    v17 = v16;
    if ( v16 )
    {
      v18 = ((v6 >> 31) & 0xFFFFFFFD) + 4;
      v19 = (void *)(MemoryDescriptorList->ByteOffset + (v16 << 25 >> 16));
      if ( (MiFlags & 0x8000) == 0 && (v6 & 0x40000000) == 0 )
        v18 |= 2u;
      if ( CacheType )
      {
        if ( CacheType == MmWriteCombined )
          v18 |= 0x18u;
      }
      else
      {
        v18 |= 8u;
      }
      v20 = MiFillSystemPtes(v16, v11, (int)MemoryDescriptorList + 48, v18, 0, (__int64)&v27);
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( v20 >= 0 )
      {
        v22 = v27;
        MemoryDescriptorList->MappedSystemVa = v19;
        MemoryDescriptorList->MdlFlags = MdlFlags | 1;
        v23 = v22 & 1;
        if ( v23 )
        {
          MiMappingHasIoReferences(v19);
          MemoryDescriptorList->MdlFlags |= 0x800u;
        }
        if ( (dword_140D1D1CC & 1) != 0 )
        {
          if ( MmProtectFreedNonPagedPool )
            v23 |= 2u;
          v26 = MiProtectionToCacheAttribute(v18);
          MiInsertPteTracker(MemoryDescriptorList, 0LL, v23, v26);
        }
        v24 = MemoryDescriptorList->MdlFlags;
        if ( (v24 & 0x10) != 0 )
          MemoryDescriptorList->MdlFlags = v24 | 0x20;
        return v19;
      }
      if ( (MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      {
        MiReleasePtes(&qword_140C69A40, v17, v15);
        return 0LL;
      }
    }
    else if ( _bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) || !BugCheckOnFailure )
    {
      return 0LL;
    }
    MiIssueNoPtesBugcheck((unsigned int)v11);
  }
  return 0LL;
}
