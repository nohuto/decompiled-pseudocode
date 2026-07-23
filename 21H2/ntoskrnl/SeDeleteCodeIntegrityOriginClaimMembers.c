/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405D0028
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimMembers())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1DBB0;
  if ( qword_140C1DBB0 )
    return (__int64 (*)(void))qword_140C1DBB0();
  return result;
}
