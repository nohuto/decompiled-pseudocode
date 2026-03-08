/*
 * XREFs of ZwRecoverEnlistment @ 0x1404151D0
 * Callers:
 *     CmpRecoverEnlistment @ 0x1407FCAF8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey);
}
