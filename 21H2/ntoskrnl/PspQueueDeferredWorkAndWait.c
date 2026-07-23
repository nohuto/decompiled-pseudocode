/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1409066E4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v6)(struct _LIST_ENTRY *); // [rsp+68h] [rbp-18h]
  struct _LIST_ENTRY *v7; // [rsp+70h] [rbp-10h]
  unsigned int v8; // [rsp+78h] [rbp-8h]
  int v9; // [rsp+7Ch] [rbp-4h]

  WorkItem.List.Blink = 0LL;
  memset(&Event, 0, sizeof(Event));
  v9 = 0;
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  v6 = PspInitializeServerSiloDeferred;
  v7 = a2;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
