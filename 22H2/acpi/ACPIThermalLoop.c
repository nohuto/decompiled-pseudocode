/*
 * XREFs of ACPIThermalLoop @ 0x1C0012A10
 * Callers:
 *     ACPIThermalComplete @ 0x1C0011DE0 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C00124B0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0013534 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C009AB00 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
