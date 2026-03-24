/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0072874
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00B88C4 (xxxInitProcessInfo.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0072CA0 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // esi
  int v3; // ebx
  int v5; // eax
  void *ProcessInheritedFromUniqueProcessId; // rax
  int v8; // eax
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rax
  PERESOURCE *v24; // rdi
  __int64 *v25; // r14
  __int64 v26; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  PERESOURCE *DomainLockRef; // rbx
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  _CLIENT_ID ClientId; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-30h]
  unsigned __int8 v44; // [rsp+E0h] [rbp-28h]
  GUID ActivityId; // [rsp+E4h] [rbp-24h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F8h] [rbp-10h] BYREF
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+128h] [rbp+20h] BYREF
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 )
  {
    if ( qword_1C0256A58 ? qword_1C0256A58() : 0 )
      return 0LL;
  }
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( qword_1C0256A70 )
      v5 = qword_1C0256A70();
    else
      v5 = -1073741637;
    if ( v5 < 0 || (gdwHydraHint & 0x10000000) != 0 )
      return 0LL;
    v3 = 1;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() )
  {
    ProcessHandle = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_28;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0 )
      {
        v8 = qword_1C02573B0 ? qword_1C02573B0() : -1073741637;
        if ( v8 >= 0 && !(qword_1C02573B8 ? qword_1C02573B8(ProcessInformation[8]) : 0) )
          InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_28:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
          InformationProcess = 0;
        if ( InformationProcess < 0 && v3 )
        {
          UserSessionSwitchLeaveCrit();
          if ( qword_1C0256A78 )
            InformationProcess = qword_1C0256A78();
          else
            InformationProcess = -1073741637;
          if ( InformationProcess == 259 )
          {
            InformationProcess = 0;
          }
          else if ( InformationProcess >= 0 )
          {
            gdwHydraHint |= 0x10000000u;
          }
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v28);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          ActivityId = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v44 = 1;
            v29 = PsGetCurrentThreadWin32Thread(v26);
            v43 = v29;
            if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
              {
                v37 = v44;
                v48 = 4LL;
                v47 = &v37;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024BA90,
                  (int)&dword_1C0218FF7,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v46);
              }
            }
          }
          else
          {
            v43 = 0LL;
          }
          v10 = 0LL;
          while ( 1 )
          {
            v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v11 )
              v10 = *v11;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v10 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v43
            && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
          {
            *(_DWORD *)(v43 + 44) = 1;
            *(GUID *)(v43 + 28) = ActivityId;
            if ( (unsigned int)dword_1C024BA90 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
              {
                v36 = v44;
                v51 = 4LL;
                v50 = &v36;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024BA90,
                  (int)&dword_1C0218FA0,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v49);
                v30 = dword_1C024BA90;
              }
              if ( v30 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
              {
                LODWORD(v39) = v44;
                v54 = 4LL;
                v53 = &v39;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024BA90,
                  (int)&dword_1C0218FCD,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v52);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v10;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v31 = PsGetCurrentProcess(v18, v17),
                ProcessSessionId = PsGetProcessSessionIdEx(v31),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            CurrentThread = KeGetCurrentThread();
            v20 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v20 = *ThreadWin32Thread;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
            if ( v20
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v20 + 488) & 0x1000000) != 0
              && (*(_DWORD *)(v20 + 1232) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
              ProcessHandle = DomainLockRef;
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              {
                v36 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
              }
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              {
                v36 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
              }
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v25 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v25[2];
                  v23 = *v25;
                  v25[2] = 0LL;
                  if ( !*(_DWORD *)(v23 + 8) )
                  {
                    v36 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                  }
                  v24 = (PERESOURCE *)GetDomainLockRef(12);
                  if ( v24 == (PERESOURCE *)&gDomainDummyLock )
                  {
                    v37 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v24);
                  HMUnlockObject(*v25);
                  tagDomLock::LockExclusive(v24);
                  v25 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                DomainLockRef = (PERESOURCE *)ProcessHandle;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
