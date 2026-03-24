/*
 * XREFs of SepFinalizeTokenAcls @ 0x1405D00A0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     NtFilterToken @ 0x1405D9FB0 (NtFilterToken.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     NtDuplicateToken @ 0x1406527E0 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x1406DAAF4 (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x140798D50 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C690 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F82C4 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D8200 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}
