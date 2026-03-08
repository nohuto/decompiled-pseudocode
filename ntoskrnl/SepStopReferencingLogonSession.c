/*
 * XREFs of SepStopReferencingLogonSession @ 0x140742B6C
 * Callers:
 *     SepLinkLogonSessions @ 0x1402E832C (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x14079AF7C (SepSetLogonSessionToken.c)
 * Callees:
 *     SepConvertToOwnTokenClaims @ 0x1402BE4F0 (SepConvertToOwnTokenClaims.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402BE52C (SepDeReferenceLogonSessionDirect.c)
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
