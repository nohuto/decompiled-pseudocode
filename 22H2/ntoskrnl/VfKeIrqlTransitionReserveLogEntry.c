/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x140AC15B0
 * Callers:
 *     VerifierKeLowerIrql @ 0x140AC1380 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140AC13F0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140AC1470 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140AD0880 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140AD6AC0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140AD6B10 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VfKeIrqlLogRaise @ 0x140AD6CB0 (VfKeIrqlLogRaise.c)
 *     VerifierExReleaseFastMutex @ 0x140ADE220 (VerifierExReleaseFastMutex.c)
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
