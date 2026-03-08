/*
 * XREFs of PspGetNextJobProcess @ 0x1406F90E0
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1402FF830 (PspExecuteJobFreezeThawCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x1406F8A00 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x1407DCFE0 (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1409B04F0 (PspWaitOnAllProcessesJobCallback.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FC178 (PspLockJobExclusive.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r14
  _QWORD *i; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi

  PspLockJobExclusive(a1, a2);
  if ( a4 )
  {
    v10 = (_QWORD *)(a1 + 40);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 1304);
    v9 = *(_QWORD *)(a1 + 1304);
    if ( *(_QWORD *)(v9 + 8) != a1 + 1304 )
      goto FatalListEntryError_78;
    *a3 = v9;
    v10 = (_QWORD *)(a1 + 40);
    a3[1] = v8;
    *(_QWORD *)(v9 + 8) = a3;
    *v8 = a3;
    a3[2] = a1 + 40;
  }
  for ( i = *(_QWORD **)a3[2]; i != v10; i = (_QWORD *)*i )
  {
    v14 = i - 185;
    if ( ObReferenceObjectSafeWithTag((__int64)(i - 185)) )
      goto LABEL_10;
  }
  v12 = (_QWORD *)*a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v13 = (_QWORD *)a3[1], (_QWORD *)*v13 != a3) )
FatalListEntryError_78:
    __fastfail(3u);
  *v13 = v12;
  v14 = 0LL;
  v12[1] = v13;
  if ( v13 != v12 )
    v14 = 0LL;
LABEL_10:
  a3[2] = i;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v14;
}
