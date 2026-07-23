/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x1403FD360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRegisterThreadTerminatePort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
