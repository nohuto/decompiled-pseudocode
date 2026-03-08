/*
 * XREFs of ZwCreateTimer @ 0x140413C30
 * Callers:
 *     DifZwCreateTimerWrapper @ 0x1405ECBE0 (DifZwCreateTimerWrapper.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140938BA4 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess);
}
