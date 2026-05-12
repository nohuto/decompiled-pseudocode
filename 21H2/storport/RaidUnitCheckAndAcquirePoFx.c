/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0006380
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0002108 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitStoragePowerIdle @ 0x1C000218C (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0002218 (RaUnitStoragePowerActive.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0005CB0 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D80 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0005E64 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C00060F0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006218 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C0006280 (StorPortUnitIdleCondition.c)
 *     RaidStartIoPacket @ 0x1C000A020 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001346C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0013788 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0013AB0 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0013E38 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0013F1C (RaidUnitCancelWaitWakeIrp.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C001E634 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0033004 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0037FE8 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C003F950 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C003FAA0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C003FB34 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C003FCF0 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C0041370 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C0041490 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0041830 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitIdleState @ 0x1C0041B50 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0041F10 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0042000 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0042120 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00424B0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C0047B08 (RaUnitPowerCapIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004BF84 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0051B60 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0051FB4 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0075884 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0075F14 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C007BA4C (RaidUnitCreateDumpData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 449) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return result;
}
