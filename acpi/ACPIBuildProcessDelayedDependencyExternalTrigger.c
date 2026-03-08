/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000E1CC
 * Callers:
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0014380 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C0028410 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPITableNotifyFreeObject @ 0x1C003F540 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C0013794 (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTrigger(__int64 a1)
{
  char v2; // bl
  __int64 *v3; // rdx
  __int64 *v4; // rcx

  v2 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v3 = (__int64 *)AcpiBuildDelayedDependencyList;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
      if ( v4[5] == a1 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v4 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v3 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
