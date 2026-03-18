/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0004A6C
 * Callers:
 *     VidSchCreateContext @ 0x1C0090040 (VidSchCreateContext.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00C2DE0 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchiPreemptEngineNodes @ 0x1C01060D0 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C0106348 (VidSchiResetEngines.c)
 *     VidSchGetNodeOrdinal @ 0x1C0107674 (VidSchGetNodeOrdinal.c)
 *     VidSchQueryNodeStatistics @ 0x1C0107920 (VidSchQueryNodeStatistics.c)
 *     VidSchQueryProcessNodeStatistics @ 0x1C01079D0 (VidSchQueryProcessNodeStatistics.c)
 *     VidSchCreateHwContext @ 0x1C0108F50 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 88);
}
