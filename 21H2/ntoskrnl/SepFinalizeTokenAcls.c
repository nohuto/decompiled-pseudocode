/*
 * XREFs of SepFinalizeTokenAcls @ 0x1405D00A0
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     SeCopyClientToken @ 0x140656B24 (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x1406C7EA0 (NtFilterToken.c)
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 *     NtDuplicateToken @ 0x14071C530 (NtDuplicateToken.c)
 *     SeFilterToken @ 0x1407C6B20 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C74 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140654260 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}
