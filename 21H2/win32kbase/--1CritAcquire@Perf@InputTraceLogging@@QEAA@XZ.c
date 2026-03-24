/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010
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
 *     UserPowerInfoCallout @ 0x1C004EC50 (UserPowerInfoCallout.c)
 *     GreGetDCPoint @ 0x1C0071810 (GreGetDCPoint.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C0087B00 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0089370 (NtUserCheckProcessSession.c)
 *     UserReleaseDC @ 0x1C0091F00 (UserReleaseDC.c)
 *     NtUserGetDoubleClickTime @ 0x1C009C580 (NtUserGetDoubleClickTime.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C009D6D0 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00A2E70 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00A6910 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CA9D8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C012B760 (NtMITSetLastInputRecipient.c)
 *     NtUserCreateActivationGroup @ 0x1C012D2C0 (NtUserCreateActivationGroup.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C012FBD0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01320B0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013AFD0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B96F0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Perf::CritAcquire::~CritAcquire(
        InputTraceLogging::Perf::CritAcquire *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+34h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-70h] BYREF
  int *v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+68h] [rbp-40h] BYREF
  int *v13; // [rsp+88h] [rbp-20h]
  __int64 v14; // [rsp+90h] [rbp-18h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)this
    && (*(_DWORD *)(*(_QWORD *)this + 48LL) || *(int *)(*(_QWORD *)this + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)this + 28LL) = *(_OWORD *)((char *)this + 12);
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, (unsigned int)dword_1C024BA90, a4) )
      {
        v7 = *((unsigned __int8 *)this + 8);
        v11 = 4LL;
        v10 = &v7;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (_DWORD)this + 12, 0, 3u, &v9);
        v5 = (unsigned int)dword_1C024BA90;
      }
      if ( (unsigned int)v5 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v5, v6) )
        {
          v8 = *((unsigned __int8 *)this + 8);
          v14 = 4LL;
          v13 = &v8;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024BA90,
            (int)&dword_1C0218FCD,
            (_DWORD)this + 12,
            0,
            3u,
            &v12);
        }
      }
    }
  }
}
