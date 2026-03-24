/*
 * XREFs of FsRtlResetLargeMcb @ 0x1404EF300
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
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
    KeReleaseGuardedMutex(GuardedMutex);
  }
}
