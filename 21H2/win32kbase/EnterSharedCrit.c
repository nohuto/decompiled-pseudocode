/*
 * XREFs of EnterSharedCrit @ 0x1C0035E30
 * Callers:
 *     NtUserDestroyActivationObject @ 0x1C0002FB0 (NtUserDestroyActivationObject.c)
 *     NtUserGetAsyncKeyState @ 0x1C0005BF0 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C0005FB0 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C0006170 (NtUserGetKeyState.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C000D540 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetHDevName @ 0x1C000F660 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C000F770 (NtUserGetDpiForMonitor.c)
 *     NtUserQueryDisplayConfig @ 0x1C001D1C0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C001D4B0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001D580 (NtUserDisplayConfigGetDeviceInfo.c)
 *     hdcOpenDCW @ 0x1C0021590 (hdcOpenDCW.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C0094A80 (NtUserGetKeyboardLayoutList.c)
 *     NtUserQueryActivationObject @ 0x1C00A27C0 (NtUserQueryActivationObject.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C012E390 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetClipCursor @ 0x1C012E8E0 (NtUserGetClipCursor.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C012EA20 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetPointerCursorId @ 0x1C012EDB0 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1C012EEA0 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C012EF90 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetPointerFrameTimes @ 0x1C012F080 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInfoList @ 0x1C012F190 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C012F690 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C012F890 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C012F9A0 (NtUserGetRawPointerDeviceData.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C014A2D0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtHWCursorUpdatePointer @ 0x1C014A940 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

struct tagTHREADINFO *__fastcall EnterSharedCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  LARGE_INTEGER PerformanceCounter; // r14
  LONGLONG v14; // rbp
  struct UserCritTelemetry *Instance; // rax
  int v16; // ecx
  int v17; // r8d
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 v24; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+44h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+58h] [rbp-50h] BYREF
  int *v27; // [rsp+78h] [rbp-30h]
  __int64 v28; // [rsp+80h] [rbp-28h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v24 = 0;
    v19 = PsGetCurrentThreadWin32Thread();
    v23 = v19;
    if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v23 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v20, v21) )
        {
          v22 = v24;
          v28 = 4LL;
          v27 = &v22;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId, 0, 3u, &v26);
        }
      }
    }
  }
  else
  {
    v23 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1
      || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && a2 && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
  v12 = PsGetCurrentThreadWin32Thread();
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v14, 1LL);
    *(LARGE_INTEGER *)(v12 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024A738 - 1) > 2u
      && (qword_1C024A720 & 0x200000010000000LL) != 0
      && (qword_1C024A728 & 0x200000010000000LL) == qword_1C024A728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v16,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v17,
        v14,
        0,
        gullUserCritAcquireToken);
    }
    if ( v14 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v17,
          v14,
          1000000 * v14 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  return v5;
}
