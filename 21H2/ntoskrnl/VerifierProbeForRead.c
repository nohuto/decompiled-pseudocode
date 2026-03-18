/*
 * XREFs of VerifierProbeForRead @ 0x140A7EE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierProbeForRead()
{
  return ((__int64 (*)(void))pXdvProbeForRead)();
}
