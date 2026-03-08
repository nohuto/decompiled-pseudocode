/*
 * XREFs of SepReferenceLogonSession @ 0x140773DC0
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x1402BE368 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x1402E832C (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x140773DF8 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
