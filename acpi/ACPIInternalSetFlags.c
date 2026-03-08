/*
 * XREFs of ACPIInternalSetFlags @ 0x1C002F068
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C08 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00857C0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C0085F40 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIInternalIsPci @ 0x1C0088074 (ACPIInternalIsPci.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0089EB4 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0099894 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
