/*
 * XREFs of ZwOpenSession @ 0x1403FBFC0
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x14069C4B4 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
