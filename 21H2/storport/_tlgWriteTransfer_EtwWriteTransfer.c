/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C000208C (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0002108 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DCBC (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000E210 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000E5A0 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E6B8 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterRequestComplete @ 0x1C000F360 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001346C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014E04 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001AF20 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002BBFC (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C002E2E0 (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C003C8B8 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EDD4 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F118 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C0048EB8 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A680 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitResetTarget @ 0x1C004B428 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B6E0 (RaidUnitResetUnit.c)
 *     StorpCSEntryTelemetry @ 0x1C0051B60 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0051FB4 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052EB8 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C00534B0 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C005366C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C0053988 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0053E54 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0054320 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C00547F4 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0054B04 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0054E70 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00551B8 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C00555F8 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0055768 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C00559C4 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0055CE0 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00561AC (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0056D20 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C00570A8 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00573C4 (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidInitializeAdapter @ 0x1C0079538 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = (unsigned __int64)EventInformation;
  UserData->Size = *(unsigned __int16 *)EventInformation;
  UserData[1].Ptr = (unsigned __int64)(a2 + 11);
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
