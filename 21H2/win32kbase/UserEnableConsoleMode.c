/*
 * XREFs of UserEnableConsoleMode @ 0x1C023E464
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C029C228 )
    return qword_1C029C228();
  else
    return 3221225659LL;
}
