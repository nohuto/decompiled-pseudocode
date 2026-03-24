/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C0053B60
 * Callers:
 *     <none>
 * Callees:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0055240 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C00585A0 (WPP_RECORDER_SF_qqdd.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ProcessSuspendedEventMessage @ 0x1C0126808 (ProcessSuspendedEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??1?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01DFF60 (--1-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ.c)
 */

__int64 __fastcall ScheduleDispatchNotification(struct tagWND *a1)
{
  __int64 v1; // rdi
  __int64 CurrentProcessWin32Process; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // r14
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  _QWORD *v18; // rax
  int v19; // eax
  unsigned int v21; // eax
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v23; // rcx
  HANDLE ThreadId; // rax
  int v25; // [rsp+28h] [rbp-59h]
  _QWORD v26[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v27; // [rsp+88h] [rbp+7h]
  __int128 SystemInformation; // [rsp+98h] [rbp+17h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+27h]

  v1 = *((_QWORD *)a1 + 2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 424) == CurrentProcessWin32Process )
  {
    v4 = 0;
    if ( v1 != gptiCurrent
      && !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, *(_QWORD *)(v1 + 432) + 428LL) )
    {
      return 1LL;
    }
    v5 = *(_QWORD *)(v1 + 432);
    DLT = DLT_QUEUE::getDLT(CurrentProcessWin32Process);
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v26[0] = DomainLockRef;
    v26[1] = v5;
    if ( v5 == gObjDummyLock )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)v5);
    if ( (*(_DWORD *)(v1 + 488) & 1) == 0 )
    {
      v29 = 0LL;
      v11 = *(_DWORD *)(v1 + 1232);
      SystemInformation = 0LL;
      if ( (v11 & 0x2000) != 0
        && (v11 & 0x4000) == 0
        && (PsGetCurrentProcess(v9, v8, v10) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
      {
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v1);
        v23 = *(struct _KTHREAD **)v1;
        *(_QWORD *)&v27 = ThreadProcessId;
        ThreadId = PsGetThreadId(v23);
        LODWORD(v29) = 13;
        *((_QWORD *)&v27 + 1) = ThreadId;
        SystemInformation = v27;
        if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
          *(_DWORD *)(v1 + 1232) |= 0x4000u;
      }
      if ( (*(_DWORD *)(v1 + 1232) & 0x20) == 0
        || (unsigned int)ProcessSuspendedEventMessage(v1, 9LL, a1, 96LL, 0LL, 0LL) )
      {
        if ( *(_DWORD *)(v5 + 40) >= gUserPostMessageLimit )
        {
          v21 = 1816;
        }
        else
        {
          v12 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v13 = v12;
          if ( v12 )
          {
            memset(v12, 0, 0xA0uLL);
            v17 = 8;
            if ( *(_DWORD *)(v5 + 44) != 2 )
              v17 = 4;
            v13[25] |= v17;
            v18 = *(_QWORD **)(v5 + 32);
            if ( v18 )
            {
              *v18 = v13;
              *((_QWORD *)v13 + 1) = *(_QWORD *)(v5 + 32);
            }
            else
            {
              *(_QWORD *)(v5 + 24) = v13;
            }
            *(_QWORD *)(v5 + 32) = v13;
            v19 = *(_DWORD *)(v5 + 40) + 1;
            *(_DWORD *)(v5 + 40) = v19;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqdd(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                v14,
                v15,
                v16,
                v25,
                (char)v13,
                v5 + 24,
                *(_DWORD *)(v5 + 44),
                v19);
            StoreQMessage(
              (struct tagQMSG *)v13,
              a1,
              0x60u,
              0LL,
              0LL,
              0,
              0LL,
              9u,
              0LL,
              0,
              0LL,
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
              0LL,
              0LL);
            *((_QWORD *)v13 + 13) = v1;
            if ( (*(_DWORD *)(v1 + 488) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v1 + 448) + 6LL) |= 0x2040u;
              *(_WORD *)(*(_QWORD *)(v1 + 448) + 4LL) |= 0x2040u;
              if ( (*(_WORD *)(*(_QWORD *)(v1 + 448) + 10LL) & 0x2040) != 0 )
                KeSetEvent(*(PRKEVENT *)(v1 + 736), 2, 0);
            }
            tagObjLock::UnLockExclusive((tagObjLock *)v5);
            tagDomLock::UnLockShared(DomainLockRef);
            return 2;
          }
          v21 = 8;
        }
        UserSetLastError(v21);
      }
    }
    CLockExclusiveInUserCrit<DLT_QUEUE>::~CLockExclusiveInUserCrit<DLT_QUEUE>(v26);
    return v4;
  }
  UserSetLastError(5LL);
  return 0LL;
}
