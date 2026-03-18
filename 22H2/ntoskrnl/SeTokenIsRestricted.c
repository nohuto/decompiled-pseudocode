/*
 * XREFs of SeTokenIsRestricted @ 0x140228850
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7894 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1407354A0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1407C7650 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1407D0A20 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ED23C (SepIsImpersonationAllowedDueToCapability.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
