/*
 * XREFs of NtUserSetProcessLaunchForegroundPolicy @ 0x1C009D790
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionPushProcessLaunchForegroundPolicy @ 0x1C009D8A4 (ApiSetEditionPushProcessLaunchForegroundPolicy.c)
 *     ApiSetEditionAllowProcessLaunchForegroundPolicy @ 0x1C009D998 (ApiSetEditionAllowProcessLaunchForegroundPolicy.c)
 *     LockProcessByClientId @ 0x1C009DDA8 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserSetProcessLaunchForegroundPolicy(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  char v6; // si
  int v7; // esi
  int v8; // r14d
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE ProcessId; // r15
  __int64 ProcessWin32Process; // rdi
  bool v15; // di
  __int64 v16; // rcx
  bool v18; // di
  int v19; // edx
  PDEVICE_OBJECT v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // esi
  bool v24; // di
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // [rsp+30h] [rbp-48h]
  PEPROCESS Process; // [rsp+90h] [rbp+18h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h]

  v4 = 3;
  v5 = a1;
  v6 = a2;
  if ( (a2 & 3) == 3 )
  {
    v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 112;
      LOBYTE(v19) = v18;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        112,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v6);
    }
    UserSetLastError(87LL, a2, a3, a4);
    return 0LL;
  }
  v7 = a2 & 0xFFFFFFFB;
  v8 = a2 & 4;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v9 = 0;
  Process = 0LL;
  if ( (int)LockProcessByClientId(v5, &Process) < 0 )
    goto LABEL_31;
  ProcessId = PsGetProcessId(Process);
  ProcessWin32Process = PsGetProcessWin32Process(Process);
  ObfDereferenceObject(Process);
  if ( !ProcessWin32Process || (*(_DWORD *)(ProcessWin32Process + 12) & 0x8000) == 0 )
  {
    v15 = 1;
    if ( !v7 )
    {
      v4 = 1;
      goto LABEL_7;
    }
    v23 = v7 - 1;
    if ( !v23 )
    {
      v4 = 2;
      goto LABEL_7;
    }
    if ( v23 == 1 )
    {
LABEL_7:
      if ( (unsigned int)ApiSetEditionAllowProcessLaunchForegroundPolicy(v4) )
      {
        UserSessionSwitchLeaveCrit(v16, v10, v11, v12);
        LODWORD(v32) = v4;
        LOBYTE(v9) = v8 != 0;
        HIDWORD(v32) = v9;
        ApiSetEditionPushProcessLaunchForegroundPolicy(ProcessId, v32);
        return 1LL;
      }
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v15 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v21 = 115;
      goto LABEL_27;
    }
LABEL_31:
    v24 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 114;
      LOBYTE(v25) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        114,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    }
    v22 = 87LL;
    goto LABEL_48;
  }
  v20 = WPP_GLOBAL_Control;
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_28;
  v21 = 113;
LABEL_27:
  v30 = v21;
  LOBYTE(v21) = v15;
  WPP_RECORDER_AND_TRACE_SF_(
    v20->AttachedDevice,
    v21,
    v11,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    13,
    v30,
    (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_28:
  v22 = 5LL;
LABEL_48:
  UserSetLastError(v22, v10, v11, v12);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return 0LL;
}
