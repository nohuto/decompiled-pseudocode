/*
 * XREFs of VideoPortCalloutThread @ 0x1C011ADB4
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C007C540 (xxxCreateSystemThreads.c)
 * Callees:
 *     IszzzUpdateCursorImageSupported @ 0x1C0015CA0 (IszzzUpdateCursorImageSupported.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001C7B0 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C006D57C (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     xxxDwmControl @ 0x1C0074C60 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0074CD0 (PostWinlogonMessage.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C0075010 (IsxxxDwmStopRedirectionSupported.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 *     InitSystemThread @ 0x1C0084E20 (InitSystemThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C009A254 (UpdateExternalMonitorConnectedStatus.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B2FB0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3B40 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1C00C45A4 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00C4C4C (IsSetPointerSupported.c)
 *     SafeEnableMDEV @ 0x1C00C4D90 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00C4E10 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119628 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01199B4 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C011E9D0 (xxxDisplayDiagBlackScreenDetected.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C01253EC (McTemplateK0dq_EtwWriteTransfer.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C0147928 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C01D1FC4 (DCompositionDDAChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01FC608 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01FC634 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x1C01FC660 (IsxxxUserResetDisplayDeviceSupported.c)
 */

LONG __fastcall VideoPortCalloutThread(struct _VIDEO_WIN32K_CALLBACKS_PARAMS **a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rsi
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v2; // r12
  ULONG_PTR *Param; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r15
  int inited; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CalloutType; // r9
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v32; // r14
  __int64 v33; // rax
  PVOID *v34; // rdi
  __int64 v35; // rcx
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // eax
  int v41; // ecx
  int v42; // ebx
  int CurrentProcessSessionId; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  struct _MDEV *v55; // rcx
  CInputConfig *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  void (*v62)(void); // rax
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  char v66; // al
  char v68; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v69; // [rsp+49h] [rbp-BFh]
  char v70; // [rsp+4Bh] [rbp-BDh] BYREF
  int v71; // [rsp+4Ch] [rbp-BCh] BYREF
  int v72; // [rsp+50h] [rbp-B8h] BYREF
  int v73; // [rsp+54h] [rbp-B4h] BYREF
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v74; // [rsp+60h] [rbp-A8h]
  _QWORD v75[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+78h] [rbp-90h]
  unsigned __int8 ActivityId_4; // [rsp+80h] [rbp-88h]
  GUID ActivityId_8; // [rsp+84h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+98h] [rbp-70h] BYREF
  int *v80; // [rsp+B8h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+C8h] [rbp-40h] BYREF
  int *v83; // [rsp+E8h] [rbp-20h]
  __int64 v84; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+F8h] [rbp-10h] BYREF
  int *v86; // [rsp+118h] [rbp+10h]
  __int64 v87; // [rsp+120h] [rbp+18h]

  v1 = *a1;
  v2 = a1;
  v74 = a1;
  Param = (ULONG_PTR *)v1->Param;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Param[1];
  v1->Param = *Param;
  inited = InitSystemThread(0LL);
  CalloutType = (unsigned int)v1->CalloutType;
  v1->Status = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    McTemplateK0dq_EtwWriteTransfer(v6, &StartVideoPortCalloutThread, v7, CalloutType, inited);
    inited = v1->Status;
  }
  if ( inited >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v11 = PsGetCurrentThreadWin32Thread(v9);
      v76 = v11;
      if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v76 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v72 = ActivityId_4;
          v81 = 4LL;
          v80 = &v72;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FF7,
            &ActivityId_8,
            0LL,
            3u,
            &v79);
        }
      }
    }
    else
    {
      v76 = 0LL;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v76 && (*(_DWORD *)(v76 + 48) || *(int *)(v76 + 24) > 0) )
    {
      *(_DWORD *)(v76 + 44) = 1;
      *(GUID *)(v76 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v71 = ActivityId_4;
          v84 = 4LL;
          v83 = &v71;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FA0,
            &ActivityId_8,
            0LL,
            3u,
            &v82);
          v19 = dword_1C024BA90;
        }
        if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v73 = ActivityId_4;
          v87 = 4LL;
          v86 = &v73;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FCD,
            &ActivityId_8,
            0LL,
            3u,
            &v85);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v22 = PsGetCurrentProcess(v21, v20),
          ProcessSessionId = PsGetProcessSessionIdEx(v22),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v27 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v27 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
      if ( v27
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v27 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v27 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PVOID *)GetDomainLockRef(12);
        if ( DomainLockRef == gDomainDummyLock )
        {
          v71 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
        }
        if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
        {
          v71 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
        v32 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
            v33 = *v32;
            v32[2] = 0LL;
            if ( !*(_DWORD *)(v33 + 8) )
            {
              v71 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
            }
            v34 = (PVOID *)GetDomainLockRef(12);
            if ( v34 == gDomainDummyLock )
            {
              v72 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v34);
            HMUnlockObject(*v32);
            tagDomLock::LockExclusive((PERESOURCE *)v34);
            v32 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v2 = v74;
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      }
    }
    v35 = (unsigned int)v1->CalloutType;
    v36 = (_DWORD)v35 == 7;
    if ( (_DWORD)v35 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v35 = (unsigned int)v1->CalloutType;
      v36 = (_DWORD)v35 == 7;
    }
    LOBYTE(v25) = v36;
    if ( (((_DWORD)v35 - 7) & 0xFFFFFFFC) != 0 || (v36 = (_DWORD)v35 == 9, LOBYTE(v35) = 1, v36) )
      LOBYTE(v35) = 0;
    xxxWaitForVideoPortCalloutReady(v35, v25, v4);
    if ( qword_1C0258050 )
      v40 = qword_1C0258050(v38, v37);
    else
      v40 = 0;
    if ( v40 )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_68;
        v41 = 33920;
        if ( !_bittest(&v41, v1->CalloutType) )
          goto LABEL_68;
      }
    }
    if ( gfSwitchInProgress )
    {
      v42 = (unsigned __int16)gProtocolType;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107, v1->CalloutType, CurrentProcessSessionId, v42);
    }
    v44 = v1->CalloutType;
    if ( v1->CalloutType > VideoRepaintDesktop )
    {
      v63 = v44 - 13;
      if ( v63 )
      {
        v64 = v63 - 1;
        if ( !v64 )
        {
          v49 = 0;
          v50 = 1;
          v51 = 0;
          goto LABEL_79;
        }
        v65 = v64 - 1;
        if ( !v65 )
        {
          DCompositionDDAChange();
          goto LABEL_140;
        }
        if ( v65 != 1 )
          goto LABEL_68;
        LOBYTE(v39) = v1->Param;
        v66 = v39 & 1;
        LOBYTE(v39) = (v39 & 2) != 0;
        LOBYTE(v37) = v66;
        xxxDisplayDiagBlackScreenDetected(8, v37, v39, 0, 0LL);
LABEL_139:
        v1->Status = 0;
        goto LABEL_140;
      }
      if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
        goto LABEL_139;
      if ( qword_1C02575D8 )
        qword_1C02575D8(1LL);
      v62 = (void (*)(void))qword_1C0257C00;
    }
    else
    {
      if ( v44 != 12 )
      {
        v45 = v44 - 4;
        if ( v45 )
        {
          v46 = v45 - 3;
          if ( !v46 )
          {
            v1->Status = Win32kPnpNotify(v1, v4);
            goto LABEL_140;
          }
          v47 = v46 - 1;
          if ( !v47 )
          {
            v75[1] = 0LL;
            v75[0] = 0LL;
            if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
              || (PVOID)PsGetCurrentProcess(v53, v52) != gpepCSRSS
              || grpdeskRitInput
              && (!qword_1C0257618 ? (v54 = -1073741637) : (v54 = qword_1C0257618(grpdeskRitInput, v75)), v54 >= 0) )
            {
              v68 = 1;
              do
              {
                v69 = 0;
                v55 = *(struct _MDEV **)(gpDispInfo + 16);
                v70 = 0;
                if ( (int)DrvProcessDxgkDisplayCallout(v55, (__int64)&v70, (__int64)&v68) < 0 )
                {
                  v68 = 0;
                }
                else
                {
                  if ( (_BYTE)v69 )
                  {
                    GreIncrementDisplaySettingsUniqueness();
                    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
                  }
                  else if ( HIBYTE(v69) )
                  {
                    CInputConfig::OnDisplayStateChange(v56);
                  }
                  if ( v70 )
                    PostWinlogonMessage(1027LL, 0);
                }
              }
              while ( !v68 );
              v1->Status = 0;
              if ( (unsigned int)UserIsWddmConnectedSession() )
                UpdateExternalMonitorConnectedStatus(0);
              if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                && (PVOID)PsGetCurrentProcess(v58, v57) == gpepCSRSS
                && qword_1C0257628 )
              {
                qword_1C0257628(v75, 0LL);
              }
            }
            goto LABEL_140;
          }
          v48 = v47 - 2;
          if ( v48 )
          {
            if ( v48 != 1 )
            {
LABEL_68:
              v1->Status = -1073741823;
LABEL_140:
              if ( v1->CalloutType == VideoPnpNotifyCallout )
                gbInVideoPnpCallout = 0;
              UserSessionSwitchLeaveCrit();
              goto LABEL_143;
            }
            v49 = v1->Param;
            v50 = 0;
            v51 = 1;
LABEL_79:
            DCompositionForceRender(0LL, v51, v49, v50);
            goto LABEL_140;
          }
        }
        if ( v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C0257638 )
            qword_1C0257638(v60, v59);
          if ( qword_1C0257640 )
            v61 = qword_1C0257640();
          else
            v61 = -1073741637;
          if ( v61 >= 0 && qword_1C0257648 )
            qword_1C0257648();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeDisableMDEV(1u);
        }
        goto LABEL_139;
      }
      if ( (int)IsxxxUserResetDisplayDeviceSupported() < 0 )
        goto LABEL_139;
      v62 = (void (*)(void))qword_1C0257638;
    }
    if ( v62 )
      v62();
    goto LABEL_139;
  }
LABEL_143:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(
      v6,
      &StopVideoPortCalloutThread,
      (unsigned int)v1->Status,
      (unsigned int)v1->CalloutType,
      v1->Status);
  return KeSetEvent((PRKEVENT)v2[1], 1, 0);
}
