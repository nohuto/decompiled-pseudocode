/*
 * XREFs of ObReferenceObjectSafe @ 0x1402CBCB0
 * Callers:
 *     AlpcpReferenceConnectedPort @ 0x1406D4F38 (AlpcpReferenceConnectedPort.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140716180 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407168B0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDisconnectPort @ 0x140716FA8 (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x140717700 (AlpcpFlushMessagesPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x140717CC0 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpQueryRemoteView @ 0x140774F54 (AlpcpQueryRemoteView.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1407CBA00 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 *     AlpcpPortQueryServerInfo @ 0x1409760D8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140976C1C (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x140978F7C (ObpCreateTypeArray.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 *     IovpBuildDriverObjectList @ 0x140ABE8F8 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
