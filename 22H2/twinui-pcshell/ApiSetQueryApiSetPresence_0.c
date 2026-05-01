/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800948A0
 * Callers:
 *     IsOleInitializePresent @ 0x180092718 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x1800927F8 (IsNAVShutdownPresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x180092A00 (IsPolicyManager_GetPolicyPresent.c)
 *     IsUMgrQueryUserTokenPresent @ 0x180093A20 (IsUMgrQueryUserTokenPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x180093A74 (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x180093D14 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x180093EBC (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x180094ECC (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18009514C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
