/*
 * XREFs of MmUnmapLockedPages @ 0x14029D0C0
 * Callers:
 *     MiValidateInPage @ 0x14023AEE0 (MiValidateInPage.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402659C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140266374 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x1402686A4 (SmFpFree.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     MiUnlockFlushMdl @ 0x1402D7A68 (MiUnlockFlushMdl.c)
 *     HalPutScatterGatherList @ 0x1402F6340 (HalPutScatterGatherList.c)
 *     MiZeroPageWrite @ 0x1403193E8 (MiZeroPageWrite.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     SmKmUnlockMdl @ 0x14032989C (SmKmUnlockMdl.c)
 *     MiSectionCreated @ 0x140359E2C (MiSectionCreated.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB10 (HalpDmaFreeChildAdapter.c)
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2520 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2630 (HalFlushAdapterBuffersEx.c)
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     IopUnlockAndFreeMdl @ 0x1403F0844 (IopUnlockAndFreeMdl.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5640 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C5F60 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C683C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C7DCC (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferThin @ 0x1404CACF0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB230 (HalpAllocateCommonBufferThin.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x14052D690 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x140538FCC (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14053D0A0 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x140541070 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140583794 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405838BC (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x140583D0C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059FCE8 (SmPrepareForFatalPageError.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0548 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405B0608 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x1407027A4 (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7DC8 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864DE0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408650C8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408653B4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1408654B8 (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408913E8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14089BDF0 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089C9A8 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x14095AAD0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14095B090 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1409CE3D4 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E74F8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiMappingHasIoTracker @ 0x14029D1D0 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x140530C30 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055EFA0 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076D36C (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v3; // r8d
  __int64 ByteOffset; // r9
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi

  v3 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = MiRetardMdl(MemoryDescriptorList);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v6 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace((ULONG_PTR)BaseAddress);
  }
  else
  {
    v7 = (unsigned __int64)BaseAddress - v3;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    if ( (unsigned int)MiMappingHasIoTracker(v7) == 1 )
      MiZeroAndFlushPtes(v7, v6);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v6) = v6 + 1;
    if ( (dword_140CFB17C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
}
