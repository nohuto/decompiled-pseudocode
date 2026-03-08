/*
 * XREFs of WdipSemCleanStart @ 0x1408318F0
 * Callers:
 *     WdipSemInitialize @ 0x140831898 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DAB4C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x140796868 (WdipSemGetLoggerIds.c)
 *     WdipSemLoadGroupPolicy @ 0x14083195C (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1408319B4 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadConfigInfo @ 0x140831C8C (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1408320C4 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 *     WdipSemCleanupGroupPolicy @ 0x140834798 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemShutdown @ 0x1409DAE00 (WdipSemShutdown.c)
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
