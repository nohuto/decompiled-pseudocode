/*
 * XREFs of VerifierIoReadPartitionTable @ 0x140AD0170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTable()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTable)();
}
