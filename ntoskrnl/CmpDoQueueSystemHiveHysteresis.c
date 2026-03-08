/*
 * XREFs of CmpDoQueueSystemHiveHysteresis @ 0x140A0CE68
 * Callers:
 *     CmpUpdateSystemHiveHysteresis @ 0x140731F58 (CmpUpdateSystemHiveHysteresis.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x14081D478 (CmRegisterSystemHiveLimitCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char __fastcall CmpDoQueueSystemHiveHysteresis(int a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538987843LL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpSystemHiveHysteresisWorker;
    CmpSystemHiveHysteresisHitRatio = a1;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
