/*
 * XREFs of ZwRecoverEnlistment @ 0x1403FD100
 * Callers:
 *     CmpRecoverEnlistment @ 0x140874E8C (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey);
}
