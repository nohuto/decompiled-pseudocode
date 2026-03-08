/*
 * XREFs of VerifierKeReleaseSpinLockForDpc @ 0x140ACC8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseSpinLockForDpc)();
}
