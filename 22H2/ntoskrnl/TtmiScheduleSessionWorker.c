/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408FF190
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBC50 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FBF50 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408FC19C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408FC5FC (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408FDB78 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408FDCBC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408FDF08 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408FDF64 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FE090 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408FE110 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FE9C8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FEE40 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FF288 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409002B0 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x140900DB4 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
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
