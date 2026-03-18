/*
 * XREFs of MiGetProcessPartition @ 0x140275574
 * Callers:
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1406F78B0 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MiInsertVadCharges @ 0x1406FA960 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1406FB4F0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB68C (MiReleaseVadEventBlocks.c)
 *     MmDeleteProcessAddressSpace @ 0x140705A98 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x14070615C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiDeleteVadBitmap @ 0x140706C64 (MiDeleteVadBitmap.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiDecommitRegion @ 0x140744A70 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140765364 (MiReturnFullProcessCommitment.c)
 *     MiInitializePartialVad @ 0x14076DBFC (MiInitializePartialVad.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     VmpPauseResumeNotify @ 0x1409DD3C4 (VmpPauseResumeNotify.c)
 *     MmRotatePhysicalView @ 0x140A31C40 (MmRotatePhysicalView.c)
 *     MiReturnVadCharges @ 0x140A3C514 (MiReturnVadCharges.c)
 *     MiCreateVsmEnclave @ 0x140A3DB30 (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A43240 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140A434D0 (MmInSwapVirtualAddresses.c)
 *     MiLogCommitRequestFailed @ 0x140A439C4 (MiLogCommitRequestFailed.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140A46180 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47D68 (MiFinishPlaceholderVadReplacement.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
