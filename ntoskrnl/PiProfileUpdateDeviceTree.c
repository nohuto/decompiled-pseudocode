/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x140960784
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x140960BA8 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140960C54 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  Pool2->Parameter = Pool2;
  ExQueueWorkItem(Pool2, CriticalWorkQueue);
  return 0LL;
}
