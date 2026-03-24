/*
 * XREFs of VideoPortCallout @ 0x1C011A290
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1C011B740 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     CreateKernelEvent @ 0x1C0057E20 (CreateKernelEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C01187BC (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CSTRemove @ 0x1C011D7E0 (CSTRemove.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rcx
  int v3; // r14d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rdi
  __int64 *v26; // rsi
  __int64 v27; // rax
  PVOID *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  LARGE_INTEGER *v31; // rbx
  __int64 v32; // rax
  struct tagTHREADINFO *v33; // rbx
  struct tagTHREADINFO **v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // ebx
  __int64 v45; // rax
  struct _KTHREAD *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rax
  PVOID *v51; // rbx
  __int64 *v52; // rsi
  __int64 v53; // rax
  PVOID *v54; // rdi
  int v55; // [rsp+48h] [rbp-C0h] BYREF
  int v56; // [rsp+4Ch] [rbp-BCh] BYREF
  int v57; // [rsp+50h] [rbp-B8h] BYREF
  int v58; // [rsp+54h] [rbp-B4h] BYREF
  int v59; // [rsp+58h] [rbp-B0h] BYREF
  int v60; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  PVOID *v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h] BYREF
  PVOID KernelEvent; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h]
  PVOID Object[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v67; // [rsp+98h] [rbp-70h]
  unsigned __int8 v68; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v71; // [rsp+C0h] [rbp-48h]
  GUID v72; // [rsp+C4h] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+D8h] [rbp-30h] BYREF
  int *v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+108h] [rbp+0h] BYREF
  int *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+138h] [rbp+30h] BYREF
  int *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+168h] [rbp+60h] BYREF
  int *v83; // [rsp+188h] [rbp+80h]
  __int64 v84; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+198h] [rbp+90h] BYREF
  int *v86; // [rsp+1B8h] [rbp+B0h]
  __int64 v87; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]

  v65 = a1;
  v1 = a1;
  v63 = a1;
  v55 = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  if ( KernelEvent )
  {
    if ( *(_BYTE *)(v63 + 31) )
    {
      Object[0] = gpevtVideoInitialized;
      Object[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v68 = 1;
          v6 = PsGetCurrentThreadWin32Thread(v4);
          v67 = v6;
          if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v67 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
            {
              v57 = v68;
              v75 = 4LL;
              v74 = &v57;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024BA90,
                (unsigned __int8 *)dword_1C0218FF7,
                &ActivityId,
                0LL,
                3u,
                &v73);
            }
          }
        }
        else
        {
          v67 = 0LL;
        }
        v7 = 0LL;
        while ( 1 )
        {
          v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v8 )
            v7 = *v8;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v7 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v67
          && (*(_DWORD *)(v67 + 48) || *(int *)(v67 + 24) > 0) )
        {
          *(_DWORD *)(v67 + 44) = 1;
          *(GUID *)(v67 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024BA90 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
            {
              v56 = v68;
              v78 = 4LL;
              v77 = &v56;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024BA90,
                (unsigned __int8 *)dword_1C0218FA0,
                &ActivityId,
                0LL,
                3u,
                &v76);
              v14 = dword_1C024BA90;
            }
            if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
            {
              v58 = v68;
              v81 = 4LL;
              v80 = &v58;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024BA90,
                (unsigned __int8 *)dword_1C0218FCD,
                &ActivityId,
                0LL,
                3u,
                &v79);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v7;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v17 = PsGetCurrentProcess(v16, v15),
              ProcessSessionId = PsGetProcessSessionIdEx(v17),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v21 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v21 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
          if ( v21
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            v62 = DomainLockRef;
            if ( DomainLockRef == gDomainDummyLock )
            {
              v56 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
            }
            if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
            {
              v56 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
            v26 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v26[2];
                v27 = *v26;
                v26[2] = 0LL;
                if ( !*(_DWORD *)(v27 + 8) )
                {
                  v56 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                }
                v28 = (PVOID *)GetDomainLockRef(12);
                if ( v28 == gDomainDummyLock )
                {
                  v57 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v28);
                HMUnlockObject(*v26);
                tagDomLock::LockExclusive((PERESOURCE *)v28);
                v26 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              DomainLockRef = v62;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
        }
        v3 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v63, &v55);
        LODWORD(v62) = v3;
        UserSessionSwitchLeaveCrit();
        if ( v3 < 0 )
        {
          if ( v55 )
          {
            v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29);
            if ( v31 )
              v31[1] = KeQueryPerformanceCounter(0LL);
            v72 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v71 = 1;
              v32 = PsGetCurrentThreadWin32Thread(v30);
              v70 = v32;
              if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v70 + 48)) )
              {
                EtwActivityIdControl(3u, &v72);
                if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
                {
                  v59 = v71;
                  v84 = 4LL;
                  v83 = &v59;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024BA90,
                    (unsigned __int8 *)dword_1C0218FF7,
                    &v72,
                    0LL,
                    3u,
                    &v82);
                }
              }
            }
            else
            {
              v70 = 0LL;
            }
            v33 = 0LL;
            while ( 1 )
            {
              v34 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v34 )
                v33 = *v34;
              v37 = (PVOID)PsGetCurrentProcess(v36, v35);
              if ( v37 )
              {
                if ( v37 == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v39, v38) == gpepCSRSS && v33 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v33 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
              && v70
              && (*(_DWORD *)(v70 + 48) || *(int *)(v70 + 24) > 0) )
            {
              *(_DWORD *)(v70 + 44) = 1;
              *(GUID *)(v70 + 28) = v72;
              if ( (unsigned int)dword_1C024BA90 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
                {
                  v60 = v71;
                  v87 = 4LL;
                  v86 = &v60;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024BA90,
                    (unsigned __int8 *)dword_1C0218FA0,
                    &v72,
                    0LL,
                    3u,
                    &v85);
                  v40 = dword_1C024BA90;
                }
                if ( v40 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
                {
                  LODWORD(v61) = v71;
                  v90 = 4LL;
                  v89 = &v61;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024BA90,
                    (unsigned __int8 *)dword_1C0218FCD,
                    &v72,
                    0LL,
                    3u,
                    &v88);
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v33;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v43 = PsGetCurrentProcess(v42, v41),
                  v44 = PsGetProcessSessionIdEx(v43),
                  v45 = PsGetCurrentThreadProcess(),
                  v44 == (unsigned int)PsGetProcessSessionIdEx(v45)) )
            {
              v46 = KeGetCurrentThread();
              v47 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v49 = (__int64 *)PsGetThreadWin32Thread(v46);
                if ( v49 )
                  v47 = *v49;
              }
              v50 = PsGetCurrentProcessWin32Process(v48);
              if ( v47
                && v50
                && (*(_DWORD *)(v47 + 488) & 0x1000000) != 0
                && (*(_DWORD *)(v47 + 1232) & 0x80u) == 0
                && (*(_DWORD *)(v50 + 12) & 0x8000) != 0 )
              {
                v51 = (PVOID *)GetDomainLockRef(12);
                if ( v51 == gDomainDummyLock )
                {
                  v55 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
                }
                if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*v51) == 1 )
                {
                  v55 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
                }
                ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*v51);
                v52 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v52[2];
                    v53 = *v52;
                    v52[2] = 0LL;
                    if ( !*(_DWORD *)(v53 + 8) )
                    {
                      v55 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                    }
                    v54 = (PVOID *)GetDomainLockRef(12);
                    if ( v54 == gDomainDummyLock )
                    {
                      v57 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                    }
                    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v54);
                    HMUnlockObject(*v52);
                    tagDomLock::LockExclusive((PERESOURCE *)v54);
                    v52 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v3 = (int)v62;
                  v1 = v65;
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v51);
              }
            }
            CSTRemove(4LL, &v63);
            UserSessionSwitchLeaveCrit();
          }
        }
        else
        {
          KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
          v3 = *(_DWORD *)(v1 + 24);
        }
      }
      else
      {
        v3 = -1073741816;
      }
    }
    else
    {
      v3 = -1073741823;
    }
    Win32FreePool((__int64)KernelEvent);
    *(_DWORD *)(v1 + 24) = v3;
  }
  else
  {
    *(_DWORD *)(v1 + 24) = -1073741801;
  }
}
