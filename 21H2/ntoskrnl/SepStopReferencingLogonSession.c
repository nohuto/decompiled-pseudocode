/*
 * XREFs of SepStopReferencingLogonSession @ 0x140612358
 * Callers:
 *     SepLinkLogonSessions @ 0x1402438E4 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x140612290 (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140243B50 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x140243B88 (SepConvertToOwnTokenClaims.c)
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
