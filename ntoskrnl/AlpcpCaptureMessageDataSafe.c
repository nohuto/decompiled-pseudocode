/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x1407CC88C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpCaptureMessageData @ 0x1407CC930 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  return AlpcpCaptureMessageData(a1, *(unsigned __int16 *)(a1 + 240), *(_QWORD *)(a1 + 176));
}
