/*
 * XREFs of VerifierProbeForWrite @ 0x1409D3B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForWrite()
{
  return ((__int64 (*)(void))pXdvProbeForWrite)();
}
