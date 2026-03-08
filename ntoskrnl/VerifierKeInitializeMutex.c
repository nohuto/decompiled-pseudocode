/*
 * XREFs of VerifierKeInitializeMutex @ 0x140AD24E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeMutex)();
}
