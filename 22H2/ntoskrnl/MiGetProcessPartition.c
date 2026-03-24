/*
 * XREFs of MiGetProcessPartition @ 0x14021AD00
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14063A910 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14063BD10 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MmDeleteProcessAddressSpace @ 0x1406601A4 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140660300 (MiDeleteVadBitmap.c)
 *     MiInSwapStore @ 0x1406FAF88 (MiInSwapStore.c)
 *     MiAllocateProcessShadow @ 0x1406FE00C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MmInSwapVirtualAddresses @ 0x1407349E0 (MmInSwapVirtualAddresses.c)
 *     MiSessionCreate @ 0x14078610C (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408D2BFC (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x1408D7434 (MiLogCommitRequestFailed.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D83D8 (MiFinishPlaceholderVadReplacement.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9B50 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x1408DC060 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x14092F744 (VmpPauseResumeNotify.c)
 *     MmPerformMemoryListCommand @ 0x14099AB3C (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 1838));
}
