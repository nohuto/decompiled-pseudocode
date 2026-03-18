/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C0157360
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     AddPalmRejectionDelayZone @ 0x1C01E7134 (AddPalmRejectionDelayZone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // rcx
  struct tagKERNELHANDLETABLEENTRY *v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
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
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10);
            v12 = *(_QWORD *)v13;
          }
          HMUnlockObject(v12);
        }
      }
    }
  }
  v14 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v14;
}
