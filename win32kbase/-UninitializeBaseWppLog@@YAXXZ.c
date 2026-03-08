/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00D21D0
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00C35F8 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void UninitializeBaseWppLog(void)
{
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  }
  if ( gRimLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    gRimLog = 0LL;
  }
}
