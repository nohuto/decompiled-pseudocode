/*
 * XREFs of WheaAttemptClearPoison @ 0x140A05070
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x1405173D0 (HalpMemoryErrorDeferredHandler.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0555C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptClearPoison(__int64 a1, char a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v4[2]; // [rsp+60h] [rbp+27h] BYREF
  char v5; // [rsp+70h] [rbp+37h]
  __int16 v6; // [rsp+71h] [rbp+38h]
  char v7; // [rsp+73h] [rbp+3Ah]
  __int128 v8; // [rsp+74h] [rbp+3Bh] BYREF
  __int64 Event_12; // [rsp+84h] [rbp+4Bh]
  int Event_20; // [rsp+8Ch] [rbp+53h]

  WorkItem.List.Blink = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return WheapAttemptPhysicalPageOffline(a1, a1 >> 12, 0, a2, 1, 1, 0);
  Event_12 = 0LL;
  Event_20 = 0;
  v4[0] = a1;
  v4[1] = a1 >> 12;
  v8 = 0LL;
  v5 = a2;
  v6 = 257;
  v7 = 0;
  KeInitializeEvent((PRKEVENT)((char *)&v8 + 4), NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v4;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v8 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v8;
}
