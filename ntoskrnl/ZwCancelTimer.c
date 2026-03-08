/*
 * XREFs of ZwCancelTimer @ 0x140412F30
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x1405EB7E0 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState);
}
