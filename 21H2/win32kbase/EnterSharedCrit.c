/*
 * XREFs of EnterSharedCrit @ 0x1C002A270
 * Callers:
 *     GreGetDCPoint @ 0x1C00AB470 (GreGetDCPoint.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0158C20 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetDoubleClickTime @ 0x1C0159280 (NtUserGetDoubleClickTime.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0029830 (EtwTraceAcquiredSharedUserCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 EnterSharedCrit()
{
  __int64 v0; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 *v2; // rdi
  LARGE_INTEGER *v4; // rdi
  BOOL v5; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+38h] [rbp-60h] BYREF
  int v7; // [rsp+40h] [rbp-58h]
  GUID ActivityId; // [rsp+44h] [rbp-54h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-40h] BYREF
  BOOL *v10; // [rsp+78h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp-18h]

  v0 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v6 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v6 = 0LL;
  }
  v7 = 0;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v6 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        v11 = 4LL;
        v5 = v7 == 1;
        v10 = &v5;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v9);
      }
    }
  }
  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v4 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v4 )
      v4[1] = KeQueryPerformanceCounter(0LL);
  }
  v2 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
  EtwTraceAcquiredSharedUserCrit();
  if ( v2 )
    v0 = *v2;
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v6);
  return v0;
}
