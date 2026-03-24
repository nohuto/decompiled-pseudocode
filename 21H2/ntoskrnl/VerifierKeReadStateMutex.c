/*
 * XREFs of VerifierKeReadStateMutex @ 0x1409DAF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateMutex()
{
  return ((__int64 (*)(void))pXdvKeReadStateMutex)();
}
