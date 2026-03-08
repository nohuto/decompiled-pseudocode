/*
 * XREFs of VfKeIrqlLogLower @ 0x140AD2C84
 * Callers:
 *     VerifierKeLowerIrql @ 0x140ABD380 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140ABD3F0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140ABD470 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140ACC880 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140AD2AC0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140AD2B10 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VerifierExReleaseFastMutex @ 0x140ADA220 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     ViKeIrqlLogCommon @ 0x140ABD682 (ViKeIrqlLogCommon.c)
 */

void __fastcall VfKeIrqlLogLower(__int64 a1)
{
  if ( ViIrqlTrimAndLog )
  {
    if ( a1 )
      ViKeIrqlLogCommon(a1, 1u);
  }
}
