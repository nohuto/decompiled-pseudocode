/*
 * XREFs of UserEnableConsoleMode @ 0x1C02720EC
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C02D6A80 )
    return qword_1C02D6A80();
  else
    return 3221225659LL;
}
