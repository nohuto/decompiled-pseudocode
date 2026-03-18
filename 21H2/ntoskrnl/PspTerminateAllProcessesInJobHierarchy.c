/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1406D78E0
 * Callers:
 *     NtTerminateJobObject @ 0x1406D7770 (NtTerminateJobObject.c)
 *     PspJobClose @ 0x1406D77F0 (PspJobClose.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140683DF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1409E21EC (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(&Event[63].Header.Lock, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, (__int64)&v8, 2);
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
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v3;
}
