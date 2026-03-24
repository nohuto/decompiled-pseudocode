/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140698B28
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140618780 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x1406989C0 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x140698AB0 (NtTerminateJobObject.c)
 *     PsTerminateServerSilo @ 0x140905D50 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140618450 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140935D98 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(&Event[55].Header.Lock, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event, 0, 0);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v3;
}
