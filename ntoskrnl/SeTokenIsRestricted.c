/*
 * XREFs of SeTokenIsRestricted @ 0x140206B10
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14069D29C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140744780 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtCompareTokens @ 0x140776460 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1407819E0 (SeTokenIsAdmin.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
