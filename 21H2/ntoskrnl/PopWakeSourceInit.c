/*
 * XREFs of PopWakeSourceInit @ 0x140A7445C
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *(*PopWakeSourceInit())()
{
  PVOID *(*result)(); // rax

  PopWakeSourceAvailable.Header.Size = 6;
  PopWakeInfoCount = 0;
  qword_140C24418 = (__int64)&PopWakeInfoList;
  PopWakeInfoList = (__int64)&PopWakeInfoList;
  PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
  PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
  qword_140C243C8 = (__int64)&PopWakeSourceWorkList;
  PopWakeSourceWorkList = &PopWakeSourceWorkList;
  result = PopUpdateWakeSourceWorker;
  PopWakeSourceWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUpdateWakeSourceWorker;
  PopCurrentWakeInfo = 0LL;
  PopPendingWakeInfo = 0LL;
  PopWakeSourceLock = 0LL;
  LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
  PopWakeSourceAvailable.Header.SignalState = 1;
  PopWakeSourceWorkInProgress = 0;
  PopWakeSourceWorkItem.Parameter = 0LL;
  PopWakeSourceWorkItem.List.Flink = 0LL;
  return result;
}
