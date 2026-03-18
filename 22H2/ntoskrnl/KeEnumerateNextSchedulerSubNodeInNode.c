/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x1402C1BCC
 * Callers:
 *     PoCopyDeepIdleMask @ 0x14028FB3C (PoCopyDeepIdleMask.c)
 *     PoAllProcessorsDeepIdle @ 0x1402C1AF0 (PoAllProcessorsDeepIdle.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140306A28 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403B3BD0 (KeQueryNodeActiveProcessorCount.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14056B6F0 (KiConfigureHeteroProcessorsTarget.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140570948 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     PpmGetIdleConstrainedMask @ 0x140584290 (PpmGetIdleConstrainedMask.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PpmEventTraceHeteroSets @ 0x14082EFC4 (PpmEventTraceHeteroSets.c)
 *     KiSynchNumaCounterSetCallback @ 0x140974050 (KiSynchNumaCounterSetCallback.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140B4928C (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B4FEDC (KiConfigureAllSchedulingInformation.c)
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
