/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x14066D620
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimForFileObject())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1B978;
  if ( qword_140C1B978 )
    return (__int64 (*)(void))qword_140C1B978();
  return result;
}
