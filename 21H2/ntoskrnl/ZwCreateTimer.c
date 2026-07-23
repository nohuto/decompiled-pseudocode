/*
 * XREFs of ZwCreateTimer @ 0x1403FBDE0
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140889508 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
