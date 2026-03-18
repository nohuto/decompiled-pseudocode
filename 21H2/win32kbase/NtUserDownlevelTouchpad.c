/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C0158660
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0794 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 CurrentProcessWin32Process; // rax
  char v11; // al
  __int64 v12; // rcx
  struct tagKERNELHANDLETABLEENTRY *v13; // rdi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v22; // [rsp+78h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v22, "DownlevelTouchpad", 0LL);
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v4;
  v9 = 0;
  if ( v4 )
  {
    *((_DWORD *)v4 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v11 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v11 = 0;
        }
        if ( v11 )
        {
          while ( 1 )
          {
            v13 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v13 + 2) = 0LL;
            v12 = *(_QWORD *)v13;
            if ( !*(_DWORD *)(*(_QWORD *)v13 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v5, v7);
              v12 = *(_QWORD *)v13;
            }
            HMUnlockObject(v12);
          }
        }
      }
    }
  }
  v21 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_23;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v21 = *a2;
  if ( (unsigned int)v21 > 2 )
  {
LABEL_23:
    v19 = 87LL;
    goto LABEL_24;
  }
  v14 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v21);
  if ( v14 < 0 )
  {
    v19 = RtlNtStatusToDosError(v14);
LABEL_24:
    UserSetLastError(v19, v5, v7, v8);
    goto LABEL_25;
  }
  v9 = 1;
LABEL_25:
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  return v9;
}
