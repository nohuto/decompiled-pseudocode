/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408FF2A0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBD60 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FC060 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408FC2AC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408FC70C (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408FDC88 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408FDDCC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408FE018 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408FE074 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FE1A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408FE220 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FEAD8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FEF50 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FF398 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409003C0 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x140900EC4 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
