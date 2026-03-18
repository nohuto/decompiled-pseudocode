/*
 * XREFs of IsUserEnableConsoleModeSupported @ 0x1C0086240
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0086004 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserEnableConsoleModeSupported()
{
  if ( qword_1C0295900 )
    return qword_1C0295900();
  else
    return 3221225659LL;
}
