/*
 * XREFs of VerifierMmAddPhysicalMemory @ 0x140ACC9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmAddPhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmAddPhysicalMemory)();
}
