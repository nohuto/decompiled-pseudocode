/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480
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
 *     UserPowerInfoCallout @ 0x1C004FC50 (UserPowerInfoCallout.c)
 *     GreGetDCPoint @ 0x1C00722C0 (GreGetDCPoint.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00889A0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C008A210 (NtUserCheckProcessSession.c)
 *     UserReleaseDC @ 0x1C0092CC0 (UserReleaseDC.c)
 *     NtUserGetDoubleClickTime @ 0x1C009D340 (NtUserGetDoubleClickTime.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C009E490 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00A3C30 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00A6E10 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CAF28 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C012BA30 (NtMITSetLastInputRecipient.c)
 *     NtUserCreateActivationGroup @ 0x1C012D590 (NtUserCreateActivationGroup.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C012FEA0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C0132380 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013B2A0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B9620 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C029A770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
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
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, a4) )
      {
        v7 = *((unsigned __int8 *)this + 8);
        v11 = 4LL;
        v10 = &v7;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (_DWORD)this + 12, 0, 3u, &v9);
        v5 = (unsigned int)dword_1C024AA90;
      }
      if ( (unsigned int)v5 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v5, v6) )
        {
          v8 = *((unsigned __int8 *)this + 8);
          v14 = 4LL;
          v13 = &v8;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024AA90,
            (int)&dword_1C0217FAD,
            (_DWORD)this + 12,
            0,
            3u,
            &v12);
        }
      }
    }
  }
}
