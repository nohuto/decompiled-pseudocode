/*
 * XREFs of ZwRequestPort @ 0x1403FD4A0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402400A8 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
