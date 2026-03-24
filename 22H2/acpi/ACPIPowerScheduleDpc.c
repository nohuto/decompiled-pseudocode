/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C001CD7C
 * Callers:
 *     ACPIDeviceInternalQueueRequest @ 0x1C001CC50 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001CD30 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIBuildDeviceDpc @ 0x1C001CDD0 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001EAE8 (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C0030360 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00BB534 (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
