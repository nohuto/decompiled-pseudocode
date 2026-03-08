/*
 * XREFs of ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0014380
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD08 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C002D5B4 (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000E1CC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 */

__int64 __fastcall ACPICleanDeviceDependenciesWithTreeLock(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 648);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4F706341u);
    *(_QWORD *)(a1 + 648) = 0LL;
  }
  ACPIBuildProcessDelayedDependencyExternalTrigger(a1);
  return 0LL;
}
