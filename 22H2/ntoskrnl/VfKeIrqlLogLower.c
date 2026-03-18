/*
 * XREFs of VfKeIrqlLogLower @ 0x140AD6C84
 * Callers:
 *     VerifierKeLowerIrql @ 0x140AC1380 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140AC13F0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140AC1470 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140AD0880 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140AD6AC0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140AD6B10 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VerifierExReleaseFastMutex @ 0x140ADE220 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     ViKeIrqlLogCommon @ 0x140AC1682 (ViKeIrqlLogCommon.c)
 */

void __fastcall VfKeIrqlLogLower(__int64 a1)
{
  if ( ViIrqlTrimAndLog )
  {
    if ( a1 )
      ViKeIrqlLogCommon(a1, 1u);
  }
}
