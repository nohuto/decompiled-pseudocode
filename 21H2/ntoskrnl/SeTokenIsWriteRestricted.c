/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140360010
 * Callers:
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x140717200 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1407175BC (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
