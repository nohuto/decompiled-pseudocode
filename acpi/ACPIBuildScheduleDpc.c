/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C0013794
 * Callers:
 *     ACPIBuildCompleteCommon @ 0x1C000BC30 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000E1CC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000E254 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0013564 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00137D8 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPITableLoad @ 0x1C003F170 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C003F7F0 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
