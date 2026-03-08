/*
 * XREFs of VerifierZwOpenProcessTokenEx @ 0x140AE2E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwOpenProcessTokenEx()
{
  return ((__int64 (*)(void))pXdvZwOpenProcessTokenEx)();
}
