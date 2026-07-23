/*
 * XREFs of SepReferenceLogonSession @ 0x1406CBF44
 * Callers:
 *     SepLinkLogonSessions @ 0x1402438E4 (SepLinkLogonSessions.c)
 *     SepDuplicateLogonSessionReference @ 0x1402A5540 (SepDuplicateLogonSessionReference.c)
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1406CBF7C (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
