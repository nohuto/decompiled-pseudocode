/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0006604
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C00028E8 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0003630 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001866C (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C002C3CC (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002C4A0 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00302D4 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C00308B0 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C003876C (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C0038EE0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0039160 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C00392E0 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0039620 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C003A474 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C003C760 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C003C898 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C003D41C (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D498 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C00449F4 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004B038 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportEvent @ 0x1C00504F0 (StorEtwMiniportEvent.c)
 *     StorpTelemetryMiniportEvent @ 0x1C00558EC (StorpTelemetryMiniportEvent.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C005618C (StorpTelemetryMiniportEventWStr.c)
 *     RaidAdapterPassThrough @ 0x1C0078B5C (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005A08 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0005A80 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B8C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C0006678 (RaidAdapterFindUnitAtPassive.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 UnitAtDirql; // rbx
  KIRQL v8; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 704) )
  {
    v8 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    RaidAdapterReleaseInterruptLock(a1, v8);
    return UnitAtDirql;
  }
  return RaidAdapterFindUnitAtDirql(a1, a2);
}
