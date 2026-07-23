/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14022D9EC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140228D60 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x14022D9D0 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x14039AFE0 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
