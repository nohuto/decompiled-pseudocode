/*
 * XREFs of IsUserEnableConsoleModeSupported @ 0x1C0090C30
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserEnableConsoleModeSupported()
{
  if ( qword_1C02D6A78 )
    return qword_1C02D6A78();
  else
    return 3221225659LL;
}
