/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C001471C
 * Callers:
 *     VidSchCreateContext @ 0x1C00AC500 (VidSchCreateContext.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00C32E0 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0106530 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C01067A8 (VidSchiResetEngines.c)
 *     VidSchGetNodeOrdinal @ 0x1C0107AD4 (VidSchGetNodeOrdinal.c)
 *     VidSchQueryNodeStatistics @ 0x1C0107D80 (VidSchQueryNodeStatistics.c)
 *     VidSchQueryProcessNodeStatistics @ 0x1C0107E30 (VidSchQueryProcessNodeStatistics.c)
 *     VidSchCreateHwContext @ 0x1C01092E0 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 88);
}
