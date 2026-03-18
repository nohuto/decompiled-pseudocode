/*
 * XREFs of PpmPerfControlExecuteAction @ 0x140355EBC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140350950 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x140355E80 (PpmPerfCommitPerformance.c)
 *     PpmPerfReadFeedback @ 0x140355EA0 (PpmPerfReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
