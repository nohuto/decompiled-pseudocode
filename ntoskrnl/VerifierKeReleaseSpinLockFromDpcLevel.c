/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x140AD26A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSpinLockFromDpcLevel()
{
  return ((__int64 (*)(void))pXdvKeReleaseSpinLockFromDpcLevel)();
}
