/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C000BA24
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B910 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000C8F8 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E6B8 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterPowerIrp @ 0x1C0012AA8 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C00130B0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013394 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C001426C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0014320 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C00168C4 (RaidAdapterPnpIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C0032810 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorpQueueWorkItem @ 0x1C003D208 (StorpQueueWorkItem.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C00491D8 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwEnableCallback @ 0x1C004F160 (StorEtwEnableCallback.c)
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
