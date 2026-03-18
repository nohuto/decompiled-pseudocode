/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C005A184
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C7AC8 (xxxInitProcessInfo.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0016FC4 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // ebx
  int v3; // edi
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO **v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  LARGE_INTEGER *v18; // rdi
  struct tagTHREADINFO *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct tagKERNELHANDLETABLEENTRY *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rdi
  void *ProcessHandle; // [rsp+38h] [rbp-D0h] BYREF
  __int64 ClientId; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE ClientId_8[20]; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR ProcessInformation[4]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D8h] [rbp-30h] BYREF
  void **p_ProcessHandle; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && qword_1C029B7C8 && (unsigned int)qword_1C029B7C8() )
    return 0LL;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( !qword_1C029B7E0 || (int)qword_1C029B7E0() < 0 || (gdwHydraHint & 0x10000000) != 0 )
      return 0LL;
    v3 = 1;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() )
  {
    ProcessHandle = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ClientId = ProcessInheritedFromUniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_QWORD *)ClientId_8 = 0LL;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, (PCLIENT_ID)&ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_22;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && qword_1C029C0F0
        && (int)qword_1C029C0F0() >= 0
        && (!qword_1C029C0F8 || !(unsigned int)qword_1C029C0F8(LODWORD(ProcessInformation[2].Ptr))) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_22:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
        {
          return 0;
        }
        else if ( v3 )
        {
          UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
          if ( qword_1C029B7E8 )
          {
            v10 = qword_1C029B7E8();
            InformationProcess = v10;
            if ( v10 == 259 )
            {
              InformationProcess = 0;
            }
            else if ( v10 >= 0 )
            {
              gdwHydraHint |= 0x10000000u;
            }
          }
          else
          {
            InformationProcess = -1073741637;
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12, v11, v13);
          else
            CurrentThreadWin32Thread = 0LL;
          ClientId = CurrentThreadWin32Thread;
          *(_DWORD *)ClientId_8 = 1;
          if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(ClientId + 48)) )
          {
            EtwActivityIdControl(3u, (LPGUID)&ClientId_8[4]);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              ObjectAttributes.SecurityQualityOfService = (PVOID)4;
              LODWORD(ProcessHandle) = *(_DWORD *)ClientId_8 == 1;
              ObjectAttributes.SecurityDescriptor = &ProcessHandle;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                (const GUID *)&ClientId_8[4],
                0LL,
                3u,
                (PEVENT_DATA_DESCRIPTOR)&ObjectAttributes);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v16 = W32kEtwEnabledKeyword,
                v17 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v17 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v16, v17);
            if ( v18 )
              v18[1] = KeQueryPerformanceCounter(0LL);
          }
          v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v15 )
          {
            v19 = *v15;
            if ( IsThreadCrossSessionAttached() )
              v19 = 0LL;
            if ( ClientId )
            {
              v21 = *(unsigned int *)(ClientId + 24);
              if ( *(_DWORD *)(ClientId + 48) || (int)v21 > 0 )
              {
                *(_DWORD *)(ClientId + 44) = 1;
                *(_OWORD *)(ClientId + 28) = *(_OWORD *)&ClientId_8[4];
                v22 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v37 = 4LL;
                    LODWORD(ProcessHandle) = *(_DWORD *)ClientId_8 == 1;
                    p_ProcessHandle = &ProcessHandle;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      (const GUID *)&ClientId_8[4],
                      0LL,
                      3u,
                      &v35);
                    v22 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v22 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    *(_QWORD *)&ProcessInformation[2].Size = 4LL;
                    LODWORD(ProcessHandle) = *(_DWORD *)ClientId_8 == 1;
                    ProcessInformation[2].Ptr = (ULONGLONG)&ProcessHandle;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      (const GUID *)&ClientId_8[4],
                      0LL,
                      3u,
                      ProcessInformation);
                  }
                }
              }
            }
            gptiCurrent = v19;
            if ( v19 )
            {
              *((_DWORD *)v19 + 377) = 1;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v20, v22, v23);
              if ( CurrentProcessWin32Process
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v29 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v27 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  v28 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  gpSharedUserCritDeferredUnlockListHead = v27;
                  if ( !*(_DWORD *)(v28 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v26);
                    v28 = *v29;
                  }
                  HMUnlockObject(v28);
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&ClientId);
            gptiCurrent = 0LL;
          }
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
