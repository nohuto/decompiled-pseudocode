/*
 * XREFs of PsGetJobServerSilo @ 0x140302E10
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetJobServerSilo(__int64 a1, __int64 *a2)
{
  if ( a1 )
  {
    *a2 = PsGetEffectiveServerSilo(a1);
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225485LL;
  }
}
