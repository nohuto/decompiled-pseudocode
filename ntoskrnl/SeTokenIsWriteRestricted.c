/*
 * XREFs of SeTokenIsWriteRestricted @ 0x1402B8710
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14069D29C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x140776460 (NtCompareTokens.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
