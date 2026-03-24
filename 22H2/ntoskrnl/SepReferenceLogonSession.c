/*
 * XREFs of SepReferenceLogonSession @ 0x1405DC7C4
 * Callers:
 *     SepDuplicateLogonSessionReference @ 0x140201A48 (SepDuplicateLogonSessionReference.c)
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x14032C264 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x140651490 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1405DC7FC (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo(a1, a2);
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
