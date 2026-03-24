/*
 * XREFs of ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060
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
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

signed __int64 __fastcall UserCritTelemetry::UpdateUserCritInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 *v8; // rcx
  signed __int64 result; // rax
  _QWORD v10[16]; // [rsp+0h] [rbp-98h] BYREF

  v10[0] = 10LL;
  v10[1] = 25LL;
  v10[2] = 50LL;
  v4 = a3;
  v5 = 1000000 * a2;
  v10[3] = 100LL;
  v10[4] = 250LL;
  v10[5] = 500LL;
  v10[6] = 1000LL;
  v10[7] = 2500LL;
  v10[8] = 5000LL;
  v10[9] = 10000LL;
  v10[10] = 25000LL;
  v10[11] = 50000LL;
  v10[12] = 100000LL;
  v10[13] = 200000LL;
  v10[14] = -1LL;
  if ( gliQpcFreq.QuadPart == 10000000 )
    v6 = v5 / 0x989680;
  else
    v6 = v5 / gliQpcFreq.QuadPart;
  v7 = 0;
  v8 = v10;
  while ( v6 > *v8 )
  {
    ++v7;
    ++v8;
    if ( v7 >= 0xF )
      goto LABEL_6;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v7 + 15 * v4)));
LABEL_6:
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8 * v4 + 360), v6);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * v4 + 384));
  return result;
}
