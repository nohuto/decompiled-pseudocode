/*
 * XREFs of VerifierFsRtlGetNextFileLock @ 0x140ACB630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetNextFileLock()
{
  return ((__int64 (*)(void))pXdvFsRtlGetNextFileLock)();
}
