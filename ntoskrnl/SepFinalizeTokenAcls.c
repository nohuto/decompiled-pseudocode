/*
 * XREFs of SepFinalizeTokenAcls @ 0x1406D1E60
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SeCopyClientToken @ 0x1406D1D40 (SeCopyClientToken.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     NtFilterToken @ 0x14073FB20 (NtFilterToken.c)
 *     SeFilterToken @ 0x140817AD0 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x140247DF0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D22B0 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl(Object, 8LL, SeAliasAdminsSid);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
