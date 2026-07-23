/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x1409D3D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTableEx()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTableEx)();
}
