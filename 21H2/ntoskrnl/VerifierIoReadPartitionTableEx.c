/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x1409D2D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTableEx()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTableEx)();
}
