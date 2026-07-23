/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1403F9E60
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14034D558 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
