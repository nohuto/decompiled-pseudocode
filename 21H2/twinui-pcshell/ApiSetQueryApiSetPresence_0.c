/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800948C0
 * Callers:
 *     IsOleInitializePresent @ 0x180092738 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x180092818 (IsNAVShutdownPresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x180092A20 (IsPolicyManager_GetPolicyPresent.c)
 *     IsUMgrQueryUserTokenPresent @ 0x180093A40 (IsUMgrQueryUserTokenPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x180093A94 (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x180093D34 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x180093EDC (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x180094EEC (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18009516C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
