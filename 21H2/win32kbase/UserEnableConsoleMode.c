/*
 * XREFs of UserEnableConsoleMode @ 0x1C01FC774
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074AD8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007503C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C02574E8 )
    return qword_1C02574E8();
  else
    return 3221225659LL;
}
