/*
 * XREFs of FsRtlSplitLargeMcb @ 0x14053AA90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlSplitBaseMcb @ 0x14053A920 (FsRtlSplitBaseMcb.c)
 */

BOOLEAN __stdcall FsRtlSplitLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Amount) = FsRtlSplitBaseMcb(&Mcb->BaseMcb, Vbn, Amount);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return Amount;
}
