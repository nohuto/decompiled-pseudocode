/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408FF140
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBC00 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FBF00 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408FC14C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408FC5AC (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408FDB28 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408FDC6C (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408FDEB8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408FDF14 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FE040 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408FE0C0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FE978 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FEDF0 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FF238 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x140900260 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x140900D64 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
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
