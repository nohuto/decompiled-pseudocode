/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14073AE8C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407384E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     AlpcpCaptureMessageData @ 0x14073AF30 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  return AlpcpCaptureMessageData(a1, *(unsigned __int16 *)(a1 + 240), *(_QWORD *)(a1 + 176));
}
