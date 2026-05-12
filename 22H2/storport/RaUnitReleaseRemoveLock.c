/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C000B5D0
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C00077D4 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0009FB0 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000B9E8 (RaUnitPnpIrp.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00119F0 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00127AC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C0012B08 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0012D78 (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0015D40 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00160C0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C00164C0 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001D2B8 (RaUnitDeleteDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B790 (RaidAdapterCheckWaitTimeout.c)
 *     RaidCancelIrp @ 0x1C0044D48 (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00476F0 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C004777C (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0049D90 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A4E0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004AE60 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0074290 (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C007B500 (RaUnitStorageDumpControl.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  unsigned __int64 v1; // r9
  LONG result; // eax
  LONG v3; // ett

  v1 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  result = *(_DWORD *)(v1 + *(_QWORD *)(a1 + 32));
  while ( (result & 1) == 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + *(_QWORD *)(a1 + 32)), result - 2, result);
    if ( v3 == result )
      return result;
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
