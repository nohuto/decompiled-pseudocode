/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C007709C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v3; // rsi
  int v4; // ebx
  volatile void **v5; // rcx
  volatile void *v6; // rbx
  __int64 CurrentProcessWow64Process; // rax
  char v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = (unsigned int)Length;
  v12 = 0LL;
  v10 = 0;
  v11 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Length);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(123LL);
  v4 = KeUserModeCallback(123LL, &v11, 4LL, &v12, &v10);
  EtwTraceEndCallback(123LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  if ( v4 < 0 || v10 != 24 )
    return 0LL;
  v5 = (volatile void **)v12;
  if ( v12 + 8 < v12 || v12 + 8 > MmUserProbeAddress )
    v5 = (volatile void **)MmUserProbeAddress;
  v6 = *v5;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  ProbeForRead(v6, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) != 0 )
    return 0LL;
  else
    return v6;
}
