/*
 * XREFs of ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C006F9B4
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0070EFC (xxxInitProcessInfo.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C007026C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxCheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // ebx
  int v3; // edi
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v14; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v16; // rax
  struct tagTHREADINFO **v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v24; // rdi
  int v25; // r8d
  struct tagTHREADINFO *v26; // rdi
  __int64 v27; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rax
  struct tagKERNELHANDLETABLEENTRY *v30; // rdi
  PULONG ReturnLength; // [rsp+28h] [rbp-59h]
  _CLIENT_ID ClientId; // [rsp+38h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-39h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+78h] [rbp-9h] BYREF
  void *ProcessHandle; // [rsp+F0h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && qword_1C02D5FD0 && (unsigned int)qword_1C02D5FD0() )
    return 0LL;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( !qword_1C02D5FE8 || (int)qword_1C02D5FE8() < 0 || (gdwHydraHint & 0x10000000) != 0 )
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
        goto LABEL_24;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && qword_1C02D6968
        && (int)qword_1C02D6968() >= 0
        && (!qword_1C02D6970 || !(unsigned int)qword_1C02D6970(ProcessInformation[8])) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_24:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
        {
          return 0;
        }
        else if ( v3 )
        {
          UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
          if ( qword_1C02D5FF0 )
          {
            v11 = qword_1C02D5FF0();
            InformationProcess = v11;
            if ( v11 == 259 )
            {
              InformationProcess = 0;
            }
            else if ( v11 >= 0 )
            {
              gdwHydraHint |= 0x10000000u;
            }
          }
          else
          {
            InformationProcess = -1073741637;
          }
          v12 = 0x200000010000000LL;
          if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
            || (Reserved = WPP_MAIN_CB.Reserved,
                v14 = 0x8000002010000000uLL,
                ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
            && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
            || ((__int64)WPP_MAIN_CB.Reserved & v12) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (v12 & qword_1C02C4050) != 0
            && (v12 & qword_1C02C4058) == qword_1C02C4058 )
          {
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(
                                                          v10,
                                                          Reserved,
                                                          v12,
                                                          v14,
                                                          ReturnLength);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          }
          v16 = SGDGetUserSessionState(v10, Reserved, v12, v14);
          v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v16 + 8));
          if ( v17 )
          {
            if ( IsEtwUserCritEnabled() )
            {
              v22 = PsGetCurrentThreadWin32Thread(v19, v18, v20, v21, ReturnLength);
              if ( v22 )
              {
                PerformanceCounter = KeQueryPerformanceCounter(0LL);
                v24 = PerformanceCounter.QuadPart - *(_QWORD *)(v22 + 8);
                if ( (dword_1C02D1900 & 1) == 0 )
                {
                  dword_1C02D1900 |= 1u;
                  memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
                  word_1C02D2A38 = 0;
                  byte_1C02D2A3A = 0;
                  memset(&unk_1C02D2A40, 0, 0x168uLL);
                  qword_1C02D2BB8 = 0LL;
                  qword_1C02D2BD0 = 0LL;
                  xmmword_1C02D2BA8 = 0LL;
                  qword_1C02D2BE8 = 0LL;
                  xmmword_1C02D2BC0 = 0LL;
                  xmmword_1C02D2BF0 = 0uLL;
                  xmmword_1C02D2BD8 = 0LL;
                }
                UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v24, 0);
                if ( (dword_1C02D1900 & 1) == 0 )
                {
                  dword_1C02D1900 |= 1u;
                  memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
                  word_1C02D2A38 = 0;
                  byte_1C02D2A3A = 0;
                  memset(&unk_1C02D2A40, 0, 0x168uLL);
                  qword_1C02D2BB8 = 0LL;
                  qword_1C02D2BD0 = 0LL;
                  xmmword_1C02D2BA8 = 0LL;
                  qword_1C02D2BE8 = 0LL;
                  xmmword_1C02D2BC0 = 0LL;
                  xmmword_1C02D2BF0 = 0uLL;
                  xmmword_1C02D2BD8 = 0LL;
                }
                UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                *(LARGE_INTEGER *)(v22 + 8) = PerformanceCounter;
                if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                  && (qword_1C02C4050 & 0x200000010000000LL) != 0
                  && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v25,
                    v24,
                    1000000 * v24 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                if ( v24 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                  && (signed __int64)(PerformanceCounter.QuadPart
                                    - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
                {
                  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                    McTemplateK0xqx_EtwWriteTransfer(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v25,
                      v24,
                      1000 * v24 / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
                }
                *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
            }
            v26 = *v17;
            if ( !IsThreadCrossSessionAttached() )
            {
              gptiCurrent = v26;
              if ( v26 )
              {
                *((_DWORD *)v26 + 387) = 1;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
                if ( CurrentProcessWin32Process
                  && *(_QWORD *)CurrentProcessWin32Process
                  && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v30 = gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v29 = *(_QWORD *)v30;
                    *((_QWORD *)v30 + 2) = 0LL;
                    if ( !*(_DWORD *)(v29 + 8) )
                    {
                      LODWORD(ProcessHandle) = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    }
                    HMUnlockObject(*(_QWORD *)v30);
                  }
                }
              }
              return (unsigned int)InformationProcess;
            }
          }
          else
          {
            EtwTraceAcquiredExclusiveUserCrit();
          }
          gptiCurrent = 0LL;
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
