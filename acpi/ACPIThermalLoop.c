/*
 * XREFs of ACPIThermalLoop @ 0x1C00410D8
 * Callers:
 *     ACPIThermalComplete @ 0x1C0040090 (ACPIThermalComplete.c)
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     ACPIThermalTMPCallback @ 0x1C00421C0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0042348 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
