/*
 * XREFs of ZwSetTimer @ 0x14041C3A0
 * Callers:
 *     DifZwSetTimerWrapper @ 0x140627E00 (DifZwSetTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, DueTime);
}
