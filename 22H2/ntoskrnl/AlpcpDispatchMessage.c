/*
 * XREFs of AlpcpDispatchMessage @ 0x140717360
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToPort @ 0x14071B25C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407384E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140739DE0 (AlpcpDispatchNewMessage.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage();
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread();
  return AlpcpDispatchReplyToPort();
}
