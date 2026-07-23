/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1403FA9C0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402400A8 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
