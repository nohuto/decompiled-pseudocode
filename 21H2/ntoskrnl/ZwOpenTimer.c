/*
 * XREFs of ZwOpenTimer @ 0x14041DE20
 * Callers:
 *     DifZwOpenTimerWrapper @ 0x140622D90 (DifZwOpenTimerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess);
}
