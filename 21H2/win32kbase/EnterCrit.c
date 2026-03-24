/*
 * XREFs of EnterCrit @ 0x1C002EB00
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C00052C0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserToUnicodeEx @ 0x1C00099C0 (NtUserToUnicodeEx.c)
 *     NtUserSetSysColors @ 0x1C000B8B0 (NtUserSetSysColors.c)
 *     NtUserEnumDisplayMonitors @ 0x1C006FDF0 (NtUserEnumDisplayMonitors.c)
 *     NtMITActivateInputProcessing @ 0x1C0087920 (NtMITActivateInputProcessing.c)
 *     NtUserLockCursor @ 0x1C009C790 (NtUserLockCursor.c)
 *     NtUserCreateActivationObject @ 0x1C00A1950 (NtUserCreateActivationObject.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00A4CA8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00A72E0 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserClipCursor @ 0x1C00BEAC0 (NtUserClipCursor.c)
 *     NtMapVisualRelativePoints @ 0x1C0117220 (NtMapVisualRelativePoints.c)
 *     NtConfigureInputSpace @ 0x1C0128AA0 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C012A5F0 (NtMITInitMinuserThread.c)
 *     NtMITPostMouseInputMessage @ 0x1C012B240 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C012B360 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C012B480 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012BB00 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012BEA0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C012C050 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C012CCD0 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C012CEB0 (NtSetShellCursorState.c)
 *     NtUserConfigureActivationObject @ 0x1C012D1C0 (NtUserConfigureActivationObject.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C012D350 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C012D9E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C012DCD0 (NtUserDownlevelTouchpad.c)
 *     NtUserGetInputContainerId @ 0x1C012EBC0 (NtUserGetInputContainerId.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C012FFB0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0130320 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0130580 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C01306F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C01313B0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01317D0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131BF0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C01323F0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0132AB0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0133430 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0133B00 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0133DC0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0134510 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C01351A0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *i; // r14
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  PERESOURCE *v32; // rdi
  int v33; // [rsp+30h] [rbp-99h] BYREF
  int v34; // [rsp+34h] [rbp-95h] BYREF
  int v35; // [rsp+38h] [rbp-91h] BYREF
  __int64 v36; // [rsp+40h] [rbp-89h]
  unsigned __int8 v37; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+60h] [rbp-69h] BYREF
  int *v40; // [rsp+80h] [rbp-49h]
  __int64 v41; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+90h] [rbp-39h] BYREF
  int *v43; // [rsp+B0h] [rbp-19h]
  __int64 v44; // [rsp+B8h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C0h] [rbp-9h] BYREF
  int *v46; // [rsp+E0h] [rbp+17h]
  __int64 v47; // [rsp+E8h] [rbp+1Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v37 = 1;
    v26 = PsGetCurrentThreadWin32Thread();
    v36 = v26;
    if ( v26 && (*(int *)(v26 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v27, v28) )
        {
          v34 = v37;
          v41 = 4LL;
          v40 = &v34;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId, 0, 3u, &v39);
        }
      }
    }
  }
  else
  {
    v36 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
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
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
  {
    *(_DWORD *)(v36 + 44) = 1;
    *(GUID *)(v36 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, (unsigned int)dword_1C024BA90, v12) )
      {
        v33 = v37;
        v44 = 4LL;
        v43 = &v33;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&ActivityId, 0, 3u, &v42);
        v29 = (unsigned int)dword_1C024BA90;
      }
      if ( (unsigned int)v29 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v29, v30) )
      {
        v35 = v37;
        v47 = 4LL;
        v46 = &v35;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&ActivityId, 0, 3u, &v45);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v23 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v23),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v33 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v33 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        v31 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v31 + 8) )
        {
          v33 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
        }
        v32 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v32 == (PERESOURCE *)&gDomainDummyLock )
        {
          v34 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v32);
        HMUnlockObject(*i);
        tagDomLock::LockExclusive((tagDomLock *)v32);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v5;
}
