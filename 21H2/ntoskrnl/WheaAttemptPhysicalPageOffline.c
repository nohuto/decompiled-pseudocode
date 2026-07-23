/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x14095D530
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x1404D00EC (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x1404D028C (HalpPmemErrorDeferredHandler.c)
 *     KiMcheckAlternateReturn @ 0x1405268C0 (KiMcheckAlternateReturn.c)
 *     WheapPfaMemoryCheck @ 0x14095E5F4 (WheapPfaMemoryCheck.c)
 *     WheapPredictiveFailureAnalysis @ 0x14095E920 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095D87C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptPhysicalPageOffline(__int64 a1, char a2, unsigned __int8 a3)
{
  unsigned __int64 v5; // rcx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[6]; // [rsp+50h] [rbp-30h] BYREF

  WorkItem.List.Blink = 0LL;
  v5 = (unsigned __int64)(unsigned int)a1 << 12;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return WheapAttemptPhysicalPageOffline(v5, a1, a2, a3, 0);
  memset(&v8[2], 0, 32);
  *(_WORD *)((char *)&v8[2] + 1) = a3;
  v8[0] = v5;
  v8[1] = a1;
  LOBYTE(v8[2]) = a2;
  KeInitializeEvent((PRKEVENT)&v8[3], NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v8;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&v8[3], Executive, 0, 0, 0LL);
  return HIDWORD(v8[2]);
}
