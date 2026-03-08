/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1403439E0
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     CcPostWorkQueueRegular @ 0x140215AE0 (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140216768 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140216F94 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     MiCheckZeroFreeRebalance @ 0x14027DFA0 (MiCheckZeroFreeRebalance.c)
 *     MiAsyncSlabReplenish @ 0x1402DF31C (MiAsyncSlabReplenish.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140358874 (SmKmStoreDeleteWhenEmpty.c)
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x140361A24 (MiScanPagefiles.c)
 *     CcAsyncReadWorker @ 0x1403B8B70 (CcAsyncReadWorker.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1403BE4F0 (CcPostPVCMForDeleteToPartition.c)
 *     CcReEngageWorkerThreads @ 0x1403CEBD0 (CcReEngageWorkerThreads.c)
 *     CcIncrementWriteBehindPriority @ 0x1405339B4 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueSpecial @ 0x140534894 (CcPostWorkQueueSpecial.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140537D14 (CcPostWorkQueueAsyncLazywrite.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405BD890 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     MiWakeLargePageRebuild @ 0x14065BC3C (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x14067E2A0 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x14067E2E4 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x1409D4AD8 (SmStoreCompressionStop.c)
 *     MmScrubMemory @ 0x140A43E64 (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x14033F620 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140343758 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
