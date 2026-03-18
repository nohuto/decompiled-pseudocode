/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1409A4D70
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1409A1BAC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1409A200C (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x1409A3648 (TtmiSetPendingOnOffRequest.c)
 *     TtmiSetTerminalPendingEvaluation @ 0x1409A36FC (TtmiSetTerminalPendingEvaluation.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409A37AC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1409A39F8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1409A3A54 (TtmpExitProximity.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409A3BE0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A4510 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A49BC (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4E68 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5E3C (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A6940 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
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
