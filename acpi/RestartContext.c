/*
 * XREFs of RestartContext @ 0x1C00512E8
 * Callers:
 *     SleepQueueDpc @ 0x1C0005AC0 (SleepQueueDpc.c)
 *     AMLIRestartContext @ 0x1C0048D0C (AMLIRestartContext.c)
 *     RestartCtxtCallback @ 0x1C0051440 (RestartCtxtCallback.c)
 *     AsyncCallBack @ 0x1C00543D8 (AsyncCallBack.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 *     TimeoutCallback @ 0x1C00551A0 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C00AB82C (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x1C004774C (OSQueueWorkItem.c)
 *     LogSchedEvent @ 0x1C004E3AC (LogSchedEvent.c)
 */

__int64 __fastcall RestartContext(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // r9
  unsigned int inserted; // ebx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *(_QWORD *)(a1 + 72);
  LogSchedEvent(1380275028, a1, a1, v5, *(_QWORD *)(a1 + 120));
  if ( KeGetCurrentIrql() >= 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    *(_DWORD *)(a1 + 64) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( (gdwfAMLI & 4) == 0 || !(unsigned __int8)ExTryQueueWorkItem(a1 + 360, 1LL) )
      OSQueueWorkItem((_QWORD *)(a1 + 360));
    return 32772;
  }
  else
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    inserted = InsertReadyQueue((char *)a1, a2);
    KeReleaseSpinLock(&SpinLock, NewIrql);
  }
  return inserted;
}
