/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140615028
 * Callers:
 *     PspJobClose @ 0x140614EC0 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x140614FB0 (NtTerminateJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140681F80 (PspEnforceLimitsJobPostCallback.c)
 *     PsTerminateServerSilo @ 0x140905E60 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0 (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwTraceJob @ 0x140935F18 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(volatile signed __int32 *Object, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(Object + 330, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy((PVOID)Object, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob((PVOID)Object);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Object, v6, a2, 1825LL);
  return v3;
}
