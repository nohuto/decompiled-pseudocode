/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x1405D0004
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimForFileObject())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1DB98;
  if ( qword_140C1DB98 )
    return (__int64 (*)(void))qword_140C1DB98();
  return result;
}
