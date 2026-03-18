/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C00421E0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0041110 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIThermalLoop @ 0x1C00410F8 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0042368 (ACPIThermalUpdateTemperature.c)
 *     FreeDataBuffs @ 0x1C004B52C (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1LL);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
