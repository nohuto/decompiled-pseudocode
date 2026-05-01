/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180045380
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180045080 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsRmRpsInitializePresent @ 0x180045288 (IsRmRpsInitializePresent.c)
 *     IsQueryUserTokenPresent @ 0x180045418 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x1800454F8 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180045664 (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004577C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x1800457D0 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x180045C68 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x180045D48 (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x180045D9C (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
