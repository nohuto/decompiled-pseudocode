/*
 * XREFs of VerifierFsRtlGetFileSize @ 0x140ACB610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetFileSize()
{
  return ((__int64 (*)(void))pXdvFsRtlGetFileSize)();
}
