/*
 * XREFs of McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C0009620 (NtUserVkKeyScanEx.c)
 *     DrvGetCurrentDpiInfo @ 0x1C000F3F4 (DrvGetCurrentDpiInfo.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010270 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C0015180 (ReferenceDwmApiPort.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     NtUserGetDC @ 0x1C00356D0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0035A80 (NtUserReleaseDC.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0035CC4 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0037E20 (EtwTraceAcquiredSharedUserCrit.c)
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
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00554F0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqx_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  va_list v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+B0h] [rbp+30h]
  va_list va1; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v13 = va_arg(va1, _QWORD);
  v12 = a4;
  v7 = 8LL;
  v6 = &v12;
  v11 = 8LL;
  va_copy(v8, va);
  v9 = 4LL;
  va_copy(v10, va1);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v5);
}
