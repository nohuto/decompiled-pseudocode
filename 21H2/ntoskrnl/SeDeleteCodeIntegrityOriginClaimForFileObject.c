/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x1405D0004
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimForFileObject())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1DBB8;
  if ( qword_140C1DBB8 )
    return (__int64 (*)(void))qword_140C1DBB8();
  return result;
}
