/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C0082CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0082ECC (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  char v10; // al
  __int64 *v11; // rdi
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BOOL8 v16; // rcx
  ULONG64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int128 v25; // [rsp+58h] [rbp-60h]
  __int64 v26; // [rsp+68h] [rbp-50h]
  __int128 v27; // [rsp+70h] [rbp-48h] BYREF
  __int128 v28; // [rsp+80h] [rbp-38h]
  __int64 v29; // [rsp+90h] [rbp-28h]

  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v5 = v6 & CurrentProcessWin32Process;
    }
    if ( v5 && (*(_DWORD *)(v5 + 12) & 0x8000) != 0 )
    {
      v6 = (__int64)gptiCurrent;
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v10 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v10 = 0;
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
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v11);
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  v16 = 0LL;
  if ( CurrentProcess )
    v16 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( v16 )
  {
    if ( a1 > 0x14 )
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
      v18 = SGDGetUserSessionState(v17, v13, v14, v15);
      v19 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(*(_QWORD *)(v18 + 16048), a1, &v27);
      UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
      return v19;
    }
  }
  else
  {
    UserSessionSwitchLeaveCrit(v16, v13, v14, v15);
    return 3221225506LL;
  }
}
