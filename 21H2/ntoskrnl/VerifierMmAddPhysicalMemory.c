/*
 * XREFs of VerifierMmAddPhysicalMemory @ 0x140A8F060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmAddPhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmAddPhysicalMemory)();
}
