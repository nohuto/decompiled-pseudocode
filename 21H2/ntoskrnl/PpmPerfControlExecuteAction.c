/*
 * XREFs of PpmPerfControlExecuteAction @ 0x1402AF68C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1402AAC20 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x1402AF670 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x14039AE90 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
