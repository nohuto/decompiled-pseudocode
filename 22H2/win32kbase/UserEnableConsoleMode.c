/*
 * XREFs of UserEnableConsoleMode @ 0x1C01FC6A4
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00761B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007671C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C02564E8 )
    return qword_1C02564E8();
  else
    return 3221225659LL;
}
