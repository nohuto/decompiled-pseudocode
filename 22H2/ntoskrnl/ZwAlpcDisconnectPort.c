/*
 * XREFs of ZwAlpcDisconnectPort @ 0x1403FAAA0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
