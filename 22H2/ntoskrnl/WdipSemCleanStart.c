/*
 * XREFs of WdipSemCleanStart @ 0x140793EEC
 * Callers:
 *     WdipSemInitialize @ 0x140793E98 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092FBA4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x14078968C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x140793F58 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140793F78 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140794080 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1407940D8 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1407941C8 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140794808 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14092FE60 (WdipSemShutdown.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
