/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C0009620 (NtUserVkKeyScanEx.c)
 *     DrvGetCurrentDpiInfo @ 0x1C000F3F4 (DrvGetCurrentDpiInfo.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010270 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C0015180 (ReferenceDwmApiPort.c)
 *     NtUserGetDC @ 0x1C00356D0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0035A80 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C003BBA0 (UserEnterUserCritSecShared.c)
 *     NtUserMapVirtualKeyEx @ 0x1C003CD90 (NtUserMapVirtualKeyEx.c)
 *     NtUserGetKeyboardLayout @ 0x1C003D350 (NtUserGetKeyboardLayout.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C0087B00 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0089370 (NtUserCheckProcessSession.c)
 *     UserReleaseDC @ 0x1C0091F00 (UserReleaseDC.c)
 *     NtUserGetDoubleClickTime @ 0x1C009C580 (NtUserGetDoubleClickTime.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C009D6D0 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00A2E70 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00A6910 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtMITSetLastInputRecipient @ 0x1C012B760 (NtMITSetLastInputRecipient.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C012FBD0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01320B0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013AFD0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B96F0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00CF780 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  if ( (dword_1C0251EE8 & 1) == 0 )
  {
    dword_1C0251EE8 |= 1u;
    memset(qword_1C0251EF0, 0, 0x198uLL);
    qword_1C0252088 = 0LL;
    qword_1C0252090 = 0LL;
  }
  return (struct UserCritTelemetry *)qword_1C0251EF0;
}
