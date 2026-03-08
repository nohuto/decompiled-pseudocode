/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14053A0C8
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140938BA4 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(64LL, 32LL, 1466393156LL);
}
