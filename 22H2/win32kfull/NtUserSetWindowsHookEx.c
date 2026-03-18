/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C006F550
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocityWithDispositionOverride@@QEAA@W4CritOptType@@_NW4HandleToObjILCheck@@@Z @ 0x1C006F7BC (--0EnterLeaveCritByVelocityWithDispositionOverride@@QEAA@W4CritOptType@@_NW4HandleToObjILCheck@@.c)
 *     zzzSetWindowsHookEx @ 0x1C006F810 (zzzSetWindowsHookEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, ULONG64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  unsigned int v7; // r15d
  ULONG64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbx
  void *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  int v18; // ecx
  ULONG64 v19; // r14
  ULONG64 v20; // rdx
  __int64 v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v28; // di
  int v29; // edx
  __int64 v30; // [rsp+C0h] [rbp+8h]
  int v31; // [rsp+D8h] [rbp+20h] BYREF

  v30 = a1;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( a4 + 1 <= 0xF )
  {
    v10 = 0LL;
    v11 = &unk_1C0317020;
    LOBYTE(a2) = !v7 && (*((_BYTE *)&unk_1C0317020 + (int)a4 + 1) & 0x10) != 0;
    if ( (*((_BYTE *)&unk_1C0317020 + (int)a4 + 1) & 4) != 0 || (LOBYTE(v11) = 0, (_BYTE)a2) )
      LOBYTE(v11) = 1;
    EnterLeaveCritByVelocityWithDispositionOverride::EnterLeaveCritByVelocityWithDispositionOverride(&v31, a2, v11, 0LL);
    if ( v7 )
    {
      v15 = PtiFromThreadId(v7);
      if ( !v15 )
      {
        UserSetLastError(87LL);
LABEL_29:
        UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
        return v10;
      }
    }
    else
    {
      LODWORD(v15) = 0;
    }
    if ( !v9 )
      goto LABEL_31;
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14);
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7D0uLL, 1u);
    if ( ProcessPeb[2] == v9 )
    {
      v9 = 0LL;
      v30 = 0LL;
      v8 = 0LL;
    }
    if ( !v9 || !v8 )
    {
LABEL_31:
      v19 = 0LL;
      goto LABEL_26;
    }
    if ( v8 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v18 = *(_DWORD *)v8;
    v31 = *(_DWORD *)v8;
    v19 = *(_QWORD *)(v8 + 8);
    if ( (v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v18 + v19 + 2;
    if ( v20 <= v19 || v20 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v18 > HIWORD(v31) )
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_24;
    }
    else if ( (v18 & 1) == 0 )
    {
      v9 = v30;
LABEL_26:
      v21 = a5;
      v22 = (__int64 *)zzzSetWindowsHookEx(v9, v19, v15, a4, a5, a6, 0LL);
      if ( v22 )
        v10 = *v22;
      EtwTraceAuditApiSetWindowsHookEx(a4, v19, v9, v21, v10);
      goto LABEL_29;
    }
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3355LL);
LABEL_24:
    ExRaiseAccessViolation();
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0LL;
    v28 = 0;
  }
  else
  {
    v28 = 1;
    v10 = 0LL;
  }
  if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 11;
    LOBYTE(v29) = v28;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v29,
      a3,
      (_DWORD)gFullLog,
      2,
      5,
      11,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
      a4);
  }
  UserSetLastError(1426LL);
  return v10;
}
