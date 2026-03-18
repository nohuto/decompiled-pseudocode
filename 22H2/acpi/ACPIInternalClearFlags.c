/*
 * XREFs of ACPIInternalClearFlags @ 0x1C002E528
 * Callers:
 *     ACPIDockIrpEject @ 0x1C007AAD0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C007BA20 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C007D4E0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDetectFilterMatch @ 0x1C0082660 (ACPIDetectFilterMatch.c)
 *     ACPIInitStopDevice @ 0x1C0087AF4 (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1C00884A8 (ACPIInternalSetSpare.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952FC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppReleasePciInterfaces @ 0x1C009A0BC (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
