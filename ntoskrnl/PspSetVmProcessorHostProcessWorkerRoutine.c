/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409AEA50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
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
