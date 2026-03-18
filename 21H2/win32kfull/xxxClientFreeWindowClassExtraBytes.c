/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C00F806C
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxConsoleControl @ 0x1C007A708 (xxxConsoleControl.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x10) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
  v5[1] = a2;
  v5[0] = v4;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v5, 16LL, &v8, &v7);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
}
