/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C0022714
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C000BE30 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C4F4 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C95C (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C001D4A0 (ACPIDeviceInternalQueueRequest.c)
 *     ACPITableLoadCallBack @ 0x1C003F3C0 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00A8DE0 (ACPIInitStartACPI.c)
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
