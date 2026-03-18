/*
 * XREFs of SeGetCodeIntegrityOriginClaimForFileObject @ 0x1406DD8A8
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 SeGetCodeIntegrityOriginClaimForFileObject()
{
  if ( qword_140C1B968 )
    return qword_140C1B968();
  else
    return 3221226021LL;
}
