/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CAF28
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001E9F0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001F1B0 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001DC20 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001E600 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x1C00205A8 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0021BE8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0039290 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C00394B0 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C003D1C0 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00A6C30 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C00CB3A0 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0146BB0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // esi
  unsigned int v8; // eax
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbp
  _QWORD *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rdx
  wchar_t *v18; // rcx
  __int64 v19; // rax
  int DisplayDeviceInfo; // eax
  __int64 v21; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v38[32]; // [rsp+38h] [rbp-40h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1);
  *(_QWORD *)(v4 + 24) = *(int *)a1;
  WdLogEvent5_WdEvent(v4);
  v7 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() )
  {
    v8 = *(_DWORD *)a1 + 22;
    if ( v8 > 0x1C )
      return 3221225659LL;
    v5 = 386976263LL;
    if ( !_bittest((const int *)&v5, v8) )
      return 3221225659LL;
  }
  v10 = (_DWORD *)((char *)a1 + 16);
  v11 = *((unsigned int *)a1 + 4);
  if ( (_DWORD)v11 == -1
    || (v12 = ((__int64 (__fastcall *)(char *, __int64, char *, char *))qword_1C0250AC0)(
                (char *)a1 + 8,
                v11,
                (char *)a1 + 8,
                (char *)a1 + 16),
        v14 = v12,
        v12 >= 0) )
  {
    v16 = *(_DWORD *)a1;
    if ( *(int *)a1 > 100 )
    {
LABEL_44:
      LODWORD(v10) = -1073741811;
    }
    else if ( v16 == 100 )
    {
LABEL_42:
      LOBYTE(v5) = 1;
      v31 = ((__int64 (__fastcall *)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))qword_1C0250988)(v5, a1);
      v10 = (_DWORD *)v31;
      if ( v31 < 0 )
      {
        v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v35 + 24) = a1;
        *(_QWORD *)(v35 + 32) = v10;
        WdLogEvent5_WdWarning(v35);
      }
    }
    else
    {
      v17 = 0x1C0000000uLL;
      switch ( v16 )
      {
        case -24:
        case -22:
        case -14:
        case -13:
        case -12:
        case -10:
        case -5:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 9:
        case 11:
          goto LABEL_42;
        case -21:
        case -11:
        case -2:
          DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1, 0x1C0000000LL);
          goto LABEL_24;
        case -20:
          *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
          *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
          *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
          *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession();
          *((_DWORD *)a1 + 9) = gProtocolType == 0;
          *((_DWORD *)a1 + 10) = gProtocolType == -1;
          *((_WORD *)a1 + 22) = gProtocolType;
          *((_QWORD *)a1 + 6) = gRemoteTerminalLuid;
          goto LABEL_21;
        case -15:
          if ( *((_DWORD *)a1 + 1) < 0x20u )
            return 3221225507LL;
          v28 = *((unsigned int *)a1 + 5);
          v29 = (unsigned int)*v10;
          v36 = *((_QWORD *)a1 + 3);
          v30 = *((_QWORD *)a1 + 1);
          v37 = 0;
          LODWORD(v10) = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, __int64))qword_1C0250B70)(
                           v30,
                           v29,
                           v28,
                           &v37,
                           v36);
          *((_DWORD *)a1 + 5) = v37;
          return (unsigned int)v10;
        case -9:
          if ( *((_DWORD *)a1 + 1) < 0x18u )
            return 3221225507LL;
          v26 = (unsigned int)*v10;
          v27 = *((_QWORD *)a1 + 1);
          v37 = 0;
          LODWORD(v10) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C0250998)(
                           v27,
                           v26,
                           0LL,
                           &v37,
                           0LL);
          if ( (int)v10 >= 0 )
          {
            LOBYTE(v7) = v37 == 2;
            *((_DWORD *)a1 + 5) = v7;
          }
          return (unsigned int)v10;
        case -8:
          if ( *((_DWORD *)a1 + 1) < 0x218u )
            return 3221225507LL;
          DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *, char *))qword_1C0250B50)(
                                *((_QWORD *)a1 + 1),
                                (unsigned int)*v10,
                                512LL,
                                (char *)a1 + 20,
                                (char *)a1 + 24);
          goto LABEL_24;
        case -7:
          if ( *((_DWORD *)a1 + 1) < 0x3ACu )
            return 3221225507LL;
          LODWORD(v10) = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))qword_1C0250998)(
                           *((_QWORD *)a1 + 1),
                           (unsigned int)*v10,
                           a1,
                           0LL,
                           0LL);
          Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
          if ( a2 )
          {
            UserSessionSwitchLeaveCrit();
            GetMonitorBrightnessCaps(a1);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v21);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v38, 0);
            EnterSharedCritAvoidingDitHitTestHazard(0, 1);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire(
              (InputTraceLogging::Perf::CritAcquire *)v38,
              v23,
              v24,
              v25);
            EtwTraceAcquiredSharedUserCrit();
          }
          return (unsigned int)v10;
        case -3:
          if ( *((_DWORD *)a1 + 1) != 32 )
            return 3221225485LL;
          DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
LABEL_24:
          LODWORD(v10) = DisplayDeviceInfo;
          return (unsigned int)v10;
        case 1:
          v18 = gpGraphicsDeviceList;
          if ( *((_DWORD *)a1 + 1) < 0x54u )
            return 3221225507LL;
          if ( !gpGraphicsDeviceList )
            goto LABEL_22;
          v17 = *((unsigned int *)a1 + 2);
          do
          {
            if ( *((_QWORD *)a1 + 1) == *((_QWORD *)v18 + 31) && *((_DWORD *)v18 + 64) == *v10 )
              break;
            v18 = (wchar_t *)*((_QWORD *)v18 + 16);
          }
          while ( v18 );
          if ( !v18 )
          {
LABEL_22:
            v19 = WdLogNewEntry5_WdWarning(v18, v17, v6);
            WdLogEvent5_WdWarning(v19);
            return 3221226021LL;
          }
          *(_OWORD *)((char *)a1 + 20) = *((_OWORD *)v18 + 4);
          *(_OWORD *)((char *)a1 + 36) = *((_OWORD *)v18 + 5);
          *(_OWORD *)((char *)a1 + 52) = *((_OWORD *)v18 + 6);
          *(_OWORD *)((char *)a1 + 68) = *((_OWORD *)v18 + 7);
LABEL_21:
          LODWORD(v10) = 0;
          break;
        default:
          goto LABEL_44;
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    if ( *(_DWORD *)a1 == -21 )
    {
      *((_DWORD *)a1 + 506) = 1144084231;
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v5, v13);
      v15[3] = *((int *)a1 + 3);
      v15[4] = *((unsigned int *)a1 + 2);
      v15[5] = (unsigned int)*v10;
      v15[6] = v14;
      v15[7] = 1144084231LL;
      WdLogEvent5_WdError(v15);
    }
    return (unsigned int)v14;
  }
}
