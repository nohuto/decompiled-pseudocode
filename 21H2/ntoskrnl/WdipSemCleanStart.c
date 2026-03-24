/*
 * XREFs of WdipSemCleanStart @ 0x14079905C
 * Callers:
 *     WdipSemInitialize @ 0x140799008 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092FB54 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x14078978C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407990C8 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1407990E8 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x1407991F0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140799248 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140799338 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140799978 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14092FE10 (WdipSemShutdown.c)
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
