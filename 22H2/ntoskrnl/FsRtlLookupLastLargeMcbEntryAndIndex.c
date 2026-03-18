/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1403ABFB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x140360490 (FsRtlLookupLastBaseMcbEntryAndIndex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntryAndIndex(
        PLARGE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  ExAcquireFastMutex(OpaqueMcb->GuardedMutex);
  LOBYTE(Index) = FsRtlLookupLastBaseMcbEntryAndIndex(&OpaqueMcb->BaseMcb, LargeVbn, LargeLbn, Index);
  ExReleaseFastMutex(OpaqueMcb->GuardedMutex);
  return (unsigned __int8)Index;
}
