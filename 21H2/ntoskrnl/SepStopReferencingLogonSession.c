/*
 * XREFs of SepStopReferencingLogonSession @ 0x1407556D4
 * Callers:
 *     SepLinkLogonSessions @ 0x14025CB88 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x1406E5F34 (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1402D6A98 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1402D6AD0 (SepConvertToOwnTokenClaims.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
