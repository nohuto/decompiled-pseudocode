/*
 * XREFs of EnterCrit @ 0x1C002FF70
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C00052C0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserToUnicodeEx @ 0x1C000AE40 (NtUserToUnicodeEx.c)
 *     NtUserSetSysColors @ 0x1C000D5C0 (NtUserSetSysColors.c)
 *     NtUserEnumDisplayMonitors @ 0x1C00708A0 (NtUserEnumDisplayMonitors.c)
 *     NtMITActivateInputProcessing @ 0x1C00887C0 (NtMITActivateInputProcessing.c)
 *     NtUserLockCursor @ 0x1C009D550 (NtUserLockCursor.c)
 *     NtUserCreateActivationObject @ 0x1C00A2710 (NtUserCreateActivationObject.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00A5A68 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00A77E0 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserClipCursor @ 0x1C00BEE10 (NtUserClipCursor.c)
 *     NtMapVisualRelativePoints @ 0x1C01174F0 (NtMapVisualRelativePoints.c)
 *     NtConfigureInputSpace @ 0x1C0128D70 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C012A8C0 (NtMITInitMinuserThread.c)
 *     NtMITPostMouseInputMessage @ 0x1C012B510 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C012B630 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C012B750 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012BDD0 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012C170 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C012C320 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C012CFA0 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C012D180 (NtSetShellCursorState.c)
 *     NtUserConfigureActivationObject @ 0x1C012D490 (NtUserConfigureActivationObject.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C012D620 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C012DCB0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C012DFA0 (NtUserDownlevelTouchpad.c)
 *     NtUserGetInputContainerId @ 0x1C012EE90 (NtUserGetInputContainerId.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0130280 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C01305F0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0130850 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C01309C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0131680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0131AA0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131EC0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C01326C0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0132D80 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0133700 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0133DD0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0134090 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C01347E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C0135470 (NtUserSystemParametersInfo.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v27, v28) )
        {
          v34 = v37;
          v41 = 4LL;
          v40 = &v34;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&ActivityId, 0, 3u, &v39);
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
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v12) )
      {
        v33 = v37;
        v44 = 4LL;
        v43 = &v33;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&ActivityId, 0, 3u, &v42);
        v29 = (unsigned int)dword_1C024AA90;
      }
      if ( (unsigned int)v29 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v29, v30) )
      {
        v35 = v37;
        v47 = 4LL;
        v46 = &v35;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&ActivityId, 0, 3u, &v45);
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
