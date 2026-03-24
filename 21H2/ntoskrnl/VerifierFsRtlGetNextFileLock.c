/*
 * XREFs of VerifierFsRtlGetNextFileLock @ 0x1409D2200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetNextFileLock()
{
  return ((__int64 (*)(void))pXdvFsRtlGetNextFileLock)();
}
