/*
 * XREFs of SeTokenIsWriteRestricted @ 0x1402A4F40
 * Callers:
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1406C5850 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C5C0C (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
