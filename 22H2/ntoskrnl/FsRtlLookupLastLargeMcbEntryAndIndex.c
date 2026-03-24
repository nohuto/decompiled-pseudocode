/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404EF080
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x14031C1B0 (FsRtlLookupLastBaseMcbEntryAndIndex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntryAndIndex(
        PLARGE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  ExAcquireFastMutex(OpaqueMcb->GuardedMutex);
  LOBYTE(Index) = FsRtlLookupLastBaseMcbEntryAndIndex(&OpaqueMcb->BaseMcb, LargeVbn, LargeLbn, Index);
  KeReleaseGuardedMutex(OpaqueMcb->GuardedMutex);
  return (unsigned __int8)Index;
}
