__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, ULONG64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // rsi
  __int64 v10; // rbx
  bool v11; // r8
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  int v19; // ecx
  ULONG64 v20; // r14
  ULONG64 v21; // rdx
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rcx
  char v26; // di
  __int64 v27; // [rsp+C0h] [rbp+8h]
  int v28; // [rsp+D8h] [rbp+20h] BYREF

  v27 = a1;
  v7 = a3;
  v9 = a1;
  if ( a4 + 1 <= 0xF )
  {
    v10 = 0LL;
    v11 = !(_DWORD)a3 && (*((_BYTE *)&unk_1C0319260 + (int)a4 + 1) & 0x10) != 0;
    if ( (*((_BYTE *)&unk_1C0319260 + (int)a4 + 1) & 4) != 0 || (v12 = !v11, LOBYTE(a3) = 0, !v12) )
      LOBYTE(a3) = 1;
    EnterLeaveCritByVelocityWithDispositionOverride::EnterLeaveCritByVelocityWithDispositionOverride(
      &v28,
      &unk_1C0319260,
      a3,
      0LL);
    if ( v7 )
    {
      v16 = PtiFromThreadId(v7);
      if ( !v16 )
      {
        UserSetLastError(87);
LABEL_29:
        UserSessionSwitchLeaveCrit(v24);
        return v10;
      }
    }
    else
    {
      LODWORD(v16) = 0;
    }
    if ( !v9 )
      goto LABEL_31;
    CurrentProcess = PsGetCurrentProcess(v14, v13, v15);
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7D0uLL, 1u);
    if ( ProcessPeb[2] == v9 )
    {
      v9 = 0LL;
      v27 = 0LL;
      a2 = 0LL;
    }
    if ( !v9 || !a2 )
    {
LABEL_31:
      v20 = 0LL;
      goto LABEL_26;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v19 = *(_DWORD *)a2;
    v28 = *(_DWORD *)a2;
    v20 = *(_QWORD *)(a2 + 8);
    if ( (v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (unsigned __int16)v19 + v20 + 2;
    if ( v21 <= v20 || v21 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v19 > HIWORD(v28) )
    {
      if ( (v19 & 1) == 0 )
        goto LABEL_24;
    }
    else if ( (v19 & 1) == 0 )
    {
      v9 = v27;
LABEL_26:
      v22 = a5;
      v23 = (__int64 *)zzzSetWindowsHookEx(v9, v20, v16, a4, a5, a6, 0LL);
      if ( v23 )
        v10 = *v23;
      EtwTraceAuditApiSetWindowsHookEx(a4, v20, v9, v22, v10);
      goto LABEL_29;
    }
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3396LL);
LABEL_24:
    ExRaiseAccessViolation();
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0LL;
    v26 = 0;
  }
  else
  {
    v26 = 1;
    v10 = 0LL;
  }
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v26,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      2u,
      0xCu,
      0xBu,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
      a4);
  UserSetLastError(1426);
  return v10;
}
