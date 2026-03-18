/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14021F6A0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x140695A40 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140695E18 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
