/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C0024770
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     ??0EnterLeaveCritByVelocityWithDispositionOverride@@QEAA@W4CritOptType@@_NW4HandleToObjILCheck@@@Z @ 0x1C0024E9C (--0EnterLeaveCritByVelocityWithDispositionOverride@@QEAA@W4CritOptType@@_NW4HandleToObjILCheck@@.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // rsi
  __int64 v10; // rbx
  bool v11; // r8
  bool v12; // zf
  __int64 v13; // r12
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 v16; // rcx
  ULONG64 v17; // r14
  ULONG64 v18; // rdx
  _BYTE **v19; // rax
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  char v24; // di
  int v25; // edx
  int v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+C0h] [rbp+8h]
  char v28; // [rsp+D8h] [rbp+20h] BYREF

  v27 = a1;
  v7 = a3;
  v9 = a1;
  if ( a4 + 1 <= 0xF )
  {
    v10 = 0LL;
    v11 = !(_DWORD)a3 && (*((_BYTE *)&unk_1C02E8960 + (int)a4 + 1) & 0x10) != 0;
    if ( (*((_BYTE *)&unk_1C02E8960 + (int)a4 + 1) & 4) != 0 || (v12 = !v11, LOBYTE(a3) = 0, !v12) )
      LOBYTE(a3) = 1;
    EnterLeaveCritByVelocityWithDispositionOverride::EnterLeaveCritByVelocityWithDispositionOverride(
      &v28,
      &unk_1C02E8960,
      a3,
      0LL);
    if ( v7 )
    {
      v13 = PtiFromThreadId(v7);
      if ( !v13 )
      {
        UserSetLastError(87LL);
LABEL_28:
        UserSessionSwitchLeaveCrit(v22);
        return v10;
      }
    }
    else
    {
      LODWORD(v13) = 0;
    }
    if ( v9 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
      ProbeForRead(ProcessPeb, 0x7D0uLL, 1u);
      if ( ProcessPeb[2] == v9 )
      {
        v9 = 0LL;
        v27 = 0LL;
        a2 = 0LL;
      }
    }
    if ( !v9 || !a2 )
    {
      v17 = 0LL;
      goto LABEL_25;
    }
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    v16 = *a2;
    v26 = *a2;
    v17 = *((_QWORD *)a2 + 1);
    if ( (v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v17 + (unsigned __int16)v16 + 2LL;
    v19 = (_BYTE **)MmUserProbeAddress;
    if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v26) )
    {
      if ( (v16 & 1) != 0 )
        goto LABEL_21;
      if ( v18 > v17 )
      {
LABEL_24:
        v9 = v27;
LABEL_25:
        v20 = a5;
        v21 = (__int64 *)zzzSetWindowsHookEx(v9, v17, v13, a4, a5, a6, 0LL);
        if ( v21 )
          v10 = *v21;
        EtwTraceAuditApiSetWindowsHookEx(a4, v17, v9, v20, v10);
        goto LABEL_28;
      }
    }
    if ( (v16 & 1) == 0 )
    {
LABEL_22:
      **v19 = 0;
      goto LABEL_24;
    }
LABEL_21:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    v19 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0LL;
    v24 = 0;
  }
  else
  {
    v24 = 1;
    v10 = 0LL;
  }
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = 11;
    LOBYTE(v25) = v24;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      11,
      (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
      a4);
  }
  UserSetLastError(1426LL);
  return v10;
}
