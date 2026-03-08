/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C016E080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     AddPalmRejectionDelayZone @ 0x1C0216F34 (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  void *v5; // r15
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 *v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v5 = a1;
  LOBYTE(a1) = 1;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
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
  v12 = AddPalmRejectionDelayZone(v5, a5);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v12;
}
