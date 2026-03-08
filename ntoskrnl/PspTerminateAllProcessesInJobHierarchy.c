/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140791E78
 * Callers:
 *     PspJobClose @ 0x1406F8760 (PspJobClose.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     NtTerminateJobObject @ 0x140791E00 (NtTerminateJobObject.c)
 *     PsTerminateServerSilo @ 0x1409A98D0 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F8844 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1409E2518 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(struct _KEVENT *Object, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(&Object[64].Header.Lock, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Object, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Object, 0, 0);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(Object, v6, a2, 1825LL);
  return v3;
}
