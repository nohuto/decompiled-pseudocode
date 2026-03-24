/*
 * XREFs of SepFinalizeTokenAcls @ 0x1405D00A0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     NtFilterToken @ 0x1405D9FB0 (NtFilterToken.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     SeCopyClientToken @ 0x140661D04 (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 *     NtDuplicateToken @ 0x140705150 (NtDuplicateToken.c)
 *     SeFilterToken @ 0x1407C6800 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C44 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14065F440 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}
