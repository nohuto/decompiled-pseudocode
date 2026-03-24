/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405D0028
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimMembers())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1DB90;
  if ( qword_140C1DB90 )
    return (__int64 (*)(void))qword_140C1DB90();
  return result;
}
