/*
 * XREFs of ZwSetTimerEx @ 0x140415AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&TimerSetInformationClass);
}
