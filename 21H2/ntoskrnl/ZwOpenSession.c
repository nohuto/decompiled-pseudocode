/*
 * XREFs of ZwOpenSession @ 0x1403FCB20
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x140673654 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
