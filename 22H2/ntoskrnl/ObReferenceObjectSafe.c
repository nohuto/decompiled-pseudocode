/*
 * XREFs of ObReferenceObjectSafe @ 0x140337570
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1407160C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFlushMessagesPort @ 0x140718960 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x140718F30 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14071B4D0 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BC00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14071D138 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14073A000 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073DAE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14077971C (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x1407C4AC4 (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x14086B2E0 (WmipProcessEvent.c)
 *     AlpcpPortQueryServerInfo @ 0x140979178 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140979CC0 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x14097C02C (ObpCreateTypeArray.c)
 *     CmUnRegisterCallback @ 0x140A0F270 (CmUnRegisterCallback.c)
 *     IovpBuildDriverObjectList @ 0x140AC28F8 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
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
