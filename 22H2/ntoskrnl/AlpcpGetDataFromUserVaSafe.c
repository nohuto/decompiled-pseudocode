/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x140978FFC
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715C44 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BC00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073B350 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073DAE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C497C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
