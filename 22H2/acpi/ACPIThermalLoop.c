/*
 * XREFs of ACPIThermalLoop @ 0x1C00410F8
 * Callers:
 *     ACPIThermalComplete @ 0x1C00400B0 (ACPIThermalComplete.c)
 *     ACPIThermalLoopEx @ 0x1C0041110 (ACPIThermalLoopEx.c)
 *     ACPIThermalTMPCallback @ 0x1C00421E0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0042368 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C00962F0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0041110 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
