/*
 * XREFs of PpmCheckReportComplete @ 0x14030F380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char PpmCheckReportComplete()
{
  if ( PpmCheckCompleteHandler )
    PpmCheckCompleteHandler(PpmPerfGlobalContext, PpmCheckTime);
  return 1;
}
