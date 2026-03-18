/*
 * XREFs of VerifierZwFlushVirtualMemory @ 0x140AA2B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwFlushVirtualMemory()
{
  return ((__int64 (*)(void))pXdvZwFlushVirtualMemory)();
}
