/*
 * XREFs of WdipSemCleanStart @ 0x1408315A0
 * Callers:
 *     WdipSemInitialize @ 0x140831548 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1409DD9EC (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407E5C34 (WdipSemGetLoggerIds.c)
 *     WdipSemLoadGroupPolicy @ 0x14083160C (WdipSemLoadGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140831664 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadConfigInfo @ 0x14083193C (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140831D74 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832854 (WdipSemLoadScenarioTable.c)
 *     WdipSemCleanupGroupPolicy @ 0x140834448 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemShutdown @ 0x1409DDCA0 (WdipSemShutdown.c)
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
