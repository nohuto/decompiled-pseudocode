/*
 * XREFs of UserProcessTimerStatisticsCallout @ 0x1C012D690
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserProcessTimerStatisticsCallout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  v7 = 0;
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v9 = *v10;
          v10[2] = 0LL;
          if ( !*(_DWORD *)(v9 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v10);
        }
      }
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)a1);
  if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(ProcessWin32Process + 1056);
  else
    v7 = -1073741558;
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v7;
}
