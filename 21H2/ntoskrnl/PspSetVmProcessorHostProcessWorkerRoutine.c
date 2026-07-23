/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A620
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  KeGenericProcessorCallback(
    KeActiveProcessors,
    (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop,
    0LL,
    2);
  return KeSetEvent(Event, 0, 0);
}
