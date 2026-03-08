/*
 * XREFs of KeRemoveQueue @ 0x1402E9390
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14038AA00 (ExpWorkerFactoryManagerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403AE820 (IopPassiveInterruptRealtimeWorker.c)
 *     FsRtlWorkerThread @ 0x1403AEA70 (FsRtlWorkerThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1407741A4 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
