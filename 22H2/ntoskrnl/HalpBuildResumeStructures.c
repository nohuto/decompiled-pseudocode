/*
 * XREFs of HalpBuildResumeStructures @ 0x140A95FB8
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14050D2B4 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x1409351D0 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 *     memset @ 0x140435400 (memset.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x14051B608 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 */

__int64 HalpBuildResumeStructures()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  void *v2; // rax
  __int64 v3; // rcx

  v0 = 1472LL * KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (void *)HalpMmAllocCtxAlloc(v1, v0);
  HalpHiberProcState = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  memset(v2, 0, v0);
  if ( HalpTiledMemoryMapActive && (int)HalpMmUpdateTiledMemoryMapTargetStub() < 0 )
  {
    if ( HalpHiberProcState )
    {
      HalpMmAllocCtxFree(v3, HalpHiberProcState);
      HalpHiberProcState = 0LL;
    }
    return 3221225626LL;
  }
  return 0LL;
}
