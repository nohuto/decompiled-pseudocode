__int64 __fastcall NtUserSetProcessLaunchForegroundPolicy(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r14d
  char v5; // di
  int v6; // ebx
  PDEVICE_OBJECT v7; // rcx
  unsigned int v8; // r14d
  int v9; // r8d
  HANDLE ProcessId; // r14
  _QWORD *ProcessWin32Process; // rax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r8d
  bool v16; // di
  int v17; // edx
  unsigned int v18; // r14d
  __int64 v19; // r8
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  int v23; // eax
  NTSTATUS v24; // r14d
  __int64 v25; // rax
  int v26; // edx
  ULONG v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  HANDLE v33; // [rsp+50h] [rbp-89h]
  HANDLE ProcessHandle; // [rsp+58h] [rbp-81h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp-79h] BYREF
  int v36; // [rsp+68h] [rbp-71h]
  _BYTE ProcessInformation[64]; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v38[32]; // [rsp+B0h] [rbp-29h] BYREF
  bool v40; // [rsp+148h] [rbp+6Fh]
  __int64 v41; // [rsp+150h] [rbp+77h]
  int v42; // [rsp+158h] [rbp+7Fh]

  v3 = a1;
  v4 = a2;
  LODWORD(v41) = 3;
  if ( (a2 & 3) == 3 )
  {
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 112;
      LOBYTE(v17) = v16;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        112,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v4);
    }
    goto LABEL_39;
  }
  v5 = 1;
  v6 = 0;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      113,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      v4,
      v3);
  v42 = v4 & 4;
  v8 = v4 & 0xFFFFFFFB;
  if ( !v8 )
  {
    LODWORD(v41) = 1;
    goto LABEL_10;
  }
  v18 = v8 - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = v5;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          13,
          114,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
      }
LABEL_39:
      UserSetLastError(87LL);
      return 0LL;
    }
  }
  else
  {
    LODWORD(v41) = 2;
  }
LABEL_10:
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v7, a2, a3, v3);
  v36 = LockProcessByClientId((int)a1, &Process);
  if ( !Process )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = 120;
      LOBYTE(v32) = v5;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        120,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        a1);
    }
    v29 = 87LL;
    goto LABEL_110;
  }
  ProcessId = PsGetProcessId(Process);
  v33 = ProcessId;
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
  v13 = (__int64)ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
  {
    v40 = 0;
    ProcessHandle = 0LL;
    if ( ObOpenObjectByPointer(Process, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle) < 0 )
      goto LABEL_79;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL) >= 0
      && (ProcessInformation[56] & 8) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          115,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          (char)ProcessId);
      }
      memset(v38, 0, 0x40uLL);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageInformation, v38, 0x40u, 0LL) >= 0 )
        v40 = v38[8] == 2;
    }
    ZwClose(ProcessHandle);
    if ( v40 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v22) = 0;
      }
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          116,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          (char)ProcessId);
      if ( qword_1C02D6598 )
      {
        v23 = qword_1C02D6598(Process, v22, v19);
        v24 = v23;
        if ( v23 >= 0 )
        {
          if ( v23 == 1073741851 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 9235LL);
          v25 = PsGetProcessWin32Process(Process);
          v13 = v25;
          if ( v25 )
            v13 = -(__int64)(*(_QWORD *)v25 != 0LL) & v25;
          *(_DWORD *)(v13 + 812) |= 0x10000000u;
          LOBYTE(ProcessId) = (_BYTE)v33;
          goto LABEL_13;
        }
      }
      else
      {
        v24 = -1073741637;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 117;
        LOBYTE(v26) = v5;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          13,
          117,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          (char)v33,
          v24);
      }
      v27 = RtlNtStatusToDosError(v24);
    }
    else
    {
LABEL_79:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = 118;
        LOBYTE(v28) = v5;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          13,
          118,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          (char)ProcessId);
      }
      v27 = 5;
    }
    v29 = v27;
LABEL_110:
    UserSetLastError(v29);
    if ( Process )
      ObfDereferenceObject(Process);
    UserSessionSwitchLeaveCrit();
    return 0LL;
  }
LABEL_13:
  if ( (*(_DWORD *)(v13 + 12) & 0x8000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 119;
      LOBYTE(v30) = v5;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        119,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        (char)ProcessId);
    }
    goto LABEL_94;
  }
  if ( !(unsigned int)ApiSetEditionAllowProcessLaunchForegroundPolicy((unsigned int)v41) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xCu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = 121;
      LOBYTE(v31) = v5;
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        13,
        121,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
LABEL_94:
    v29 = 5LL;
    goto LABEL_110;
  }
  if ( Process )
    ObfDereferenceObject(Process);
  UserSessionSwitchLeaveCrit();
  if ( !v33 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9285LL);
  LOBYTE(v6) = v42 != 0;
  HIDWORD(v41) = v6;
  ApiSetEditionPushProcessLaunchForegroundPolicy(v33, v41);
  return 1LL;
}
