/*
 * XREFs of AlpcpUnlockMessage @ 0x140716BD8
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140712838 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     NtAlpcOpenSenderProcess @ 0x140714820 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendCloseMessage @ 0x140714B20 (AlpcpSendCloseMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x140715730 (NtAlpcQueryInformationMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140715930 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140715F0C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407168B0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDisconnectPort @ 0x140716FA8 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x1407178BC (AlpcpFlushQueue.c)
 *     AlpcpProcessConnectionRequest @ 0x140717E20 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140769704 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderThread @ 0x140769DB0 (NtAlpcOpenSenderThread.c)
 *     NtSecureConnectPort @ 0x140774850 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140774E0C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpCreateReserve @ 0x140781384 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140781C5C (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x140793E30 (NtAlpcCancelMessage.c)
 *     AlpcReserveDestroyProcedure @ 0x140794020 (AlpcReserveDestroyProcedure.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1407CB7E0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407CFC50 (AlpcpReceiveSynchronousReply.c)
 *     LpcpCopyRequestData @ 0x14097523C (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140975AB0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1409760D8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140977A1C (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
