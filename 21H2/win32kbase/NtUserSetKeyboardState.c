/*
 * XREFs of NtUserSetKeyboardState @ 0x1C0005830
 * Callers:
 *     <none>
 * Callees:
 *     _SetKeyboardState @ 0x1C0005950 (_SetKeyboardState.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v1; // r14
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  struct tagKERNELHANDLETABLEENTRY *v13; // rdi
  struct tagTHREADINFO *v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // rcx

  v1 = a1;
  LOBYTE(a1) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v2;
  v7 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3, v5, v6);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v12 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v12 = 0;
        }
        if ( v12 )
        {
          while ( 1 )
          {
            v13 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v13 + 2) = 0LL;
            v17 = *(_QWORD *)v13;
            if ( !*(_DWORD *)(*(_QWORD *)v13 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v9, v10);
              v17 = *(_QWORD *)v13;
            }
            HMUnlockObject(v17, v9, v10, v11);
          }
        }
      }
    }
  }
  v14 = gptiCurrent;
  v15 = *((_QWORD *)gptiCurrent + 54);
  if ( (unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 53) + 880LL, v15 + 424, 0LL)
    || (*(_DWORD *)(v15 + 388) & 0x2000000) != 0 )
  {
    v7 = SetKeyboardState(v1);
  }
  else
  {
    EtwTraceUIPIInputError(v14, 0LL, 3);
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
