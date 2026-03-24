/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0011480
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C006E568 (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C007FA20 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00CEA6C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00CED04 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00D0430 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00D1D30 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 80);
}
