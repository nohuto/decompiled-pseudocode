/*
 * XREFs of SepReferenceLogonSession @ 0x14066B8C8
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x140258DE8 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x14025CB88 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x14066B900 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
