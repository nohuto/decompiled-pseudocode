/*
 * XREFs of ExQueueWorkItemToPartition @ 0x140277F2C
 * Callers:
 *     CcWorkerThread @ 0x140273870 (CcWorkerThread.c)
 *     CcWriteBehind @ 0x1402767E0 (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x140277688 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140277840 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x140278CE4 (CcPostWorkQueueAsyncRead.c)
 *     MiCheckZeroFreeRebalance @ 0x1402993D0 (MiCheckZeroFreeRebalance.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14033C19C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x14033C2FC (MiScanPagefiles.c)
 *     MmInSwapWorkingSet @ 0x140350CF4 (MmInSwapWorkingSet.c)
 *     CcReEngageWorkerThreads @ 0x14037FC30 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x14038CF00 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x1403B72F0 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9A6C (CcIncrementWriteBehindPriority.c)
 *     MiInSwapStore @ 0x1406FAF88 (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x1406FB22C (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x1408DC16C (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E058 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E0A0 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140240E10 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v8 = ExpTypeToPriority(v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
