/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00B5EB0
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00ABCF0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011BB50 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
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
