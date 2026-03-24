/*
 * XREFs of IsUserEnableConsoleModeSupported @ 0x1C0074DBC
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074AD8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007503C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserEnableConsoleModeSupported()
{
  if ( qword_1C02574E0 )
    return qword_1C02574E0();
  else
    return 3221225659LL;
}
