/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14035F3C0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1406D41E0 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x14070E3A0 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14070E75C (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
