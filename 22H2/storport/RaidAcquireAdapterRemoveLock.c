/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C000B9B4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6C8 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B8A0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000C888 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E648 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterPowerIrp @ 0x1C0012A38 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0013040 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013324 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00141FC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00142B0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0016854 (RaidAdapterPnpIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C00327F0 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorpQueueWorkItem @ 0x1C003D1E8 (StorpQueueWorkItem.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C00491B8 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwEnableCallback @ 0x1C004F140 (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280)) )
    return (unsigned int)-1073741738;
  return v1;
}
