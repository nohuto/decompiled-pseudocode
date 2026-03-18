/*
 * XREFs of SepReferenceLogonSession @ 0x1407C38A4
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     SepLinkLogonSessions @ 0x140353CA0 (SepLinkLogonSessions.c)
 *     SepDuplicateLogonSessionReference @ 0x14037064C (SepDuplicateLogonSessionReference.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1407C38DC (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
