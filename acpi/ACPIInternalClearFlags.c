/*
 * XREFs of ACPIInternalClearFlags @ 0x1C002E508
 * Callers:
 *     ACPIDockIrpEject @ 0x1C007AAC0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C007BA10 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C007D4D0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDetectFilterMatch @ 0x1C0082650 (ACPIDetectFilterMatch.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1C0088498 (ACPIInternalSetSpare.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppReleasePciInterfaces @ 0x1C009A0AC (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
