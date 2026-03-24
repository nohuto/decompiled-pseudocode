/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0002320
 * Callers:
 *     ACPIInitStopDevice @ 0x1C0090C3C (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1C009C950 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C009DD14 (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009F074 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C00AB550 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AC580 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD6D0 (ACPIBusAndFilterIrpEject.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B6B38 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
