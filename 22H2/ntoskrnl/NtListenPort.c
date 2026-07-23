/*
 * XREFs of NtListenPort @ 0x1407D41A0
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1405EAA60 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __cdecl NtListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  NTSTATUS result; // eax

  do
    result = NtReplyWaitReceivePortEx(PortHandle, 0LL, 0LL, ConnectionRequest, 0LL);
  while ( !result && (ConnectionRequest->u2.s2.Type & 0x7FFF) != 0xA );
  return result;
}
