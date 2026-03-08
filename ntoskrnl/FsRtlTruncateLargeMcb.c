/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x1402D0130
 * Callers:
 *     FsRtlTruncateMcb @ 0x14053AB10 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x1402D0170 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  ExReleaseFastMutex(Mcb->GuardedMutex);
}
