/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x140AD0190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTableEx()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTableEx)();
}
