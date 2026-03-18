/*
 * XREFs of VerifierZwOpenProcessTokenEx @ 0x140AA2EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwOpenProcessTokenEx()
{
  return ((__int64 (*)(void))pXdvZwOpenProcessTokenEx)();
}
