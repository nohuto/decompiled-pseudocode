/*
 * XREFs of WmipInitializeRegistration @ 0x140B3CAE8
 * Callers:
 *     WmipDriverEntry @ 0x140B3C550 (WmipDriverEntry.c)
 *     WMIInitialize @ 0x140B3CDD0 (WMIInitialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C2C70 (ExInitializeNPagedLookasideListInternal.c)
 */

void __fastcall WmipInitializeRegistration(int a1)
{
  if ( a1 )
  {
    WmipRegWorkQueue.Parameter = 0LL;
    WmipRegWorkQueue.WorkerRoutine = (void (__fastcall *)(void *))WmipRegistrationWorker;
    WmipRegWorkQueue.List.Flink = 0LL;
    if ( _InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF) != 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    ExInitializeNPagedLookasideListInternal((__int64)&WmipRegLookaside, 0LL, 0LL, 512, 64, 1382640983, 0, 0);
    WmipRegistrationSpinLock = 0LL;
    WmipCancelSpinLock = 0LL;
  }
}
