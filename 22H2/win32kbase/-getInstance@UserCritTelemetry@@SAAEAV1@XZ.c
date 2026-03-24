/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00376C0
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C000AAA0 (NtUserVkKeyScanEx.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0010864 (DrvGetCurrentDpiInfo.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00116E0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C00165F0 (ReferenceDwmApiPort.c)
 *     NtUserGetDC @ 0x1C0036B40 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0036EF0 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C003D010 (UserEnterUserCritSecShared.c)
 *     NtUserMapVirtualKeyEx @ 0x1C003E200 (NtUserMapVirtualKeyEx.c)
 *     NtUserGetKeyboardLayout @ 0x1C003E7C0 (NtUserGetKeyboardLayout.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00889A0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C008A210 (NtUserCheckProcessSession.c)
 *     UserReleaseDC @ 0x1C0092CC0 (UserReleaseDC.c)
 *     NtUserGetDoubleClickTime @ 0x1C009D340 (NtUserGetDoubleClickTime.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C009E490 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00A3C30 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00A6E10 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtMITSetLastInputRecipient @ 0x1C012BA30 (NtMITSetLastInputRecipient.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C012FEA0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C0132380 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013B2A0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B9620 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  if ( (dword_1C0250F10 & 1) == 0 )
  {
    dword_1C0250F10 |= 1u;
    memset(qword_1C0250F20, 0, 0x198uLL);
    qword_1C02510B8 = 0LL;
    qword_1C02510C0 = 0LL;
  }
  return (struct UserCritTelemetry *)qword_1C0250F20;
}
