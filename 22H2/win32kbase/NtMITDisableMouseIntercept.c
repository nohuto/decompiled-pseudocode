/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1C01413E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00C2240 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITDisableMouseIntercept(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  __int64 MouseProcessor; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  LOBYTE(a1) = 1;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  v6 = 0;
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v9 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v8 = *v9;
          v9[2] = 0LL;
          if ( !*(_DWORD *)(v8 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v9);
        }
      }
    }
  }
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    v14 = 5;
LABEL_18:
    UserSetLastError(v14);
    goto LABEL_19;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v11, v10, v12, v13);
  if ( !MouseProcessor || !CMouseProcessor::MouseInterceptState::Disable(MouseProcessor + 3704) )
  {
    v14 = 5023;
    goto LABEL_18;
  }
  v6 = 1;
LABEL_19:
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v6;
}
