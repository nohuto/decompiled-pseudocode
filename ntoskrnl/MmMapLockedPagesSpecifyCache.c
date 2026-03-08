/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x1403272A0
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140205174 (EtwpAllocateTraceBuffer.c)
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     KeFlushIoBuffers @ 0x1402DCDE0 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfo @ 0x1402F7C60 (MiGetWorkingSetInfo.c)
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14038CE84 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403A6784 (PpmHeteroInitializeHgsSupport.c)
 *     HalpDmaAcquireBufferMappings @ 0x140453764 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffers @ 0x1404544F2 (HalpDmaSyncMapBuffers.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14045CBDC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14045D93E (SmFpAllocate.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FD754 (HalpDmaCheckMdlAccessibility.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 *     HalCreateCommonBufferFromMdl @ 0x14050FA20 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14050FF60 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x140510B70 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140511380 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405116E8 (HalpAllocateCommonBufferDmarThin.c)
 *     CcLockSystemCacheBuffer @ 0x140535340 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14057CF80 (KiOpPatchCode.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405A36E0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405A3804 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405A3C30 (PspIumFreePhysicalPages.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1405CA570 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x1405CB248 (SmMapPage.c)
 *     SmPrepareForFatalPageError @ 0x1405CB3E4 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CD074 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CD258 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x1405E5220 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x1405FEEF0 (EtwpAllocatePartitionMemory.c)
 *     MmMapLockedPages @ 0x14061C4A0 (MmMapLockedPages.c)
 *     MiPersistMdl @ 0x14063C214 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiTransferMemoryPagefileData @ 0x14065E4C8 (MiTransferMemoryPagefileData.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406B69F0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140704270 (FsRtlNotifyCompleteIrp.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 *     MiCreateMdl @ 0x1407F223C (MiCreateMdl.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     ExInitializeLeapSecondData @ 0x140850BB0 (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140931508 (HalpDmaAllocateScatterMemory.c)
 *     IopAllocateAndLockMdl @ 0x1409410EC (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094A574 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094A8B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14094FA50 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x1409503F8 (PipGetPersistentMemory.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 *     NtStartProfile @ 0x140A019E0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A025D0 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4AE60 @ 0x140A4AE60 (sub_140A4AE60.c)
 *     PopAllocatePages @ 0x140A9E958 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140AC4C84 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140AC6044 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140AC678C (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE09B8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140AEF010 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x14028A2D0 (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x14029B1A0 (MiMappingHasIoReferences.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiIssueNoPtesBugcheck @ 0x14062CC28 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x14065EDA4 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
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
  __int64 *v17; // r14
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
      if ( ((qword_140C66A30 << 9) - qword_140C695F0) << 12 < v14
        && (v13 >= qword_140C69610 || v11 >= qword_140C69610 - v13)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140C695E0;
        return 0LL;
      }
    }
    v15 = v11;
    if ( MmProtectFreedNonPagedPool )
      v15 = v11 + 1;
    v16 = MiReservePtes(&qword_140C695C0, v15);
    v17 = (__int64 *)v16;
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
          MiMappingHasIoReferences((unsigned __int64)v19);
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
        MiReleasePtes((__int64)&qword_140C695C0, v17, v15);
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
