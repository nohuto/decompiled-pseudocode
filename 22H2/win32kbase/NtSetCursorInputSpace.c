/*
 * XREFs of NtSetCursorInputSpace @ 0x1C0142810
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01E3A90 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     CheckCapability @ 0x1C01E7C20 (CheckCapability.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LUID v4; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 CurrentProcess; // rax
  CInputConfig *v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  ULONG v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v4 = a1;
  LOBYTE(a1.LowPart) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(*(_QWORD *)&a1, a2, a3, a4);
  v9 = 0LL;
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v7 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v11 = *v12;
              v12[2] = 0LL;
              if ( !*(_DWORD *)(v11 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v12);
            }
          }
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
LABEL_21:
    v15 = CInputConfig::BindMouse(v14, v4);
    if ( v15 >= 0 )
    {
      v9 = 1LL;
      goto LABEL_23;
    }
    goto LABEL_15;
  }
  v15 = CheckCapability(L"shellExperienceComposer");
  if ( v15 >= 0 )
  {
    v22 = PsGetCurrentProcessWin32Process(v16);
    if ( v22 )
    {
      v14 = (CInputConfig *)-*(_QWORD *)v22;
      v22 &= -(__int64)(*(_QWORD *)v22 != 0LL);
    }
    if ( (*(_DWORD *)(v22 + 816) & 0x30) == 0 )
    {
      v17 = 5;
      goto LABEL_16;
    }
    goto LABEL_21;
  }
LABEL_15:
  v17 = RtlNtStatusToDosError(v15);
LABEL_16:
  UserSetLastError(v17);
LABEL_23:
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v9;
}
