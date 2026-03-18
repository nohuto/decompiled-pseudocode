/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C0145B90
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C01451D4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0145ED8 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, unsigned __int64 a4, char *Address)
{
  __int64 v6; // rbx
  char v7; // r14
  char v8; // r12
  char v9; // di
  struct tagTHREADINFO *v10; // rax
  ULONG64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v17; // rbx
  __int64 v18; // rcx
  PDEVICE_OBJECT v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rdx
  PDEVICE_OBJECT v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 i; // rbx
  NTSTATUS v27; // eax
  int v28; // ebx
  ULONG v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  bool v33; // si
  char LastError; // al
  int v35; // r8d
  int v36; // edx

  v6 = a3;
  v7 = (char)a2;
  v8 = (char)a1;
  v9 = 1;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v17 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v17 + 2) = 0LL;
          v18 = *(_QWORD *)v17;
          if ( !*(_DWORD *)(*(_QWORD *)v17 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11, v13);
            v18 = *(_QWORD *)v17;
          }
          HMUnlockObject(v18);
        }
        v6 = a3;
      }
    }
  }
  v19 = WPP_GLOBAL_Control;
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ii(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v13,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      10,
      (__int64)&WPP_34c4a09b7329367a4784537b13b7b9d2_Traceguids,
      v8,
      v7);
  v20 = 8 * v6;
  if ( v20 > 0xFFFFFFFF )
  {
    v28 = 0;
    UserSetLastError(8LL, v11, v13, v14);
  }
  else
  {
    if ( (_DWORD)v20 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v19, v11, v13) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (PDEVICE_OBJECT)(a4 + (unsigned int)v20);
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)v19 > MmUserProbeAddress || (unsigned __int64)v19 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, v11, v13);
    ProbeForWrite(Address, (unsigned int)v20, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0LL; (_DWORD)i != a3; i = (unsigned int)(i + 1) )
    {
      v27 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)(a4 + 8 * i),
              (struct VisualPoint *)&Address[8 * i]);
      if ( v27 < 0 )
      {
        v28 = 0;
        v29 = RtlNtStatusToDosError(v27);
        UserSetLastError(v29, v30, v31, v32);
        goto LABEL_36;
      }
    }
    v28 = 1;
  }
LABEL_36:
  if ( !v28 )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v22, v24, v25);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v9;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v35,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        11,
        (__int64)&WPP_34c4a09b7329367a4784537b13b7b9d2_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCrit((__int64)v23, v22, v24, v25);
  return v28;
}
