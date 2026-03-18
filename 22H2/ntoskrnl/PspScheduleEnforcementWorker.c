/*
 * XREFs of PspScheduleEnforcementWorker @ 0x1407D8D58
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FAC70 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1536), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
