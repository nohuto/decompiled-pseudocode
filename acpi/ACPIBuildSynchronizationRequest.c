/*
 * XREFs of ACPIBuildSynchronizationRequest @ 0x1C0013BC0
 * Callers:
 *     ACPIDockIrpStartDevice @ 0x1C007BA10 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0 (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequest(int a1, int a2, int a3, int a4, char a5)
{
  return ACPIBuildSynchronizationRequestInternal(a1, a2, a3, a4, a5);
}
