/*
 * XREFs of ZwRecoverEnlistment @ 0x1403FC780
 * Callers:
 *     CmpRecoverEnlistment @ 0x140874EDC (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
