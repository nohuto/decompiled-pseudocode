/*
 * XREFs of SepStopReferencingLogonSession @ 0x1406F0290
 * Callers:
 *     SepLinkLogonSessions @ 0x14032C264 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x1405D9EE0 (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140348824 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x14034885C (SepConvertToOwnTokenClaims.c)
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
