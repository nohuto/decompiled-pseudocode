/*
 * XREFs of KeRemoveQueue @ 0x14031CB10
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14038CEC0 (ExpWorkerFactoryManagerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403B35E0 (IopPassiveInterruptRealtimeWorker.c)
 *     FsRtlWorkerThread @ 0x1403B3760 (FsRtlWorkerThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x14077F2E0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
