/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030
 * Callers:
 *     KeQueryNodeActiveAffinityEx @ 0x1402AAE68 (KeQueryNodeActiveAffinityEx.c)
 *     PoAllProcessorsDeepIdle @ 0x1402AAF54 (PoAllProcessorsDeepIdle.c)
 *     PoCopyDeepIdleMask @ 0x1402AEFF0 (PoCopyDeepIdleMask.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403AEEE0 (KeQueryNodeActiveProcessorCount.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x140569250 (KiConfigureHeteroProcessorsTarget.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056E2D8 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     PpmGetIdleConstrainedMask @ 0x140581D60 (PpmGetIdleConstrainedMask.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PpmEventTraceHeteroSets @ 0x140826F54 (PpmEventTraceHeteroSets.c)
 *     KiSynchNumaCounterSetCallback @ 0x140971030 (KiSynchNumaCounterSetCallback.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140B3AB7C (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B41844 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInNode(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return 2147483674LL;
  _BitScanForward((unsigned int *)&v4, v2);
  *(_DWORD *)(a1 + 8) = v2 & ~(1 << v4);
  result = 0LL;
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4 + 24);
  return result;
}
