/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C016EB00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C020FD0C (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 *v11; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // ecx
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v20, "DownlevelTouchpad", 0LL);
  LOBYTE(v4) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v4);
  gptiCurrent = v5;
  v7 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v10 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v10 = 0;
          }
          if ( v10 )
          {
            while ( 1 )
            {
              v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v11[2] = 0LL;
              if ( !*(_DWORD *)(*v11 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v11);
            }
          }
        }
      }
    }
  }
  v19 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_25;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v19 = *a2;
  if ( (_DWORD)v19 )
  {
    if ( (unsigned int)(v19 - 1) > 1 )
    {
LABEL_25:
      v17 = 87;
      goto LABEL_26;
    }
  }
  v12 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v19);
  if ( v12 < 0 )
  {
    v17 = RtlNtStatusToDosError(v12);
LABEL_26:
    UserSetLastError(v17);
    goto LABEL_27;
  }
  v7 = 1;
LABEL_27:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v20);
  return v7;
}
