/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x140ACC190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTableEx()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTableEx)();
}
