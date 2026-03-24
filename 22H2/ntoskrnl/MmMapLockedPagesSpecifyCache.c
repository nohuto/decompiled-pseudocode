/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x140226C80
 * Callers:
 *     MiValidateInPage @ 0x14023AEE0 (MiValidateInPage.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402659C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140266F10 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x140269DE0 (SmMapPage.c)
 *     CcCompleteAsyncRead @ 0x140277CC0 (CcCompleteAsyncRead.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     KeFlushIoBuffers @ 0x1403007D0 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x140303070 (FsRtlCancelNotify.c)
 *     SmFpAllocate @ 0x1403130C8 (SmFpAllocate.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiInitializeImageProtos @ 0x140336F8C (MiInitializeImageProtos.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     EtwpAllocateTraceBuffer @ 0x14035FF08 (EtwpAllocateTraceBuffer.c)
 *     MiWritePageFileHash @ 0x1403898C4 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x14039BE84 (BgpFwAllocateMemory.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039F2B8 (HalpDmaCheckMdlAccessibility.c)
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD544 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5640 (HalAllocateCommonBufferVector.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C64E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBuffer @ 0x1404C749C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8134 (HalpDmaSyncMapBuffers.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB230 (HalpAllocateCommonBufferThin.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA3E8 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x140524674 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140531BA0 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x140541070 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x140546B78 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x14055D65C (MiValidatePagefilePageHash.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140583794 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405838BC (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x140583D0C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059FCE8 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A14E4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405A16D8 (MdlInvariantPreProcessing1.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0548 (EtwpAllocatePartitionMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x14065C270 (AlpcpInitializeCompletionList.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406666C8 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406746F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140675380 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140675984 (FsRtlNotifyCompleteIrp.c)
 *     MiCreateMdl @ 0x140701344 (MiCreateMdl.c)
 *     ExInitializeLeapSecondData @ 0x1407A92DC (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x1408652F8 (HalpDmaAllocateScatterMemory.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897960 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C050 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089C9A8 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x14095AE20 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 *     PopAllocatePages @ 0x140996B64 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5D4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1409CE94C (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1409CF0A4 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E6C00 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E74F8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1409F1298 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140A4D2E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiMappingHasIoReferences @ 0x1402E8FE4 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x140537480 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x14055ED20 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  MEMORY_CACHING_TYPE v7; // r12d
  char *v8; // rcx
  signed int v9; // esi
  unsigned __int64 v10; // rbp
  ULONG v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // r15
  unsigned int v17; // ecx
  void *locked; // rdi
  unsigned int v19; // r14d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  CSHORT MdlFlags; // cx
  char v25; // si
  CSHORT v26; // cx
  unsigned int v27; // esi
  unsigned int v29; // eax
  int v30; // [rsp+68h] [rbp+10h] BYREF

  v30 = 0;
  v7 = CacheType;
  v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  if ( AccessMode )
  {
    locked = (void *)MiMapLockedPagesInUserSpace(
                       (_DWORD)MemoryDescriptorList,
                       (_DWORD)v8,
                       CacheType,
                       (_DWORD)RequestedAddress,
                       Priority);
    if ( !locked )
      return 0LL;
    return locked;
  }
  v9 = Priority;
  v10 = (((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (Priority & 0x20) == 0 )
  {
    v11 = Priority & 0x3FFFFFFF;
    v12 = 512LL;
    if ( (Priority & 0x3FFFFFFF) != 0x10 )
      v12 = 2048LL;
    *(_QWORD *)&CacheType = ((qword_140C4E0A8 << 9) - qword_140C4EF78) << 12;
    RequestedAddress = (PVOID)((unsigned int)(v11 == 16) + 1);
    v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / (unsigned int)RequestedAddress;
    if ( *(_QWORD *)&CacheType < v13
      && (v12 >= qword_140C4EF98 || v10 >= qword_140C4EF98 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140C4EF68;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes((__int64)&qword_140C4EF40, v14, *(__int64 *)&CacheType, (unsigned __int64)RequestedAddress);
  v16 = v15;
  if ( !v15 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      return 0LL;
    goto LABEL_39;
  }
  v17 = ((v9 >> 31) & 0xFFFFFFFD) + 4;
  locked = (void *)(MemoryDescriptorList->ByteOffset + ((__int64)(v15 << 25) >> 16));
  if ( (MiFlags & 0x10000) != 0 )
    v9 = 0x40000000;
  v19 = v17 | 2;
  if ( (v9 & 0x40000000) != 0 )
    v19 = v17;
  if ( v7 )
  {
    if ( v7 == MmWriteCombined )
      v19 |= 0x18u;
  }
  else
  {
    v19 |= 8u;
  }
  v20 = MiFillSystemPtes(v15, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v30);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( v20 >= 0 )
  {
    v25 = v30;
    v26 = MdlFlags | 1;
    MemoryDescriptorList->MappedSystemVa = locked;
    MemoryDescriptorList->MdlFlags = v26;
    v27 = v25 & 1;
    if ( v27 )
    {
      MiMappingHasIoReferences(locked);
      MemoryDescriptorList->MdlFlags |= 0x800u;
      v26 = MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140CFB17C & 1) != 0 )
    {
      if ( MmProtectFreedNonPagedPool == 1 )
        v27 |= 2u;
      v29 = MiProtectionToCacheAttribute(v19, v21, v22, v23);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v27, v29);
      v26 = MemoryDescriptorList->MdlFlags;
    }
    if ( (v26 & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = v26 | 0x20;
    return locked;
  }
  if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
LABEL_39:
    MiIssueNoPtesBugcheck((unsigned int)v10);
  MiReleasePtes(&qword_140C4EF40, v16, v14);
  return 0LL;
}
