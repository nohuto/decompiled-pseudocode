/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C00B6650
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C00AA084 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v11; // rbx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BOOL8 v16; // rcx
  ULONG64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rcx
  __int128 v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+60h] [rbp-58h]
  __int128 v27; // [rsp+68h] [rbp-50h] BYREF
  __int128 v28; // [rsp+78h] [rbp-40h]
  __int64 v29; // [rsp+88h] [rbp-30h]

  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v6 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v11 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v11 + 2) = 0LL;
            v24 = *(_QWORD *)v11;
            if ( !*(_DWORD *)(*(_QWORD *)v11 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v5, v7);
              v24 = *(_QWORD *)v11;
            }
            HMUnlockObject(v24);
          }
        }
      }
    }
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5, v7, v8);
  v16 = 0LL;
  if ( CurrentProcess )
    v16 = CurrentProcess == g_pepDwm;
  if ( v16 )
  {
    if ( a1 > 0x15 )
    {
      UserSessionSwitchLeaveCrit(v16, v13, v14, v15);
      return 3221225485LL;
    }
    else
    {
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v17 = a2 + 40;
      if ( a2 + 40 < a2 || v17 > MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v25 = *(_OWORD *)(a2 + 16);
      v26 = *(_QWORD *)(a2 + 32);
      v27 = *(_OWORD *)a2;
      v28 = v25;
      v29 = v26;
      v18 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v17, a1, (__int64)&v27, v15);
      UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
      return v18;
    }
  }
  else
  {
    UserSessionSwitchLeaveCrit(v16, v13, v14, v15);
    return 3221225506LL;
  }
}
