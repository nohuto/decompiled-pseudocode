/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1409A1AC4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14099F580 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14099F880 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x14099FACC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x14099FF38 (TtmiSetInputWakeCapability.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A12C8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A1778 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A1BBC (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A2B80 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A367C (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x1409A84C4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409A8608 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1409A8858 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1409A88B4 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1409A89E0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409A8A60 (TtmpSetTerminalPendingCleanup.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
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
