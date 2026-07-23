/*
 * XREFs of SeTokenIsRestricted @ 0x1402A4F20
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405FBE44 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1406C5850 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1406C5B80 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C5C0C (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
