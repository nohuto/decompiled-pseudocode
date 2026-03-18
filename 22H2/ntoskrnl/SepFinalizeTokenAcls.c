/*
 * XREFs of SepFinalizeTokenAcls @ 0x14071DE50
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     SeCopyClientToken @ 0x14071DD30 (SeCopyClientToken.c)
 *     NtFilterToken @ 0x1407F1DD0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x14080D380 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3710 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD110 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl((__int64)Object, 8, SeAliasAdminsSid);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
