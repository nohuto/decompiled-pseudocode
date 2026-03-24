/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01FA044
 * Callers:
 *     NtCompositionInputThread @ 0x1C01FB1E0 (NtCompositionInputThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01F9FA8 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C01FA948 (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(CInputManager *this, void *a2, void *a3, int a4)
{
  CInputManager *v4; // r15
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v33; // r14
  __int64 v34; // rax
  PVOID *v35; // rdi
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v40; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v43; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+78h] [rbp-88h] BYREF
  int *v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+A8h] [rbp-58h] BYREF
  int *v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+D8h] [rbp-28h] BYREF
  PVOID **v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+100h] [rbp+0h]

  v4 = g_pInputManager;
  Handle = 0LL;
  v40 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 >= 0 )
  {
    v7 = CInputManager::ValidateUserEvent(a3, &v40);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, (signed __int64)CurrentThread, 0LL);
      if ( !v9 || (CurrentThread = KeGetCurrentThread(), (struct _KTHREAD *)v9 == CurrentThread) )
      {
        *((_QWORD *)v4 + 2) = Handle;
        *((_QWORD *)v4 + 3) = v40;
        v10 = *(_QWORD *)v4;
        *((_DWORD *)v4 + 15) = a4;
        *((_QWORD *)v4 + 4) = v10;
        Handle = 0LL;
        v40 = 0LL;
        if ( qword_1C0257E08 )
          v7 = qword_1C0257E08((char *)v4 + 16);
        else
          v7 = -1073741822;
        if ( v7 >= 0 )
        {
          if ( qword_1C0257E10 )
            v7 = qword_1C0257E10((char *)v4 + 16);
          else
            v7 = -1073741822;
        }
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(CurrentThread);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v43 = 1;
          v13 = PsGetCurrentThreadWin32Thread(v11);
          v42 = v13;
          if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
            {
              v38 = v43;
              v47 = 4LL;
              v46 = &v38;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024BA90,
                (unsigned __int8 *)dword_1C0218FF7,
                &ActivityId,
                0LL,
                3u,
                &v45);
            }
          }
        }
        else
        {
          v42 = 0LL;
        }
        v14 = 0LL;
        while ( 1 )
        {
          v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v15 )
            v14 = *v15;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v14 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v42
          && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
        {
          *(_DWORD *)(v42 + 44) = 1;
          *(GUID *)(v42 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024BA90 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
            {
              v37 = v43;
              v50 = 4LL;
              v49 = &v37;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024BA90,
                (unsigned __int8 *)dword_1C0218FA0,
                &ActivityId,
                0LL,
                3u,
                &v48);
              v21 = dword_1C024BA90;
            }
            if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
            {
              LODWORD(v41) = v43;
              v53 = 4LL;
              v52 = &v41;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024BA90,
                (unsigned __int8 *)dword_1C0218FCD,
                &ActivityId,
                0LL,
                3u,
                &v51);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v24 = PsGetCurrentProcess(v23, v22),
              ProcessSessionId = PsGetProcessSessionIdEx(v24),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          v27 = KeGetCurrentThread();
          v28 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v27);
            if ( ThreadWin32Thread )
              v28 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
          if ( v28
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v28 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v28 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PVOID *)GetDomainLockRef(12);
            v41 = DomainLockRef;
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
            v33 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v33[2];
                v34 = *v33;
                v33[2] = 0LL;
                if ( !*(_DWORD *)(v34 + 8) )
                {
                  v37 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                }
                v35 = (PVOID *)GetDomainLockRef(12);
                if ( v35 == gDomainDummyLock )
                {
                  v38 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                }
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v35);
                HMUnlockObject(*v33);
                tagDomLock::LockExclusive((PERESOURCE *)v35);
                v33 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              DomainLockRef = v41;
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
          }
        }
        CInputManager::CleanupDwmInputThread(v4);
        UserSessionSwitchLeaveCrit();
      }
      else
      {
        v7 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v40 )
        ZwClose(v40);
    }
  }
  return (unsigned int)v7;
}
