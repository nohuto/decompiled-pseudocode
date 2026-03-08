/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x14053A730
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x14053A7B0 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x1402DA240 (FsRtlLookupLastBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
