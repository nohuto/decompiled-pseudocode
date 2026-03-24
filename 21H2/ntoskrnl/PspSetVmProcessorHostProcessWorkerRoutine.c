/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A4C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericProcessorCallback @ 0x1402EB178 (KeGenericProcessorCallback.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  KeGenericProcessorCallback(
    (unsigned __int16 *)KeActiveProcessors,
    (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop,
    0LL,
    2);
  return KeSetEvent(Event, 0, 0);
}
