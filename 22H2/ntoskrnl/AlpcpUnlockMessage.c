/*
 * XREFs of AlpcpUnlockMessage @ 0x14071BF28
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715C44 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1407162C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1407177B4 (AlpcpCreateClientPort.c)
 *     NtAlpcOpenSenderProcess @ 0x1407182C0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendCloseMessage @ 0x1407185C0 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140718B1C (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140718F30 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140719264 (AlpcpCancelMessagesByRequestor.c)
 *     NtAlpcQueryInformationMessage @ 0x14071AA80 (NtAlpcQueryInformationMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AC80 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14071B25C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B668 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BC00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407384E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1407395B0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140739DE0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B9A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073DAE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073E1F0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14077940C (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x140779580 (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x14077971C (AlpcpCancelMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407BB524 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderThread @ 0x1407BBB20 (NtAlpcOpenSenderThread.c)
 *     NtSecureConnectPort @ 0x1407C43C0 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C497C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpCreateReserve @ 0x1407D03D4 (AlpcpCreateReserve.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E34F0 (AlpcReserveDestroyProcedure.c)
 *     LpcpCopyRequestData @ 0x1409782DC (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978B50 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140979178 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x14073C150 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AAC0 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
