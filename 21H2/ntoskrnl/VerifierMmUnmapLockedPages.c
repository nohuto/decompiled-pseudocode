/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x140AA06D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmUnmapLockedPages()
{
  return ((__int64 (*)(void))pXdvMmUnmapLockedPages)();
}
