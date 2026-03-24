/*
 * XREFs of SeTokenIsRestricted @ 0x14035F3A0
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140681634 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenCanImpersonate @ 0x1406D41E0 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x14070E3A0 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x14070E6D0 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14070E75C (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
