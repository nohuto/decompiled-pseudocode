/*
 * XREFs of PpmPerfControlExecuteAction @ 0x140306DDC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140303540 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x140306DC0 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x14039A790 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
