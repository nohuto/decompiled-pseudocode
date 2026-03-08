/*
 * XREFs of VerifierKeReleaseMutex @ 0x140AD2680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseMutex)();
}
