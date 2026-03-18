/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140370D60
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7894 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1407354A0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1407C7650 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
