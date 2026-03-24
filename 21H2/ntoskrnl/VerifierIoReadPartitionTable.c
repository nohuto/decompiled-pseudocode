/*
 * XREFs of VerifierIoReadPartitionTable @ 0x1409D2D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTable()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTable)();
}
