/*
 * XREFs of PpmPerfControlExecuteAction @ 0x1402EA3CC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1402E3F50 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x1402EA390 (PpmPerfCommitPerformance.c)
 *     PpmPerfReadFeedback @ 0x1402EA3B0 (PpmPerfReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  char v1; // bl

  v1 = 0;
  if ( !a1 )
    return 1;
  a1(PpmPerfControlActionCallback);
  return v1;
}
