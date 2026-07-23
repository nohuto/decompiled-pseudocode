/*
 * XREFs of SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405D004C
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 SeGetCodeIntegrityOriginClaimForFileObject()
{
  if ( qword_140C1DBA8 )
    return qword_140C1DBA8();
  else
    return 3221226021LL;
}
