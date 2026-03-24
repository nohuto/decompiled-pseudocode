/*
 * XREFs of VerifierKeReadStateMutex @ 0x1409DAF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateMutex()
{
  return ((__int64 (*)(void))pXdvKeReadStateMutex)();
}
