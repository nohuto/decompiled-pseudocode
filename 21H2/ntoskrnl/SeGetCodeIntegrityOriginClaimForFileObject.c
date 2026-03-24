/*
 * XREFs of SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405D004C
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 SeGetCodeIntegrityOriginClaimForFileObject()
{
  if ( qword_140C1DB88 )
    return qword_140C1DB88();
  else
    return 3221226021LL;
}
