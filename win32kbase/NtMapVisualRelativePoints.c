/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C0158F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C01585A4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0159308 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     UserGetLastError @ 0x1C0247AF0 (UserGetLastError.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, unsigned __int64 a4, char *Address)
{
  unsigned __int64 v5; // r14
  char v6; // si
  struct tagTHREADINFO *v7; // rax
  ULONG64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v13; // rax
  char v14; // al
  __int64 *i; // rdi
  PDEVICE_OBJECT v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rdx
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int j; // edi
  NTSTATUS v24; // eax
  int v25; // edi
  ULONG v26; // eax
  bool v27; // r14
  char LastError; // al
  int v29; // r8d
  int v30; // edx
  char *v32; // [rsp+C0h] [rbp+8h]

  v32 = a1;
  v5 = a4;
  v6 = 1;
  LOBYTE(a1) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v13 = v8 & CurrentProcessWin32Process;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v14 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v14 = 0;
          }
          if ( v14 )
          {
            for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              i[2] = 0LL;
              if ( !*(_DWORD *)(*i + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*i);
            }
          }
        }
      }
    }
  }
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_ii(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      10,
      (__int64)&WPP_34c4a09b7329367a4784537b13b7b9d2_Traceguids,
      (char)v32,
      (char)a2);
    v5 = a4;
  }
  v17 = 8LL * a3;
  if ( v17 > 0xFFFFFFFF )
  {
    v25 = 0;
    UserSetLastError(8);
  }
  else
  {
    if ( (_DWORD)v17 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v16, v8, v10, v11) == 0 ? 3 : 0) & (unsigned __int8)v5) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (PDEVICE_OBJECT)(v5 + (unsigned int)v17);
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)v16 > MmUserProbeAddress || (unsigned __int64)v16 < v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, v8, v10, v11);
    ProbeForWrite(Address, (unsigned int)v17, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( j = 0; j != a3; ++j )
    {
      v24 = KernelMapVisualRelativePoint(
              v32,
              a2,
              (const struct VisualPoint *)(a4 + 8LL * j),
              (struct VisualPoint *)&Address[8 * j]);
      if ( v24 < 0 )
      {
        v25 = 0;
        v26 = RtlNtStatusToDosError(v24);
        UserSetLastError(v26);
        goto LABEL_34;
      }
    }
    v25 = 1;
  }
LABEL_34:
  if ( !v25 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v19, v21, v22);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v6;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v29,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        11,
        (__int64)&WPP_34c4a09b7329367a4784537b13b7b9d2_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCrit((__int64)v20, v19, v21, v22);
  return v25;
}
