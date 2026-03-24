/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119C84
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsPowerOnGdiSupported @ 0x1C00C2A64 (IsPowerOnGdiSupported.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124850 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C012762C (McTemplateK0tt_EtwWriteTransfer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01FC564 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v3; // r15
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r12
  char v5; // r14
  ULONG v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v30; // rsi
  __int64 v31; // rax
  PVOID *v32; // rdi
  char v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37; // [rsp+60h] [rbp-A0h]
  PVOID Object[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  unsigned __int8 v40; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+98h] [rbp-68h] BYREF
  int *v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C8h] [rbp-38h] BYREF
  int *v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+F8h] [rbp-8h] BYREF
  int *v49; // [rsp+118h] [rbp+18h]
  __int64 v50; // [rsp+120h] [rbp+20h]

  v3 = a2;
  v4 = a3;
  v33 = a2;
  *(_OWORD *)Object = 0LL;
  v37 = a3;
  v5 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( gfMonitorPowerInProgress )
      {
        v6 = 1;
        Object[0] = gpevtMonitorPowerWaiter;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v6++;
        Object[a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v40 = 1;
        v10 = PsGetCurrentThreadWin32Thread(v8);
        v39 = v10;
        if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v34 = v40;
            v44 = 4LL;
            v43 = &v34;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &ActivityId,
              0LL,
              3u,
              &v42);
          }
        }
      }
      else
      {
        v39 = 0LL;
      }
      v11 = 0LL;
      while ( 1 )
      {
        v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v12 )
          v11 = *v12;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v11 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v39 && (*(_DWORD *)(v39 + 48) || *(int *)(v39 + 24) > 0) )
      {
        *(_DWORD *)(v39 + 44) = 1;
        *(GUID *)(v39 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v35 = v40;
            v47 = 4LL;
            v46 = &v35;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &ActivityId,
              0LL,
              3u,
              &v45);
            v18 = dword_1C024AA90;
          }
          if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v36 = v40;
            v50 = 4LL;
            v49 = &v36;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &ActivityId,
              0LL,
              3u,
              &v48);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v21 = PsGetCurrentProcess(v20, v19);
        ProcessSessionId = PsGetProcessSessionIdEx(v21);
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v25 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v25 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
      if ( v25 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v25 + 488) & 0x1000000) != 0 )
          {
            a1 = *(unsigned int *)(v25 + 1232);
            if ( (a1 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PVOID *)GetDomainLockRef(12);
              if ( DomainLockRef == gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
              if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
              ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
              v30 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
                  v31 = *v30;
                  v30[2] = 0LL;
                  if ( !*(_DWORD *)(v31 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                  v32 = (PVOID *)GetDomainLockRef(12);
                  if ( v32 == gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                  ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v32);
                  HMUnlockObject(*v30);
                  tagDomLock::LockExclusive((PERESOURCE *)v32);
                  v30 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v3 = v33;
                v4 = v37;
              }
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
            }
          }
        }
      }
    }
    if ( !v3 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    if ( qword_1C0256528 )
      qword_1C0256528(v4, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
