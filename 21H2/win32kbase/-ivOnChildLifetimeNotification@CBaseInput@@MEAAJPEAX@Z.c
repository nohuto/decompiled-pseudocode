/*
 * XREFs of ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B96F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     isRootPartition @ 0x1C0041628 (isRootPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00563DC (RimInputTypeToDeviceInputType.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSleep @ 0x1C00AF9E0 (UserSleep.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AF7DC (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC120 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BC3C0 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC758 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD1D8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivOnChildLifetimeNotification(CBaseInput *this, _DWORD *a2)
{
  void *v4; // rdx
  __int64 v5; // rcx
  _BOOL8 v6; // rbx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // edi
  struct DEVICEINFO *i; // rbx
  int v12; // eax
  const struct CONTAINER_ID *v13; // r8
  const struct CONTAINER_ID *v14; // r9
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v19; // rax
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v33; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v38; // rcx
  LARGE_INTEGER *v39; // rbx
  __int64 v40; // rax
  struct tagTHREADINFO *v41; // rdi
  struct tagTHREADINFO **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PVOID v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r8d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v60; // rsi
  __int64 v61; // rax
  PVOID *v62; // rdi
  struct RawInputManagerObject **v63; // rsi
  _DWORD *v64; // r13
  int v65; // ebx
  int v66; // edi
  int v67; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v71; // [rsp+38h] [rbp-C8h]
  int v72; // [rsp+3Ch] [rbp-C4h] BYREF
  int v73; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v74; // [rsp+48h] [rbp-B8h] BYREF
  CBaseInput *v75; // [rsp+50h] [rbp-B0h]
  _DWORD *v76; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v78; // [rsp+68h] [rbp-98h]
  GUID v79; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v80; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 v81; // [rsp+88h] [rbp-78h]
  GUID ActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+A0h] [rbp-60h] BYREF
  char *v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+D0h] [rbp-30h] BYREF
  int *v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+100h] [rbp+0h] BYREF
  int *v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+130h] [rbp+30h] BYREF
  PVOID **v93; // [rsp+150h] [rbp+50h]
  __int64 v94; // [rsp+158h] [rbp+58h]

  v76 = a2;
  v71 = 0;
  v75 = this;
  v4 = &WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      12,
      19,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  if ( isRootPartition() )
  {
    LOBYTE(v6) = 0;
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v7 = *((_DWORD *)this + 36);
    LODWORD(v70) = a2[3];
    v8 = RimInputTypeToDeviceInputType(v7);
    v9 = a2[2];
    v10 = v8;
    if ( v9 == 1 )
    {
      ++*((_DWORD *)this + 314);
      IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v8, &v70);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) <= 2u && *(void **)i != TouchExtensibility::hDeviceUser )
        {
          v12 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
          if ( (_DWORD)v13 == v12 )
          {
            IVRootDeliver::PnP::SendRootPnpCreated(
              *((IVRootDeliver::PnP **)i + 4),
              (struct RawInputManagerDeviceObject *)&v70,
              v13);
            v71 = IVRootDeliver::PnP::SendRootPnp(i, (struct DEVICEINFO *)2, (unsigned int)&v70, v14);
          }
        }
      }
      IVRootDeliver::PnP::SendRootPnpSyncState(2LL, v10, &v70);
      v6 = (*((_DWORD *)this + 36) & 0x10) != 0;
    }
    else if ( v9 == 3 )
    {
      --*((_DWORD *)this + 314);
    }
    qword_1C02554D8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v6 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v81 = 0;
        v19 = PsGetCurrentThreadWin32Thread(v17);
        v80 = v19;
        if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v80 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            HIDWORD(v70) = v81;
            v85 = 4LL;
            v84 = (char *)&v70 + 4;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024BA90,
              (unsigned __int8 *)dword_1C0218FF7,
              &ActivityId,
              0LL,
              3u,
              &v83);
          }
        }
      }
      else
      {
        v80 = 0LL;
      }
      v20 = 0LL;
      while ( 1 )
      {
        v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
        if ( v21 )
          v20 = *v21;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v23, v22);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v20 == gptiRit )
        {
          break;
        }
        _InterlockedAdd(&gcDITHitTestWaiters, 1u);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v80, v25, v27, v28);
      v31 = PsGetCurrentThreadWin32Thread(v29);
      if ( v31 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v33 = PerformanceCounter.QuadPart - *(_QWORD *)(v31 + 8);
        Instance = UserCritTelemetry::getInstance();
        UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v33, 1);
        v30 = 0x200000010000000LL;
        *(LARGE_INTEGER *)(v31 + 8) = PerformanceCounter;
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C024A738 - 1) > 2u
          && (qword_1C024A720 & 0x200000010000000LL) != 0
          && (qword_1C024A728 & 0x200000010000000LL) == qword_1C024A728
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(Timeout) = 0;
          McTemplateK0xqx_EtwWriteTransfer(
            v35,
            &AcquiredSharedUserCritEvent,
            v36,
            v33,
            Timeout,
            gullUserCritAcquireToken,
            v70);
        }
        if ( v33 >= W32kEtwUserCritAcquireDelayTimeoutQPC
          && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(Timeout) = 1000000 * v33 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              (__int64)gullUserCritAcquireToken,
              &AcquiredSharedUserCritTelemetryEvent,
              v36,
              v33,
              Timeout,
              gullUserCritAcquireToken);
          }
          _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
        }
        *(_QWORD *)(v31 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        (IVRootDeliver::Settings *)&v70,
        (const struct CONTAINER_ID *)v30);
      UserSessionSwitchLeaveCrit();
    }
  }
  else
  {
    v39 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( v39 )
      v39[1] = KeQueryPerformanceCounter(0LL);
    v79 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v78 = 1;
      v40 = PsGetCurrentThreadWin32Thread(v38);
      v77 = v40;
      if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v77 + 48)) )
      {
        EtwActivityIdControl(3u, &v79);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v72 = v78;
          v88 = 4LL;
          v87 = &v72;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FF7,
            &v79,
            0LL,
            3u,
            &v86);
        }
      }
    }
    else
    {
      v77 = 0LL;
    }
    v41 = 0LL;
    while ( 1 )
    {
      v42 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v42 )
        v41 = *v42;
      v45 = (PVOID)PsGetCurrentProcess(v44, v43);
      if ( v45 )
      {
        if ( v45 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v47, v46) == gpepCSRSS && v41 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v41 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v77 && (*(_DWORD *)(v77 + 48) || *(int *)(v77 + 24) > 0) )
    {
      *(_DWORD *)(v77 + 44) = 1;
      *(GUID *)(v77 + 28) = v79;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v73 = v78;
          v91 = 4LL;
          v90 = &v73;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FA0,
            &v79,
            0LL,
            3u,
            &v89);
          v48 = dword_1C024BA90;
        }
        if ( v48 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v74) = v78;
          v94 = 4LL;
          v93 = &v74;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FCD,
            &v79,
            0LL,
            3u,
            &v92);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v41;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v51 = PsGetCurrentProcess(v50, v49),
          ProcessSessionId = PsGetProcessSessionIdEx(v51),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v55 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v55 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v56);
      if ( v55
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v55 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v55 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PVOID *)GetDomainLockRef(12);
        v74 = DomainLockRef;
        if ( DomainLockRef == gDomainDummyLock )
        {
          LODWORD(v70) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
        }
        if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
        {
          LODWORD(v70) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
        v60 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v60[2];
            v61 = *v60;
            v60[2] = 0LL;
            if ( !*(_DWORD *)(v61 + 8) )
            {
              LODWORD(v70) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
            }
            v62 = (PVOID *)GetDomainLockRef(12);
            if ( v62 == gDomainDummyLock )
            {
              HIDWORD(v70) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v62);
            HMUnlockObject(*v60);
            tagDomLock::LockExclusive((PERESOURCE *)v62);
            v60 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          DomainLockRef = v74;
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      }
    }
    v63 = (struct RawInputManagerObject **)v75;
    if ( *((_QWORD *)v75 + 2) )
    {
      v64 = v76;
      if ( v76[2] == 2 )
      {
        v65 = 0;
        while ( 1 )
        {
          v66 = gpfnIVChildReInitialize ? gpfnIVChildReInitialize(v64[4]) : -1073741637;
          if ( v66 >= 0 )
            break;
          UserSleep(1000);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v69) = v66;
            LOBYTE(v67) = 2;
            WPP_RECORDER_SF_d(
              (_DWORD)gBaseLog,
              v67,
              12,
              20,
              (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
              v69);
          }
          if ( (unsigned int)++v65 >= 0xA )
            KeBugCheck(0x164u);
        }
        v71 = CBaseInput::ivChildLoop((CBaseInput *)v63, v64[4], v63[2]);
      }
    }
    UserSessionSwitchLeaveCrit();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      12,
      21,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return v71;
}
