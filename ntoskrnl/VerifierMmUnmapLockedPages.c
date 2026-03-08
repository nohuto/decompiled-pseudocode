/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x140AE0850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmUnmapLockedPages()
{
  return ((__int64 (*)(void))pXdvMmUnmapLockedPages)();
}
