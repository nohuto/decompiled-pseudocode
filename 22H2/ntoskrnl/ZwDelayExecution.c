/*
 * XREFs of ZwDelayExecution @ 0x1403FA0A0
 * Callers:
 *     IovUnloadDrivers @ 0x1409C5300 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}
