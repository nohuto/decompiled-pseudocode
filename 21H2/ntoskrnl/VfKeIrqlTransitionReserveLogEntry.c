/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710
 * Callers:
 *     VerifierKeLowerIrql @ 0x140A7F480 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140A7F4E0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140A7F570 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140A8EF40 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140A966F0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140A96730 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 *     VerifierExAcquireFastMutex @ 0x140A9C1E0 (VerifierExAcquireFastMutex.c)
 *     VerifierExReleaseFastMutex @ 0x140A9C2E0 (VerifierExReleaseFastMutex.c)
 *     VerifierExTryToAcquireFastMutex @ 0x140A9C3A0 (VerifierExTryToAcquireFastMutex.c)
 * Callees:
 *     <none>
 */

char *__fastcall VfKeIrqlTransitionReserveLogEntry(char a1, char a2)
{
  char *v2; // r8

  v2 = 0LL;
  if ( ViTrackIrqlQueue )
  {
    if ( ViKeTrackIrqlDisabled )
    {
      _InterlockedIncrement(&ViKeTrackIrqlSkipped);
    }
    else
    {
      v2 = (char *)ViTrackIrqlQueue
         + 56 * (_InterlockedIncrement(&ViTrackIrqlIndex) & (unsigned int)(ViTrackIrqlQueueLength - 1));
      v2[8] = a1;
      v2[9] = a2;
      *((_WORD *)v2 + 5) = KeGetPcr()->Prcb.Number;
    }
  }
  return v2;
}
