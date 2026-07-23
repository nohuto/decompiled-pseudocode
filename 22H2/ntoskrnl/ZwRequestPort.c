/*
 * XREFs of ZwRequestPort @ 0x1403FC940
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14034D558 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
