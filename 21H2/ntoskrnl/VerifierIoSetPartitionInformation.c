/*
 * XREFs of VerifierIoSetPartitionInformation @ 0x1409D3000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoSetPartitionInformation()
{
  return ((__int64 (*)(void))pXdvIoSetPartitionInformation)();
}
