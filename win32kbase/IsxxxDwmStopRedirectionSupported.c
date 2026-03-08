/*
 * XREFs of IsxxxDwmStopRedirectionSupported @ 0x1C0091F34
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxDwmStopRedirectionSupported()
{
  if ( qword_1C02D72F8 )
    return qword_1C02D72F8();
  else
    return 3221225659LL;
}
