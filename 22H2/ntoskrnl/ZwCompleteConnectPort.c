/*
 * XREFs of ZwCompleteConnectPort @ 0x1403FADE0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompleteConnectPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
