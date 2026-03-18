/*
 * XREFs of EditionUninitializeWppLogging @ 0x1C01214B0
 * Callers:
 *     <none>
 * Callees:
 *     WppCleanupKm @ 0x1C0377DAC (WppCleanupKm.c)
 */

__int64 __fastcall EditionUninitializeWppLogging(__int64 a1)
{
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  }
  return WppCleanupKm(a1);
}
