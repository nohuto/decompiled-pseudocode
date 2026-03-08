/*
 * XREFs of MiGetProcessPartition @ 0x14031F9D4
 * Callers:
 *     MiInSwapStore @ 0x14067E2E4 (MiInSwapStore.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x1406ECCF0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x140728E84 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     VmpPauseResumeNotify @ 0x1409DA524 (VmpPauseResumeNotify.c)
 *     MmRotatePhysicalView @ 0x140A2EF10 (MmRotatePhysicalView.c)
 *     MiReturnVadCharges @ 0x140A39830 (MiReturnVadCharges.c)
 *     MiCreateVsmEnclave @ 0x140A3AE48 (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A40560 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140A407F0 (MmInSwapVirtualAddresses.c)
 *     MiLogCommitRequestFailed @ 0x140A40CE4 (MiLogCommitRequestFailed.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140A434AC (MiReferenceNonPagedMemoryProcessList.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 *     MmPerformMemoryListCommand @ 0x140A849F4 (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
