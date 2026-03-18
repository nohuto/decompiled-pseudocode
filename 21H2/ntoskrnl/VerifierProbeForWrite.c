/*
 * XREFs of VerifierProbeForWrite @ 0x140A7EEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForWrite()
{
  return ((__int64 (*)(void))pXdvProbeForWrite)();
}
