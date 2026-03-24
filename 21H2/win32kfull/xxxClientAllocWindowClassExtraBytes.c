/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C0051E4C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x1C016824C (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v3; // rsi
  int v4; // ebx
  volatile void **v5; // rcx
  volatile void *v6; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  volatile void *v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v3 = (unsigned int)Length;
  v9 = 0LL;
  v13 = 0;
  v10 = 0LL;
  v14 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x800) != 0 )
  {
    v11 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6510LL);
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(123LL);
  v4 = KeUserModeCallback(123LL, &v14, 4LL, &v9, &v13);
  EtwTraceEndCallback(123LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  if ( v4 < 0 || v13 != 24 )
    return 0LL;
  v5 = (volatile void **)v9;
  if ( v9 + 8 < v9 || v9 + 8 > MmUserProbeAddress )
    v5 = (volatile void **)MmUserProbeAddress;
  v10 = *v5;
  v6 = v10;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  ProbeForRead(v6, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x800) != 0 )
    return 0LL;
  else
    return v6;
}
