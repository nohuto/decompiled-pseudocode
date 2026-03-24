/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0072CCC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011B880 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007B65C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C00B6A00 (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     CleanupLogonProcess @ 0x1C00B6D80 (CleanupLogonProcess.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 Win32kNtUserCleanup(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  PERESOURCE *v13; // rdi
  __int64 *v14; // rsi
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  HANDLE v19; // rcx
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  int v32; // [rsp+38h] [rbp-89h] BYREF
  int v33; // [rsp+3Ch] [rbp-85h] BYREF
  PERESOURCE *v34; // [rsp+40h] [rbp-81h] BYREF
  __int64 v35; // [rsp+48h] [rbp-79h]
  unsigned __int8 v36; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+68h] [rbp-59h] BYREF
  int *v39; // [rsp+88h] [rbp-39h]
  __int64 v40; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+98h] [rbp-29h] BYREF
  int *v42; // [rsp+B8h] [rbp-9h]
  __int64 v43; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp+7h] BYREF
  void **v45; // [rsp+E8h] [rbp+27h]
  __int64 v46; // [rsp+F0h] [rbp+2Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 15, 10, (__int64)&WPP_a844338296dc32a54b50029aac15bf9a_Traceguids);
  ApiSetEditionBaseDriverUnloadUninitialize();
  if ( gpresUser )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v36 = 1;
      v21 = PsGetCurrentThreadWin32Thread(v1);
      v35 = v21;
      if ( v21 && (*(int *)(v21 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v33 = v36;
          v40 = 4LL;
          v39 = &v33;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId, 0, 3u, &v38);
        }
      }
    }
    else
    {
      v35 = 0LL;
    }
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v4 )
        v3 = *v4;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v35 && (*(_DWORD *)(v35 + 48) || *(int *)(v35 + 24) > 0) )
    {
      *(_DWORD *)(v35 + 44) = 1;
      *(GUID *)(v35 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v32 = v36;
          v43 = 4LL;
          v42 = &v32;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&ActivityId, 0, 3u, &v41);
          v22 = dword_1C024BA90;
        }
        if ( v22 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v34) = v36;
          v46 = 4LL;
          v45 = (void **)&v34;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&ActivityId, 0, 3u, &v44);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v23 = PsGetCurrentProcess(v11, v10),
          ProcessSessionId = PsGetProcessSessionIdEx(v23),
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
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        v34 = DomainLockRef;
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v32 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v32 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v14 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v14[2];
            v12 = *v14;
            v14[2] = 0LL;
            if ( !*(_DWORD *)(v12 + 8) )
            {
              v32 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v13 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v13 == (PERESOURCE *)&gDomainDummyLock )
            {
              v33 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v13);
            HMUnlockObject(*v14);
            tagDomLock::LockExclusive(v13);
            v14 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          DomainLockRef = v34;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit();
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  v15 = -1073741637;
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1 )
    v16 = ext_ms_win_moderncore_win32k_base_ntuser_l1();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C0256B18 )
    qword_1C0256B18();
  v19 = ghWinstaDirectory;
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess(v19, v17, v18);
  if ( qword_1C0256B30 )
    v15 = qword_1C0256B30();
  if ( v15 >= 0 && qword_1C0256B38 )
    qword_1C0256B38();
  return 1LL;
}
