/*
 * XREFs of ZwCancelTimer @ 0x14041C380
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x14061DC40 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState);
}
