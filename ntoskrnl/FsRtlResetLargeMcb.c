/*
 * XREFs of FsRtlResetLargeMcb @ 0x14053A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlResetLargeMcb(PLARGE_MCB Mcb, BOOLEAN SelfSynchronized)
{
  struct _FAST_MUTEX *GuardedMutex; // rcx

  if ( SelfSynchronized )
  {
    Mcb->BaseMcb.PairCount = 0;
  }
  else
  {
    ExAcquireFastMutex(Mcb->GuardedMutex);
    GuardedMutex = Mcb->GuardedMutex;
    Mcb->BaseMcb.PairCount = 0;
    ExReleaseFastMutex(GuardedMutex);
  }
}
