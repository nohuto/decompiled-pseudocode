/*
 * XREFs of SeTokenIsRestricted @ 0x14021F680
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x140695A40 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140695E18 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407F4B20 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
