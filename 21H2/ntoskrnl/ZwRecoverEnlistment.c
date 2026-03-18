/*
 * XREFs of ZwRecoverEnlistment @ 0x14041E5C0
 * Callers:
 *     CmpRecoverEnlistment @ 0x14091BA74 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey);
}
