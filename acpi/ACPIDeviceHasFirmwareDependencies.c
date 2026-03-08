/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C00144D4
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0011880 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00824A0 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1008) & 0x40) != 0 || *(_QWORD *)(a1 + 648) != 0LL;
}
