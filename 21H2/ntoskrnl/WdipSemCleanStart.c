/*
 * XREFs of WdipSemCleanStart @ 0x14083F570
 * Callers:
 *     WdipSemInitialize @ 0x14083F51C (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DA758 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1406E6CB0 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x14083F5DC (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14083F5FC (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x14083F704 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14083F75C (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x14083F84C (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14083FE80 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1409DA868 (WdipSemShutdown.c)
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
