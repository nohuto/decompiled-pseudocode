/*
 * XREFs of ZwImpersonateClientOfPort @ 0x1403F9E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
