/*
 * XREFs of AlpcpDispatchMessage @ 0x1407141B8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToPort @ 0x140715F0C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1407CB7E0 (AlpcpDispatchNewMessage.c)
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
