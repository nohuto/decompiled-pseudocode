__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v1; // r14
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rax
  char v7; // al
  struct tagKERNELHANDLETABLEENTRY *v8; // rdi
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rsi

  v1 = a1;
  LOBYTE(a1) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v2;
  v4 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v7 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v7 = 0;
          }
          if ( v7 )
          {
            while ( 1 )
            {
              v8 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v8 + 2) = 0LL;
              if ( !*(_DWORD *)(*(_QWORD *)v8 + 8LL) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*(_QWORD *)v8);
            }
          }
        }
      }
    }
  }
  v9 = gptiCurrent;
  v10 = *((_QWORD *)gptiCurrent + 54);
  if ( (unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 53) + 864LL, v10 + 432, 0LL)
    || (*(_DWORD *)(v10 + 396) & 0x2000000) != 0 )
  {
    v4 = SetKeyboardState(v1);
  }
  else
  {
    EtwTraceUIPIInputError(v9, 0LL, 3);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
