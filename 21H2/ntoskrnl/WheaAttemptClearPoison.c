/*
 * XREFs of WheaAttemptClearPoison @ 0x14095D470
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x1404D00EC (HalpMemoryErrorDeferredHandler.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095D87C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptClearPoison(__int64 a1, char a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[6]; // [rsp+50h] [rbp-30h] BYREF

  WorkItem.List.Blink = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return WheapAttemptPhysicalPageOffline(a1, a1 >> 12, a2, 1, 1);
  v4[0] = a1;
  memset(&v4[2], 0, 32);
  v4[1] = a1 >> 12;
  LOBYTE(v4[2]) = a2;
  *(_WORD *)((char *)&v4[2] + 1) = 257;
  KeInitializeEvent((PRKEVENT)&v4[3], NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v4;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&v4[3], Executive, 0, 0, 0LL);
  return HIDWORD(v4[2]);
}
