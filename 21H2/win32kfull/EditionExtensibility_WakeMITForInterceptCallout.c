/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01D4100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  EtwTraceWakeMIT(4LL);
  return (unsigned __int8)WakeMIT(4LL);
}
