/*
 * XREFs of ACPIInternalSetFlags @ 0x1C002F088
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080340 (ACPIBusIrpQueryId.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C18 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00857D0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C0085F50 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIInternalIsPci @ 0x1C0088084 (ACPIInternalIsPci.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0089EC4 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952FC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00998A4 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
