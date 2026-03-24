/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1405E3A5C
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1405DDB60 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1405DECC8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E6EE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1405E7C70 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405EA7A0 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
