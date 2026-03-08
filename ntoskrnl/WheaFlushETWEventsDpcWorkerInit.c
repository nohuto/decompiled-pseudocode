/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x1403AC228
 * Callers:
 *     WheapEtwEnableCallback @ 0x14085D170 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheaFlushETWEventsDpcWorker, 0, 0x70uLL);
  LODWORD(WheaFlushETWEventsDpcWorker) = 275;
  *(&WheaFlushETWEventsDpcWorker + 4) = (ULONG_PTR)&WheaFlushETWEventsDpcWorker;
  *(&WheaFlushETWEventsDpcWorker + 3) = (ULONG_PTR)WheaFlushETWEventsDpcRoutine;
  stru_140C2B5C0.WorkerRoutine = (void (__fastcall *)(void *))WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  qword_140C2B5E8 = (__int64)WheapProcessWaitingETWEvents;
  *(&WheaFlushETWEventsDpcWorker + 7) = 0LL;
  *(&WheaFlushETWEventsDpcWorker + 2) = 0LL;
  stru_140C2B5C0.Parameter = &WheaFlushETWEventsDpcWorker;
  stru_140C2B5C0.List.Flink = 0LL;
  dword_140C2B5E0 = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}
