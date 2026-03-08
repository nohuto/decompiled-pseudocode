/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1403AAF70
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x14053A8A0 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return PairCount;
}
