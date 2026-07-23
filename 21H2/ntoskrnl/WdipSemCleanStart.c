/*
 * XREFs of WdipSemCleanStart @ 0x14079925C
 * Callers:
 *     WdipSemInitialize @ 0x140799208 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092FCB4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x14078994C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407992C8 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1407992E8 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x1407993F0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140799448 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140799538 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140799B78 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14092FF70 (WdipSemShutdown.c)
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
