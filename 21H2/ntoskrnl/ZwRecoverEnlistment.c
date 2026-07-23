/*
 * XREFs of ZwRecoverEnlistment @ 0x1403FD2E0
 * Callers:
 *     CmpRecoverEnlistment @ 0x140874FEC (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
