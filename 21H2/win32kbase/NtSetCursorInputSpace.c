/*
 * XREFs of NtSetCursorInputSpace @ 0x1C012C750
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C01283B0 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01B3054 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1)
{
  struct _LUID v1; // rsi
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v27; // r15
  __int64 v28; // rax
  PVOID *v29; // rdi
  PVOID v30; // rax
  CInputConfig *v31; // rcx
  NTSTATUS v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v37; // [rsp+30h] [rbp-99h] BYREF
  int v38; // [rsp+34h] [rbp-95h] BYREF
  PVOID *v39; // [rsp+38h] [rbp-91h] BYREF
  struct _LUID v40; // [rsp+40h] [rbp-89h]
  __int64 v41; // [rsp+48h] [rbp-81h]
  unsigned __int8 v42; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+68h] [rbp-61h] BYREF
  int *v45; // [rsp+88h] [rbp-41h]
  __int64 v46; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-31h] BYREF
  int *v48; // [rsp+B8h] [rbp-11h]
  __int64 v49; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+C8h] [rbp-1h] BYREF
  PVOID **v51; // [rsp+E8h] [rbp+1Fh]
  __int64 v52; // [rsp+F0h] [rbp+27h]

  v1 = a1;
  v40 = a1;
  v2 = 0LL;
  v4 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  if ( v4 )
    v4[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v41 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v38 = v42;
        v46 = 4LL;
        v45 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId,
          0LL,
          3u,
          &v44);
      }
    }
  }
  else
  {
    v41 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
  {
    *(_DWORD *)(v41 + 44) = 1;
    *(GUID *)(v41 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v37 = v42;
        v49 = 4LL;
        v48 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v47);
        v13 = dword_1C024BA90;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        LODWORD(v39) = v42;
        v52 = 4LL;
        v51 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v50);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v22 + 488) & 0x1000000) != 0 )
        {
          v20 = *(unsigned int *)(v22 + 1232);
          if ( (v20 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            v39 = DomainLockRef;
            if ( DomainLockRef == gDomainDummyLock )
            {
              v37 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
            }
            if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
            {
              v37 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
            v27 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
                v28 = *v27;
                v27[2] = 0LL;
                if ( !*(_DWORD *)(v28 + 8) )
                {
                  v37 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                }
                v29 = (PVOID *)GetDomainLockRef(12);
                if ( v29 == gDomainDummyLock )
                {
                  v38 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v29);
                HMUnlockObject(*v27);
                tagDomLock::LockExclusive((PERESOURCE *)v29);
                v27 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              DomainLockRef = v39;
              v1 = v40;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
        }
      }
    }
  }
  v30 = (PVOID)PsGetCurrentProcess(v20, v19);
  if ( v30 && v30 == g_pepDwm )
  {
LABEL_60:
    v32 = CInputConfig::BindMouse(v31, v1);
    if ( v32 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_62;
    }
    goto LABEL_56;
  }
  v32 = CheckCapability((const unsigned __int16 *)v31);
  if ( v32 >= 0 )
  {
    v31 = (CInputConfig *)*(unsigned int *)(PsGetCurrentProcessWin32Process(v33) + 820);
    if ( ((unsigned __int8)v31 & 0x30) == 0 )
    {
      v35 = 5LL;
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_56:
  v35 = RtlNtStatusToDosError(v32);
LABEL_57:
  UserSetLastError(v35, v34);
LABEL_62:
  UserSessionSwitchLeaveCrit();
  return v2;
}
