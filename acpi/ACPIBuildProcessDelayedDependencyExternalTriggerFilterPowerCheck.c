/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000E254
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C000E5D0 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildScheduleDpc @ 0x1C0013794 (ACPIBuildScheduleDpc.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001EABC (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildFlushQueue @ 0x1C007D42C (ACPIBuildFlushQueue.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // r14
  __int64 *v6; // rsi
  __int64 v7; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v4 = (__int64 *)AcpiBuildDelayedDependencyList;
  v5 = v3;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
      if ( v6[10] && !(unsigned __int8)ACPIBuildProcessDelayedDependencyShouldDelayRequest() )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v6 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v4 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  if ( v2 )
  {
    LOBYTE(v7) = 1;
    ACPIBuildFlushQueue(a1, v7);
    ACPIDevicePowerFlushQueue(a1);
  }
}
