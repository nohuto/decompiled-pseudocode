/*
 * XREFs of IsxxxDwmStopRedirectionSupported @ 0x1C00766F0
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00761B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxDwmStopRedirectionSupported()
{
  if ( qword_1C0256EA0 )
    return qword_1C0256EA0();
  else
    return 3221225659LL;
}
